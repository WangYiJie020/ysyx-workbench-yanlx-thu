
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int mem[100] = {0x02010113,0x02010113,,0x02010113,0x02010113,0x00100073};

int pmem_read(int pc) {
  return mem[(pc-0x80000000)/4];

}

extern "C" void ebreak() {
  $finish;
}

int main(int argc, char** argv) {
  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vtop* top = new Vtop{contextp};

  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

  void single_cycle();
  void reset(int n);

  int n = 10;

  top->rst_n = 0;
  while (n > 0) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    n--;
  }
  top->rst_n = 1;

  while (!contextp->gotFinish()) {
    top->inst = pmem_read(top->pc);
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    printf("pc=%x\n",top->pc);
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    
  }
  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
