#include "common.h"
#include "debug.h"
#include "macro.h"
#include "utils.h"
#include "include.h"


const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
	int i=32;
	//printf("%d",cpu.gpr[1]);
	for(;i>0;i--) {
		printf("%s\t%x\n",regs[32-i],cpu.gpr[32-i]);
	}

}

word_t isa_reg_str2val(const char *s, bool *success) {
  bool flag=0;
  int i=32;
  uint32_t value=0;
  char reg1[10]={'x','\0'};
  //printf("%s\n",reg1);
  //sscanf(s,"%s",reg1);
  strcpy(reg1,s);
  //printf("%s\n",reg1);
  for(;i>0;i--) {
    if(strcmp(regs[32-i], reg1) == 0){
      flag=1;
      printf("%s\t%x\n",regs[32-i],cpu.gpr[32-i]);
      value=cpu.gpr[32-i];      
    }	
	}

  if(!flag) {
    *success=0;
    assert(0);
  }
  return value;
}