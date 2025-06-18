#ifndef _INCLUDE_H_

#define _INCLUDE_H_

#include "common.h"
#include "debug.h"
#include "macro.h"
#include "utils.h"

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} regfile;

typedef struct watchpoint {
  int NO;
  char tokens[100];
  uint32_t value;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */

} WP;
extern WP *head;
regfile cpu;
int cpu_state;
int mem[0xffffffff];

extern regfile cpu;
extern int cpu_state;
extern int mem[0xffffffff];

word_t expr(char *e, bool *success);
WP* new_wp();
void free_wp(int num);
void print_wp();

void cpu_exec(int num);
int is_exit_status_bad();
static bool make_token(char *e);
word_t expr(char *e, bool *success);
WP* new_wp(char * arg, uint32_t value);
void free_wp(int num);
void init_wp_pool();
void init_regex();
word_t isa_reg_str2val(const char *s, bool *success);


#endif