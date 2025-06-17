#include "common.h"

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