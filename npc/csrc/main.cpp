
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
uint32_t mem[0xffffffff];


VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针


#define  DIFFTEST_ON


enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

extern "C" int pmem_read(int raddr) {
  // 总是读取地址为`raddr & ~0x3u`的4字节返回
  
  uint32_t tmp = (uint32_t)raddr /4; //int类型是有符号的，要转成无符号的
  log_write("raddr = %08x,data= %08x\n",raddr,mem[tmp]);
  return mem[tmp];
}
extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  // 总是往地址为`waddr & ~0x3u`的4字节按写掩码`wmask`写入`wdata`
  // `wmask`中每比特表示`wdata`中1个字节的掩码,
  // 如`wmask = 0x3`代表只写入最低2个字节, 内存中的其它字节保持不变
  log_write("                               wmask=%x,waddr = %08x,data= %08x\n",wmask,waddr,wdata);
  if(waddr == RTC_ADDR) {
    log_write("55\n");
    putchar(wdata);
    //log_write("                               wmask=%x,waddr = %08x,data= %08x\n",wmask,waddr,wdata);
    return;
  }
  uint32_t addr_tmp = (uint32_t)waddr / 4;
  switch(wmask) {
    case 0x1:  mem[addr_tmp] = (mem[addr_tmp] & 0xffffff00) + (wdata & 0x000000ff);break;
    case 0x2:  mem[addr_tmp] = (mem[addr_tmp] & 0xffff00ff) + ((wdata & 0x000000ff)<<8);break; 
    case 0x4:  mem[addr_tmp] = (mem[addr_tmp] & 0xff00ffff) + ((wdata & 0x000000ff)<<16);break;
    case 0x8:  mem[addr_tmp] = (mem[addr_tmp] & 0x00ffffff) + ((wdata & 0x000000ff)<<24);break;
    case 0x3:  mem[addr_tmp] = (mem[addr_tmp] & 0xffff0000) + (wdata & 0x0000ffff);break;
    case 0xc:  mem[addr_tmp] = (mem[addr_tmp] & 0x0000ffff) + ((wdata & 0x0000ffff)<<16);break;
    case 0xf:  mem[addr_tmp] = (mem[addr_tmp] & 0x00000000) + (wdata & 0xffffffff);;break;
    default: mem[addr_tmp] = mem[addr_tmp];
  }
  log_write("                               wmask=%x,waddr = %08x,data= %08x\n",wmask,waddr,mem[addr_tmp]);
}

FILE *log_fp = NULL;
uint64_t g_nr_guest_inst = 0;
extern uint64_t g_nr_guest_inst;

