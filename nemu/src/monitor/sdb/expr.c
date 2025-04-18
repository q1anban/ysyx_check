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

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <memory/vaddr.h>
#define IS_BINARY_OP(type) ((type) == '+' || (type) == '-' || (type) == '*' || (type) == '/' || \
                            (type) == TK_EQ || (type) == TK_NE || (type) == TK_AND)
#define MAX_TOKEN_NUM 32
#define MAX_PRIORITY 4

enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_DECIMAL,
  TK_HEXADECIMAL,
  TK_NE,
  TK_AND,
  TK_REG,
  TK_DEREF,
  TK_NEG,
  /* TODO: Add more token types */

};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE},                     // spaces
    {"\\+", '+'},                          // plus
    {"-", '-'},                            // minus or negation
    {"\\*", '*'},                          // multiply or dereference
    {"/", '/'},                            // divide
    {"\\(", '('},                          // left parenthesis
    {"\\)", ')'},                          // right parenthesis
    {"0[xX][0-9a-fA-F]+", TK_HEXADECIMAL}, // hex number
    {"[0-9]+", TK_DECIMAL},                // decimal number
    {"==", TK_EQ},                         // equal
    {"!=", TK_NE},
    {"&&", TK_AND},
    {"\\$[a-zA-Z_][a-zA-Z0-9_]*", TK_REG}, // register
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[MAX_TOKEN_NUM] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;

static void print_tokens(Token token)
{
  switch (token.type)
  {
  case TK_DECIMAL:
  case TK_HEXADECIMAL:
  case TK_REG:
    printf("%s", token.str);
    break;
  case TK_DEREF:
    printf("*");
    break;
  case TK_NEG:
    printf("-");
    break;
  case TK_EQ:
    printf("==");
    break;
  case TK_NE:
    printf("!=");
    break;
  case TK_AND:
    printf("&&");
    break;
  default:
    printf("%c", token.type);
    break;
  }
}

// Return the priority of the operator, the highest is MAX_PRIORITY
static int get_priority(int type)
{
  switch (type)
  {
  case TK_DEREF:
  case TK_NEG:
    return MAX_PRIORITY;
  case '*':
  case '/':
    return MAX_PRIORITY - 1;
  case '+':
  case '-':
    return MAX_PRIORITY - 2;
  case TK_EQ:
  case TK_NE:
    return MAX_PRIORITY - 3;
  case TK_AND:
    return MAX_PRIORITY - 4;
  default:
    // Not a real operator, return MAX_PRIORITY + 1 to indicate it
    return MAX_PRIORITY + 1;
  }
}

static bool make_token(char *e)
{
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0' && e[position] != '\n')
  {
    Assert(nr_token < MAX_TOKEN_NUM, "Too many tokens");
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type)
        {
        case TK_NOTYPE:
          break;
        case TK_DECIMAL:
        case TK_HEXADECIMAL:
        case TK_REG:
          tokens[nr_token].type = rules[i].token_type;
          strncpy(tokens[nr_token].str, substr_start, substr_len);
          tokens[nr_token].str[substr_len] = '\0';
          nr_token++;
          break;
        case '-':
          if (nr_token == 0 || IS_BINARY_OP(tokens[nr_token - 1].type))
          {
            tokens[nr_token].type = TK_NEG;
          }
          else
          {
            tokens[nr_token].type = rules[i].token_type;
          }
          nr_token++;
          break;
        case '*':
          if (nr_token == 0 || IS_BINARY_OP(tokens[nr_token - 1].type))
          {
            tokens[nr_token].type = TK_DEREF;
          }
          else
          {
            tokens[nr_token].type = rules[i].token_type;
          }
          nr_token++;
          break;
        default:
          tokens[nr_token].type = rules[i].token_type;
          nr_token++;
          break;
        }
        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      // debug

      for (int i = 0; i < nr_token; i++)
      {
        print_tokens(tokens[i]);
        printf(" ");
      }

      return false;
    }
  }
