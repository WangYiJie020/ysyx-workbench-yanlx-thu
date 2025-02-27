/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
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

static WP *head = NULL, *free_ = NULL;

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

WP* new_wp(){
  WP* tmp=NULL;
  if(free_ == NULL) {
    assert(0);
  }
  else {
    
    if(head==NULL) {
      head = free_;
      free_ = free_->next;
      head->next=NULL;
    }
    else {
      tmp = free_;
      free_ = free_->next;
      tmp->next = head;
      head = tmp;
    }

    
  }
  return tmp;

}



void free_wp(WP *wp){
  WP *tmp,*p,*q;
  if(head == NULL) {
    assert(0);
  }
  else {
    if(wp==head){
      wp->next = free_;
      free_ = wp;
      head = head->next;
    }
    else {
      tmp = wp->next;
      wp->next = free_;
      free_ = wp;
      p=head;
      q=head->next;
      while(q!=wp) {
        p=p->next;
        q=q->next;
      }
      p->next = tmp;
    }
    
  }
  return;

}

void print_wp(){
  WP *p;
  p = head;
  if(p==NULL) {
    printf("no watchpoint!");
  }
  else {
    while(p!=NULL) {
      printf("watchpoint NO.%d\n\r",p->NO);
      p = p->next;
    }
    
  }
}

