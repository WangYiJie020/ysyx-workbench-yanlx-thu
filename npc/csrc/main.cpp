
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
#include "host.h"
#include "paddr.h"
#include "vaddr.h"



extern int mem[0xffffffff];

int cpu_state = 0;

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针



typedef struct {
  uint32_t gpr[32];
  uint32_t pc;
} regfile;

regfile cpu;

#define  DIFFTEST_ON

#define PMEM_LEFT  0x80000000
#define PMEM_RIGHT 0x87ffffff

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

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


uint32_t pmem_read(uint32_t pc) {
  uint32_t tmp = pc / 4 ;
  printf("pc=%x,%08x\n",pc,mem[tmp]);
  return mem[tmp];

}


extern "C" void ebreak() {
  printf("HIT GOOD TRAP\n");
  cpu_state = 1;
  
}


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

extern "C" void reg_return_value(uint32_t regvalue[32]) {
  int i;
  for(i=0; i<32; i++) {
    cpu.gpr[i] = regvalue[i];
  }
  cpu.pc = top->pc;
  
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
  ref_difftest_memcpy(PMEM_LEFT, guest_to_host(PMEM_LEFT), img_size, DIFFTEST_TO_REF);
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
void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}


/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(npc) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_si(char *args) {
	char *arg = strtok(NULL, " ");
	char num_c[5];
	int num;
	if (arg == NULL) {
		num=1;
	}
	else {
		strcpy( num_c, arg);
		sscanf(num_c,"%d",&num);
		//printf("%d",num);
	}
	cpu_exec(num);


	return 0;
}

static int cmd_info(char *args) {
	char *arg = strtok(NULL, " ");
       
        if (arg == NULL) {
                printf("please add sub command and try again\n");
        }
        else {
		if(strcmp(arg,"r")==0){
			isa_reg_display();

		}
		else if(strcmp(arg,"w")==0){
      print_wp();
			//printf("www");
		}
		else{
			printf("Unknown command '%s'\n", arg);
		}
	}
        
        return 0;
}

static int cmd_x(char *args) {
  char *arg = strtok(NULL, " ");
	unsigned int num;
	char line[100];

  if (arg == NULL) {
          printf("please add sub command and try again\n");
  }
  else {
    strcpy( line, arg);
    //printf("%s\n",line);
    sscanf(line,"%d",&num);
    arg = strtok(NULL, " ");
    if(arg==NULL) {
      printf("please add sub command and try again\n");
    }
    else {
      strcpy(line, arg);
      bool success;
      bool *ptr_success = &success;
      uint32_t result;
      //printf("%s\n",arg);
      result=expr(line,ptr_success);
      
      //sscanf(line,"%x",&result);
      
      uint32_t i,j;
      for(i=0;i<num;i++) {
        printf("0x%8x: %08x",result+4*i,mem[result/4+i]);
        
        printf("\n");
        
      }
      
    }

                
	}
	return 0;
}

static int cmd_p(char *args) {
	char *arg = strtok(NULL, "\0");
	bool success;
	bool *ptr_success = &success;
	uint32_t result;
	printf("%s\n",arg);
	result=expr(arg,ptr_success);
	printf("result=%u\n",result);
        return 0;
}

static int cmd_w(char *args) {
  char *arg = strtok(NULL, "\0");
	bool success;
	bool *ptr_success = &success;
	uint32_t result;
	//printf("%s\n",arg);
	result=expr(arg,ptr_success);
  //printf("result=%u\n",result);
  new_wp(arg,result);
        return 0;
}

static int cmd_d(char *args) {
  char *arg = strtok(NULL, " ");
	char num_c[5];
	int num;
	if (arg == NULL) {
		assert(0);
	}
	else {
		strcpy( num_c, arg);
		sscanf(num_c,"%d",&num);
		//printf("%d",num);
	}
  free_wp(num);
        return 0;
}


static int cmd_c(char *args) {
  cpu_exec(65536);
  return 0;
}


static int cmd_q(char *args) {
  //exit(0);
  return -1;
}

static int cmd_help(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "Continue the execution for N steps, N is number you input, default N=1", cmd_si },
  { "info", "print the state of the program", cmd_info },
  { "x", "scan the memory", cmd_x },
  { "p", "", cmd_p },
  { "w", "", cmd_w },
  { "d", "", cmd_d }, 

  /* TODO: Add more commands */

};

#define NR_CMD 9

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}



extern uint64_t g_nr_guest_inst;

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


static void trace_and_difftest() {
  log_write("%08x,%08x\n", top->pc,top->inst); 

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

void sdb_mainloop() {

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

int main(int argc, char** argv) {
  parse_args(argc, argv);
  long img_size = load_img();

  init_log("npc-log.txt");
  init_difftest(diff_so_file, img_size, difftest_port);
  init_sdb();
  
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
