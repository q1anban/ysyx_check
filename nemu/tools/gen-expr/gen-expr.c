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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

#define RANDNUM(x) (rand() % (x))

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";



static void gen_op()
{
  int seed = RANDNUM(4);
  switch (seed) 
  {
    case 0:
      strcat(buf, "+");
      break;
    case 1:
      strcat(buf, "-");
      break;
    case 2:
      strcat(buf, "*");
      break;
    case 3:
      strcat(buf, "/");
      break;
  }
}
static void gen_num() {
  int num = RANDNUM(1000000);
  char num_buf[16];
  sprintf(num_buf, "%c%d",RANDNUM(2)?'-':' ',num);
  strcat(buf, num_buf);
}

static void gen_space() {
  int blank = RANDNUM(3);
  for(int i=0; i < blank; i++) {
    strcat(buf, " ");
  }
}

static void gen_expr(int depth, int parenthesis) {
  if(depth > 3) {
    gen_num();
    return;
  }
  gen_space();
  int seed = RANDNUM(4-parenthesis);
  switch (seed) 
  {
    case 0:
    case 1:
      gen_num();
      break;
    case 2:
      gen_expr(depth + 1,0);
      gen_op();
      gen_expr(depth + 1,0);
      break;
    case 3:
      strcat(buf, "(");
      gen_expr(depth + 1,1);
      strcat(buf, ")");
      break;
  }
}

static void gen_rand_expr() {
  buf[0] = '\0';
  gen_expr(0,0);
}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr 2>/tmp/gcc_output.log");
    if (ret != 0) {
      continue;
    }

    FILE *log_fp = fopen("/tmp/gcc_output.log", "r");
    assert(log_fp != NULL);
    fseek(log_fp, 0, SEEK_END);
    long log_size = ftell(log_fp);
    fclose(log_fp);

    if (log_size > 0) {
      continue;
    }

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    ret = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
