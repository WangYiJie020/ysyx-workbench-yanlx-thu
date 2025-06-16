
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <assert.h>
#include <regex.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "Vtop.h"
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
#define word_t uint32_t 

int mem[0xffffffff];
//int mem[10000];


int cpu_state = 0;

VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针

typedef struct watchpoint {
  int NO;
  char tokens[100];
  uint32_t value;
  struct watchpoint *next;

  /* TODO: Add more members if necessary */


} WP;
extern WP *head;



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

int reg_value[32];

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
		printf("%s\t%x\n",regs[32-i],reg_value[32-i]);
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
      printf("%s\t%x\n",regs[32-i],reg_value[32-i]);
      value=reg_value[32-i];      
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
    reg_value[i] = regvalue[i];
  }
  
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
enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM, TK_UNEQ, TK_AND, TK_DEREF, TK_HEX, TK_REG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},		// sub
	  {"\\*", '*'},
	  {"\\/", '/'},
	  {"\\(", '('},
	  {"\\)", ')'},
	  {"==", TK_EQ}, // equal
	  {"!=", TK_UNEQ},
	  {"&&", TK_AND},
	  {"0x[0-9]+", TK_HEX},
	  {"[0-9]+", TK_NUM},
	  {"\\$+[a-z]*[0-9]*", TK_REG},

	  //{"\\*", TK_POINT},
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[3200] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;
  bool success;
	bool *ptr_success = &success;
  char name[10]={'\0'};

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        //printf("match rules[%d] = \"%s\" at position %d with len %d: %.*s\n",
        //  i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        switch (rules[i].token_type) {
		case TK_NOTYPE:
		       	//printf("notype\n"); 
			break;
		case '+': 
			tokens[nr_token].type='+';
			tokens[nr_token].str[0]='+';
			nr_token++;
			//printf("add\n"); 
			break;
		case '-': 
			tokens[nr_token].type='-';
			tokens[nr_token].str[0]='-';
			nr_token++;
			//printf("sub\n"); 
			break;
		case '*': 
			tokens[nr_token].type='*';
			tokens[nr_token].str[0]='*';
			nr_token++;
			//printf("mult\n"); 
			break;
		case '/': 
			tokens[nr_token].type='/';
			tokens[nr_token].str[0]='/';
			nr_token++;
			//printf("div\n"); 
			break;
		case TK_NUM: 
			tokens[nr_token].type=TK_NUM;
			int mynum;
			sscanf(substr_start,"%d",&mynum);
			sprintf(tokens[nr_token].str,"%d",mynum);
			nr_token++;
			//printf("NUM:%s\n",tokens[nr_token].str); 
			break;
		case '(': 
			tokens[nr_token].type='(';
			tokens[nr_token].str[0]='(';
			nr_token++;
			//printf("kuohao\n"); 
			break;
		case ')': 
			tokens[nr_token].type=')';
			tokens[nr_token].str[0]=')';
			nr_token++;
			//printf("kuohao2\n"); 
			break;
		case TK_EQ: 
			tokens[nr_token].type=TK_EQ;
			tokens[nr_token].str[0]='=';
			tokens[nr_token].str[1]='=';
			nr_token++;
			break;
		case TK_UNEQ: 
			tokens[nr_token].type=TK_UNEQ;
			tokens[nr_token].str[0]='!';
			tokens[nr_token].str[1]='=';
			nr_token++;
			break;
		case TK_AND: 
			tokens[nr_token].type=TK_AND;
			tokens[nr_token].str[0]='&';
			tokens[nr_token].str[1]='&';
			nr_token++;
			break;
		case TK_HEX: 
			tokens[nr_token].type=TK_HEX;
			int mynum2;
			sscanf(substr_start,"%x",&mynum2);
			sprintf(tokens[nr_token].str,"%d",mynum2);
			nr_token++;
			break;
		case TK_REG: 
			tokens[nr_token].type=TK_HEX;
			word_t regValue;
			int i;
			
			for(i=0;i<substr_len-1;i++) {
				name[i]=*(substr_start+i+1);
			}
			success = 0;
			//printf("%s",name);
			regValue = isa_reg_str2val(name, ptr_success);
      printf("%x",regValue);
			if(!success) {
				assert(0);
			}
			sprintf(tokens[nr_token].str,"%d",regValue);
			nr_token++;
			break;
    default: printf("error!\n");
    }
		tokens[nr_token].type=rules[i].token_type;	
	
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
bool check_parentheses(int p, int q){
	int i,stack=0;

	for(i=p;i<=q;i++) {
		if(tokens[i].type=='(') {
			stack++;
		}
		if(tokens[i].type==')') {
			stack--;
		}
		if(stack<=0){
			break;
		}
	}

	if(i==q) return true;
	else return false;
	

}
uint32_t eval(int p,int q) {
  if (p > q) {
    /* Bad expression */
		printf("%d,%s\n",p,tokens[p].str);
		printf("%d,%s\n",q,tokens[q].str);
	  assert(0);

  }
  else if (p == q) {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
	  uint32_t num;
	  sscanf(tokens[p].str,"%u",&num);
	  return num;
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else {
	//pointer
	if(tokens[p].type==TK_DEREF && q==p+1) {
		uint32_t num;
	  	sscanf(tokens[q].str,"%u",&num);
		return mem[num];
	}
	//
	else{
		uint32_t val1,val2;
		int i,op=p,flag=0,flagb=0,flagc=0;
		//find the position of 主运算符
		for(i=p;i<=q;i++) {
			//if there are parentheses, skip it
			if(tokens[i].type=='(') {
				flag++;
			}
			if(tokens[i].type==')') {
				flag--;
			}

			//out of parentheses
			if(flag==0) {
				if(tokens[i].type==TK_AND){
					op=i;
					break;
				}
				if(tokens[i].type==TK_EQ || tokens[i].type==TK_UNEQ) {
					op=i;
					flagb=1;
					//continue;
				}
				if((tokens[i].type=='+' || tokens[i].type=='-') && flagb == 0) {
					op=i;
					flagc=1;
					//printf("op%d\n",op);
					//continue;
				}
				if((tokens[i].type=='*' || tokens[i].type=='/') && flagb == 0 && flagc == 0) {
					op=i;
					//printf("op%d\n",op);

				}
			}
		}
		//op = the position of 主运算符 in the token expression;
		//printf("p %d,op %d\n",p,op - 1);
		//printf("op %d,q %d\n",op + 1,q);
		val1 = eval(p, op - 1);
		val2 = eval(op + 1, q);

		switch (tokens[op].type) {
		case '+': return val1 + val2;
		case '-': return val1 - val2;/* ... */
		case '*': return val1 * val2;/* ... */
		case '/': return val1 / val2;/* ... */
		case TK_EQ: return val1 == val2;
		case TK_UNEQ: return val1 != val2;
		case TK_AND: return val1 && val2;
		default: assert(0);
		}
	}
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //int i;
  
  //for(i=0;i<nr_token;i++) {
  //	  printf("%d,%s\n",tokens[i].type,tokens[i].str);

  //}
 
  int i;

  for (i = 0; i < nr_token; i++) {
	if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != TK_NUM && tokens[i - 1].type != ')')) ) {
		tokens[i].type = TK_DEREF;
		
	}
  }
  //printf("nrtoken:%d\n",nr_token);


  return eval(0,nr_token-1);

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

