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

regfile cpu;
int cpu_state = 0;

extern regfile cpu;
extern int cpu_state;

#endif