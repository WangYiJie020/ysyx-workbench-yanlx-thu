
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <assert.h>
#include <regex.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <fcntl.h>
#include <unistd.h>
#include <dlfcn.h>
#include <elf.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上
#include "common.h"
#include "debug.h"
#include "macro.h"
#include "utils.h"
#include "include.h"
#include "paddr.h"


int cpu_state;
int mem[0xffffffff];


VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针


#define  DIFFTEST_ON


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;



uint32_t pmem_read(uint32_t pc) {
  uint32_t tmp = pc / 4 ;
  printf("pc=%x,%08x\n",pc,mem[tmp]);
  return mem[tmp];

}

FILE *log_fp = NULL;


void init_log(const char *log_file) {
  log_fp = stdout;
  if (log_file != NULL) {
    FILE *fp = fopen(log_file, "w");
    if(fp == NULL)
      printf("Can not open '%s'", log_file);
    log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
  //printf("Log is written to %s\n", log_file ? log_file : "stdout");
}

extern "C" void reg_return_value(uint32_t regvalue[32]) {
  int i;
  for(i=0; i<32; i++) {
    cpu.gpr[i] = regvalue[i];
  }
  cpu.pc = top->pc;
}


extern "C" void ebreak() {
  printf("HIT GOOD TRAP\n");
  cpu_state = 1;
  
}

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(unsigned int, void*, long unsigned int, bool))dlsym(handle , "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

  ref_difftest_raise_intr = (void (*)(uint64_t NO))dlsym(handle, "difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)() = (void (*)())dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init();
  //ref_difftest_memcpy(PMEM_LEFT, guest_to_host(PMEM_LEFT), img_size, DIFFTEST_TO_REF);
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool difftest_check() {
  regfile ref;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  return checkregs(&ref, &cpu);
}

void difftest_step() {
  ref_difftest_exec(1);
}

void diff_cpdutreg2ref() {
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
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

  Log("The image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
  int ret = fread(&(mem[0x20000000]), size, 1, fp);
  assert(ret == 1);

  //printf("%x\n",mem[0x20000001]);

  fclose(fp);
  return size;
}

static int parse_args(int argc, char *argv[]) {
  
  const struct option table[] = {
    {"help"     , no_argument      , NULL, 'h'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {0          , 0, NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-hd:p:", table, NULL)) != -1) {
    printf("%c,%d\n",o,o);
    switch (o) {
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

static void trace_and_difftest() {
  log_write("%08x,%08x\n", top->pc,top->inst); 

  bool check = difftest_check();
  //bool check = true;
  //if(check==false) {
  //  return;
  //}
  //else {
    //difftest_step();
  //}
  //puts(_this->logbuf); 
  //difftest_step(_this->pc, dnpc);
  WP * p = head;
  word_t expr(char *e, bool *success);
  while(p!=NULL) {
    
    bool success;
    bool *ptr_success = &success;
    char str[100]={'\0'};
    word_t value_new;
    
    //printf("name:%s\n",p->tokens);
    strcpy(str,p->tokens);
    //printf("name2:%s\n",str);
    value_new=expr(str,ptr_success);


    if(value_new != p->value) {
      p->value = value_new;
      cpu_state = 2;
      printf("触发监视点\n");
      
    }
    p=p->next;
  }
  return ;

}

void cpu_exec(int num) {
  int i;
  for(i = 0; i < num; i++) {
    if(cpu_state == 1){ //finish
      printf("finish\n");
      break;
    }
    if(cpu_state == 2) { //stop
      cpu_state = 0;
      break;
    }
    top->inst = pmem_read(top->pc);
    trace_and_difftest();
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    //printf("pc=%x\n",top->pc);
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    
  }
}



int main(int argc, char** argv) {
  parse_args(argc, argv);
  long img_size = load_img();

  init_log("npc-log.txt");
  init_difftest(diff_so_file, img_size, difftest_port);
  init_sdb();
  cpu_state = 0;
  
  contextp->commandArgs(argc, argv);
  
  contextp->traceEverOn(true); //打开追踪功能
  top->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd


  int n = 10;
  top->rst_n = 0;
  while (n > 0) {
    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    n--;
  }
  top->rst_n = 1;

  sdb_mainloop();


  delete top;
  tfp->close();
  delete contextp;
  return 0;
}
