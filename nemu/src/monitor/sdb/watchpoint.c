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

#include "sdb.h"
#include <cpu/cpu.h>

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

WP* get_head_wp() {
  return head;
}

WP* get_wp_by_no(int no) {
  WP* wp = head;
  while(wp != NULL) {
    if(wp->NO == no) {
      return wp;
    }
    wp = wp->next;
  }
  return NULL;
}

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp()
{
  if(free_ == NULL) {
    Assert(0, "No free watchpoint available");
  }
  WP *new_wp = free_;
  free_ = free_->next;
  new_wp->next = head;
  head = new_wp;
  return new_wp;
}
void free_wp(WP *wp)
{
  if(wp == NULL) {
    Assert(0, "Invalid watchpoint");
  }
  WP *prev = NULL;
  WP *curr = head;
  while(curr != NULL && curr != wp) {
    prev = curr;
    curr = curr->next;
  }
  if(curr == NULL) {
    Assert(0, "Watchpoint not found");
  }
  if(prev == NULL) {
    head = curr->next;//curr is head
  } else {
    prev->next = curr->next;
  }
  curr->next = free_;
  free_ = curr;
}

void update_wp()
{
  for(WP* wp = head; wp != NULL; wp = wp->next) {
    bool success;
    int new_value = expr(wp->expr, &success);
    Assert(success,"Error in watchpoint expression: %s\n", wp->expr);
    
    if(new_value != wp->value) {
      printf("Watchpoint %d: %s changed from %d to %d\n", wp->NO, wp->expr, wp->value, new_value);
      wp->value = new_value;
      nemu_state.state = NEMU_STOP;
      break;
    }
  }
}