#define NR_WP 32

static WP wp_pool[NR_WP] = {};//pool
WP *head = NULL,*free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    strcpy(wp_pool[i].tokens,"\0\0\0\0\0\0\0\0\0\0\0\0");
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

WP* new_wp(char * arg, uint32_t value){
  WP* tmp=NULL;
  if(free_ == NULL) {
    assert(0);
  }
  else {
    
    if(head==NULL) {
      head = free_;
      free_ = free_->next;
      head->next=NULL;
    }
    else {
      tmp = free_;
      free_ = free_->next;
      tmp->next = head;
      head = tmp;
    }

    strcpy(head->tokens,arg);
    printf("%s",head->tokens);
    head->value = value;

    
  }
  return head;

}



void free_wp(int num){
  WP *p,*q;
  p = head;
  int flag=0;
  if(head == NULL) {
    assert(0);
  }
  else {
    if(p->NO == num){
      head = head->next;
      p->next = free_;
      free_ = p;
      //printf("wp==head\n\r");
    }
    else {
      p=head;
      q=head->next;

      while(q!=NULL) { 
        if(q->NO==num){
          p->next = q->next;
          q->next=free_;
          free_ = q;
          flag=1;
          break;
        }
        p=p->next;
        q=q->next;
      }
      if(flag==0) printf("no watchpoint numbered %d\n\r",num);

    }
    
  }
  return;

}

void print_wp(){
  WP *p;
  p = head;
  if(p==NULL) {
    printf("no watchpoint!\n\r");
  }
  else {
    while(p!=NULL) {
      printf("watchpoint NO.%d %s 0x%x\n\r",p->NO,p->tokens,p->value);
      p = p->next;
    }
    
  }
}

void cpu_exec(int num) {
  int i;
  for(i = 0; i < num; i++) {
    if(cpu_state == 1){ //stop
      printf("finish\n");
      break;
    }
    top->inst = pmem_read(top->pc);
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
