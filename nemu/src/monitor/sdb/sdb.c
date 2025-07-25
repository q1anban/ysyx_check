/***************************************************************************************
 * Copyright (c) 2014-2024 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <memory/vaddr.h>
#include "sdb.h"

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char *rl_gets()
{
  static char *line_read = NULL;

  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read)
  {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args)
{
  cpu_exec(-1);
  return 0;
}

static int cmd_w(char *args)
{
  WP *wp = new_wp();
  if (wp == NULL)
  {
    printf("No free watchpoint available\n");
    return 1;
  }
  // find a unique ID
  for (int i = 0;; i++)
  {
    WP *p = get_wp_by_no(i);
    if (p == NULL)
    {
      wp->NO = i;
      break;
    }
  }
  strncpy(wp->expr, args, 63);
  wp->expr[63] = '\0';
  bool success = false;
  wp->value = expr(wp->expr, &success);
  Assert(success, "Invalid expression: %s", wp->expr);
  printf("Watchpoint %d: %s\nValue: %d\n", wp->NO, wp->expr, wp->value);
  return 0;
}

static int cmd_q(char *args)
{
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_d(char *args)
{
  int n;
  if (sscanf(args, "%d", &n) != 1)
  {
    printf("Invalid argument: %s\n", args);
    return 1;
  }
  WP *wp = get_wp_by_no(n);
  if (wp == NULL)
  {
    printf("No watchpoint with number %d\n", n);
    return 1;
  }
  free_wp(wp);
  printf("Watchpoint %d deleted\n", n);
  return 0;
}

static int cmd_x(char *args)
{ // only support const
  uint32_t addr, n;
  if (sscanf(args, "%d %x", &n, &addr) != 2)
  {
    printf("Invalid arguments: %s\n", args);
    return 1;
  }
  for (int i = 0; i < n; i++)
  {
    printf("0x%08x:0x%08x\n", addr + i * 4, vaddr_read(addr + i * 4, 4));
  }
  return 0;
}

static int cmd_si(char *args)
{
  int n = 1;
  if (args != NULL)
  {
    sscanf(args, "%d", &n);
    if (n <= 0)
    {
      printf("Invalid argument: %s\n", args);
      return 1;
    }
  }
  cpu_exec(n);
  return 0;
}

static int cmd_info(char *args)
{
  if (args == NULL)
  {
    printf("Usage: info [r|w]\n");
    return 1;
  }

  if (strcmp(args, "r") == 0)
  {
    isa_reg_display();
  }
  else if (strcmp(args, "w") == 0)
  {
    WP *wp = get_head_wp();
    printf("Watchpoints:\n");
    while (wp != NULL)
    {
      printf("Watchpoint %d: %s\n", wp->NO, wp->expr);
      wp = wp->next;
    }
  }
  else
  {
    printf("Unknown command '%s'\n", args);
  }
  return 0;
}

static int cmd_help(char *args);

static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display information about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"q", "Exit NEMU", cmd_q},
    {"si", "Execute one instruction (or N instructions) and stop", cmd_si},
    {"info", "Show information about registers or watchpoints", cmd_info},
    {"x", "Examine memory", cmd_x},
    {"w", "Add watchpoint", cmd_w},
    {"d", "Delete watchpoint", cmd_d}
    /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_set_batch_mode()
{
  is_batch_mode = true;
}

void test_eval()
{
  FILE *test = fopen("input", "r");
  Assert(test != NULL, "Cannot open test file");
  char buf[1024];
  while (fgets(buf, sizeof(buf), test) != NULL)
  {
    bool success = true;
    word_t reference;
    int i = 0;
    while (buf[i++] != ' ')
      ;
    sscanf(buf, "%u", &reference);
    char *expr_str = buf + i;
    word_t result = expr(expr_str, &success);
    if (!success || result != reference)
    {
      printf("Error: %s\n", expr_str);
      printf("Expected: %u\n", reference);
      Assert(0, "Got: %u\n", result);
    }
  }
}

void sdb_mainloop()
{

  if (is_batch_mode)
  {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL;)
  {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_eventinit_monitorinit_monitor_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}

void init_sdb()
{
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
