ENTRY(_start)


MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

SECTIONS {
  
  . = ORIGIN(mrom);
  
  .text ALIGN(4) : {
    *(entry)
    *(.text*)
    etext = .;
    _etext = .;
  } > mrom AT> mrom 
  .bootloader ALIGN(4) :{
    *(.bootloader*)
  } >mrom 
  
  .data ALIGN(4) : 
  {
    _data_vma_start = .;
    *(.data)
    *(.sdata)
    _data_vma_end = .;
  } > sram AT> mrom 
  _data_lma_start = LOADADDR(.data);

  .bss :
  {
    *(.bss)
  } > sram 
  
  
  /* 堆区在数据段和BSS段之后 */
  .heap : ALIGN(4) {
      _heap_start = .;
      . = . + 3K;        /* 16KB堆区 */
      _heap_end = .;
  } > sram
  
  /* 栈区在SRAM末尾 */
  .stack : ALIGN(16) {
      _stack_bottom = .;
      . = . + 4K;         /* 4KB栈区 */
      _stack_top = .;
  } > sram
  
}
