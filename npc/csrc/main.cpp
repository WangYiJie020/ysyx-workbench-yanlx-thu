
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

void single_cycle() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();
}
void reset(int n) {
  top->rst = 1;
  while (n -- > 0) single_cycle();
  top->rst = 0;
}

int mem = {0x00160413,0x00160413}

int pmem_read(int pc) {
  return 0x00160413;

}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

  reset(10);  // 复位10个周期

  while (!contextp->gotFinish()) {
    top->inst = pmem_read(top->pc);
    single_cycle();
    printf("pc=%x\n",top->pc);
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    
  }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}