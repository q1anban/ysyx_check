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

enum {
  TK_NOTYPE = 256, 
  TK_EQ,
  TK_DECIMAL,
  TK_HEXADECIMAL,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"-", '-'},          // minus
  {"\\*", '*'},        // multiply
  {"/", '/'},          // divide
  {"\\(", '('},        // left parenthesis
  {"\\)", ')'},        // right parenthesis
  {"0[xX][0-9a-fA-F]+", TK_HEXADECIMAL}, // hex number
  {"[0-9]+", TK_DECIMAL},     // decimal number
  {"==", TK_EQ},        // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
          case TK_NOTYPE: break;
          case TK_DECIMAL:
          case TK_HEXADECIMAL:
            tokens[nr_token].type = rules[i].token_type;
            strncpy(tokens[nr_token].str, substr_start, substr_len);
            tokens[nr_token].str[substr_len] = '\0';
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

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

static int check_parentheses(int start, int end) {
  if (tokens[start].type != '(' || tokens[end].type != ')') {
    return 0;
  }

  int balance = 1;
  for (int i = start + 1; i < end; i++) {
    if (tokens[i].type == '(') {
      balance++;
    }
    else if (tokens[i].type == ')') {
      balance--;
      if (balance == 0 && i != end - 1) {
        return 0;
      }
    }
  }

  return balance == 0 ? 1 : 0;
}

word_t eval(int start,int end)
{
  if (start > end) {
    return 0;
  }

  if (start == end) {
    Assert(tokens[start].type == TK_DECIMAL || tokens[start].type == TK_HEXADECIMAL,
           "Invalid token type: %d", tokens[start].type);
    return strtol(tokens[start].str, NULL, 0);
  }

  if (check_parentheses(start, end)) {
    return eval(start + 1, end - 1);
  }
  int op = -1;
  int op_priority = -1;

  for (int i = start; i <= end; i++) {
    if (tokens[i].type == '+' || tokens[i].type == '-') {
      if (op_priority < 1) {
        op = i;
        op_priority = 1;
      }
    }
    else if (tokens[i].type == '*' || tokens[i].type == '/') {
      if (op_priority < 2) {
        op = i;
        op_priority = 2;
      }
    }else if(tokens[i].type == '(')
    {
      while(tokens[i++].type != ')')
      {
        Assert(i <= end, "No matching parenthesis");
      }
    }else if(tokens[i].type ==')')
    {
      Assert(0, "Unmatched parenthesis");
    }
  }
  Assert(op != -1, "No operator found in expression");
  int val1 = eval(start, op - 1);
  int val2 = eval(op + 1, end);

  switch (tokens[op].type) {
    case '+': return val1 + val2;
    case '-': return val1 - val2;
    case '*': return val1 * val2;
    case '/': 
      Assert(val2 != 0, "Division by zero");
      return val1 / val2;
    default: assert(0);
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  int result = eval(0, nr_token - 1);
  *success = true;
  return result;
}