#ifdef DEBUG
  // debug
  for (int i = 0; i < nr_token; i++)
  {
    print_tokens(tokens[i]);
    printf(" ");
  }
#endif
  return true;
}

// check if  the whole expression is in parentheses
static int check_parentheses(int start, int end)
{
  if (tokens[start].type != '(' || tokens[end].type != ')')
  {
    return 0;
  }
  int balance = 1;
  for (int i = start + 1; i < end; i++)
  {
    if (tokens[i].type == '(')
      balance++;
    else if (tokens[i].type == ')')
    {
      balance--;
      if (balance == 0)
      {
        return 0;
      }
    }
  }
  return balance == 1;
}

word_t eval(int start, int end)
{
  //debug
#ifdef DEBUG
  printf("eval: ");
  for (int i = start; i <= end; i++)
  {
    print_tokens(tokens[i]);
  }
#endif
  printf("\n");
  Assert(start <= end, "Invalid expression,start = %d, end = %d", start, end);

  if (start == end) // eval a simple token
  {
    if (tokens[start].type == TK_DECIMAL || tokens[start].type == TK_HEXADECIMAL)
    {
      return strtol(tokens[start].str, NULL, 0);
    }
    else if (tokens[start].type == TK_REG)
    {
      bool success = false;
      int result = isa_reg_str2val(tokens[start].str + 1, &success); // remove the '$'
      //debug
#ifdef DEBUG
      printf("%s ",tokens[start].str + 1);
#endif
      if (success)
      {
        return result;
      }
      else
      {
        Assert(0, "Invalid register name: %s", tokens[start].str);
      }
    }
    else
    {
      print_tokens(tokens[start]);
      Assert(0, "Invalid token type");
    }
  }

  if (check_parentheses(start, end))
  {
    return eval(start + 1, end - 1);
  }
  int op = -1;
  int op_priority = MAX_PRIORITY + 1;
  int balance = 0;

  // Find the main operator
  for (int i = start; i <= end; i++)
  {
    if (tokens[i].type == '(')
    {
      balance++;
      do
      {
        i++;
        if (tokens[i].type == '(')
          balance++;
        else if (tokens[i].type == ')')
          balance--;
      } while (balance > 0 && i <= end);
      Assert(balance == 0, "Unmatched parenthesis,start = %d, end = %d", start, end);
    }
    else if (tokens[i].type == ')')
    {
      Assert(0, "Unmatched parenthesis,start = %d, end = %d", start, end);
    }
    else
    {
      int priority = get_priority(tokens[i].type);
      if (priority <= op_priority)
      {
        op = i;
        op_priority = priority;
      }
    }
  }
  Assert(op != -1, "No operator found in expression,start = %d, end = %d", start, end);

  // eval by the main operator
  if (tokens[op].type == TK_DEREF)
  {
    Assert(op == start, "Invalid dereference operator,start = %d, end = %d", start, end);
    return vaddr_read(eval(start, op - 1), 4);
  }
  else if (tokens[op].type == TK_NEG)
  {
    Assert(op == start, "Invalid negation operator,start = %d, end = %d", start, end);
    return -eval(op + 1, end);
  }
  else//binary operator
  {
    int val1 = eval(start, op - 1);
    int val2 = eval(op + 1, end);

    switch (tokens[op].type)
    {
    case '+':
      return val1 + val2;
    case '-':
      return val1 - val2;
    case '*':
      return val1 * val2;
    case '/':
      Assert(val2 != 0, "Division by zero,start = %d, end = %d,val1 = %d, val2 = %d", start, end, val1, val2);
      return val1 / val2;
    case TK_EQ:
      return val1 == val2;
    case TK_NE:
      return val1 != val2;
    case TK_AND:
      return val1 && val2;
    default:
      Assert(0, "Invalid operator type,start = %d, end = %d", start, end);
    }
  }
}

word_t expr(char *e, bool *success)
{
  if(!make_token(e))
  {
    *success = false;
    return 0;
  }
  /* TODO: Insert codes to evaluate the expression. */
  word_t result = eval(0, nr_token - 1);
  *success = true;
  return result;
}
