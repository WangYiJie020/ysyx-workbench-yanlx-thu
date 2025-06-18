#include "common.h"
#include "debug.h"
#include "macro.h"
#include "utils.h"
#include "include.h"


extern "C" void reg_return_value(uint32_t regvalue[32]) {
  int i;
  for(i=0; i<32; i++) {
    cpu.gpr[i] = regvalue[i];
  }
  
}



extern "C" void ebreak() {
  printf("HIT GOOD TRAP\n");
  cpu_state = 1;
  
}