void init_log(const char *log_file) {
  //log_fp = stdout;
  if (log_file != NULL) {
    log_fp = fopen(log_file, "w");
    if(log_fp == NULL)
      printf("Can not open '%s'", log_file);
    //log_fp = fp;
  }
  Log("Log is written to %s", log_file ? log_file : "stdout");
  //printf("Log is written to %s\n", log_file ? log_file : "stdout");
}
extern "C" void reg_return_value(uint32_t gpr_0,uint32_t gpr_1,uint32_t gpr_2,uint32_t gpr_3,uint32_t gpr_4,\
uint32_t gpr_5,uint32_t gpr_6,uint32_t gpr_7,uint32_t gpr_8,uint32_t gpr_9,uint32_t gpr_10,uint32_t gpr_11,uint32_t gpr_12,\
uint32_t gpr_13,uint32_t gpr_14,uint32_t gpr_15,uint32_t gpr_16,uint32_t gpr_17,uint32_t gpr_18,uint32_t gpr_19,uint32_t gpr_20,\
uint32_t gpr_21,uint32_t gpr_22,uint32_t gpr_23,uint32_t gpr_24,uint32_t gpr_25,uint32_t gpr_26,uint32_t gpr_27,uint32_t gpr_28,\
uint32_t gpr_29,uint32_t gpr_30,uint32_t gpr_31,uint32_t pc){
  cpu.gpr[0] = gpr_0;
  cpu.gpr[1] = gpr_1;
  cpu.gpr[2] = gpr_2;
  cpu.gpr[3] = gpr_3;
  cpu.gpr[4] = gpr_4;
  cpu.gpr[5] = gpr_5;
  cpu.gpr[6] = gpr_6;
  cpu.gpr[7] = gpr_7;
  cpu.gpr[8] = gpr_8;
  cpu.gpr[9] = gpr_9;
  cpu.gpr[10] = gpr_10;
  cpu.gpr[11] = gpr_11;
  cpu.gpr[12] = gpr_12;
  cpu.gpr[13] = gpr_13;
  cpu.gpr[14] = gpr_14;
  cpu.gpr[15] = gpr_15;
  cpu.gpr[16] = gpr_16;
  cpu.gpr[17] = gpr_17;
  cpu.gpr[18] = gpr_18;
  cpu.gpr[19] = gpr_19;
  cpu.gpr[20] = gpr_20;
  cpu.gpr[21] = gpr_21;
  cpu.gpr[22] = gpr_22;
  cpu.gpr[23] = gpr_23;
  cpu.gpr[24] = gpr_24;
  cpu.gpr[25] = gpr_25;
  cpu.gpr[26] = gpr_26;
  cpu.gpr[27] = gpr_27;
  cpu.gpr[28] = gpr_28;
  cpu.gpr[29] = gpr_29;
  cpu.gpr[30] = gpr_30;
  cpu.gpr[31] = gpr_31;
  cpu.pc = pc;

  //printf("gpr0 = %x",gpr_0);

}

extern "C" void ebreak() {
  if(cpu.gpr[10]==0) {
    printf("HIT GOOD TRAP\n");
    cpu_state = NPC_END;
  }
  else {
    printf("HIT BAD TRAP\n");
    cpu_state = NPC_ABORT;
  }
  
  
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
  ref_difftest_memcpy(PMEM_LEFT, mem+0x20000000, img_size, DIFFTEST_TO_REF);
  cpu.pc = 0x80000000;
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool difftest_check() {
  regfile ref;
  ref_difftest_regcpy(&ref, DIFFTEST_TO_DUT);
  //printf("%x,%x,%x\n",ref.pc,ref.gpr[2],ref.gpr[4]);
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
    //printf("%c,%d\n",o,o);
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
  //log_write("%08x,%08x\n", top->pc,top->inst); 
#ifdef CONFIG_DIFFTEST
  bool check = difftest_check();
  difftest_step();
  if(check==false) {
    cpu_state = NPC_ABORT;
    return;
  }
  
#endif
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
      cpu_state = NPC_STOP;
      printf("触发监视点\n");
      
    }
    p=p->next;
  }
  return ;

}

void cpu_exec(int num) {
  int i;
  for(i = 0; i < num; i++) {
    if(cpu_state == NPC_END){ //finish
      printf("finish\n");
      break;
    }
    if(cpu_state == NPC_STOP) { //stop
      cpu_state = NPC_RUNNING;
      break;
    }
    if(cpu_state == NPC_ABORT) {
      printf("abort! at pc=%x\n",cpu.pc);
      break;
    }
    trace_and_difftest();

    top->clk = 0; top->eval();
    top->clk = 1; top->eval();
    

    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间
    
  }
}



int main(int argc, char** argv) {
  init_log("npc-log.txt");
  parse_args(argc, argv);
  long img_size = load_img();

#ifdef CONFIG_DIFFTEST
  init_difftest(diff_so_file, img_size, difftest_port);
#endif
  init_sdb();
  cpu_state = NPC_RUNNING;
  
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

  sdb_set_batch_mode();//批处理模式
  
  sdb_mainloop();


  delete top;
  tfp->close();
  delete contextp;
  if(cpu_state == NPC_END || cpu_state == NPC_QUIT) {
    return 0;
  }
  else {
    return 1;
  }
}
