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