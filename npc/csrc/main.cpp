
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <assert.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int mem[10000] = {0x02010113,0x02010113,0x02010113,0x02010113,0x00100073};

int pmem_read(int pc) {
  return mem[(pc-0x80000000)/4];

}

extern "C" void ebreak() {
  printf("finish\n");
}

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static int difftest_port = 1234;

static long load_img() {
  if (img_file == NULL) {
    printf("No image is given. Use the default build-in image.\n");
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  if(fp == NULL) assert("Can not open imgfile");

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  printf("The image is %s, size = %ld\n", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(mem, size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  
  const struct option table[] = {
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {0          , 0, NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-hd:p:", table, NULL)) != -1) {
    switch (o) {
      printf("%c,%d\n",o,o);
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'd': diff_so_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

int main(int argc, char** argv) {
  parse_args(argc, argv);
  long img_size = load_img();
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
