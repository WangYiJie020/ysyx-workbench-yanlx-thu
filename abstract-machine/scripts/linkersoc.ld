ENTRY(_start)


MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
  psram : ORIGIN = 0x80000000, LENGTH = 8M
}

SECTIONS {
  
  . = ORIGIN(flash);
  _pmem_start = .;

  .start :{
    *(entry)
  } > flash AT> flash 

  .fsbl :{
    _fsbl_start = .;
    *(.fsbl*)
  } > flash AT> flash 

  .bootloader :{
    _bootloader_start = .;
    *(.bootloader*)
    _bootloader_end = .;
  } > psram AT> flash  

  _bootloader_lma_start = LOADADDR(.bootloader);

  .text : {
    _text_start = .;
    *(.text)
    *(.text*)
    *(.rodata*)
    *(.srodata)       
    *(.srodata*) 
    _text_end = .;
  } > psram AT> flash 

  _text_lma_start = LOADADDR(.text);

  .data :
  {
    . = ALIGN(4);
    _data_vma_start = .;
    *(.data)           /* 主要数据段 */
    *(.data*)         /* 数据子段 */
    *(.sdata)          /* 小数据段 */
    *(.sdata*)        /* 小数据子段 */
    _data_vma_end = .;
  } > psram AT>flash

  _data_lma_start = LOADADDR(.data);

  .bss :
  {
    *(.bss)
    *(.bss*)
    *(.sbss)
    *(.sbss*)
  } > psram 
  
  
  /* 堆区在数据段和BSS段之后 */
  .heap : ALIGN(4) {
      _heap_start = .;
      . = . + 2M;        /* 16KB堆区 */
      _heap_end = .;
  } > psram
  
  /* 栈区在SRAM末尾 */
  .stack : ALIGN(4) {
      _stack_top = .;
      . = . + 8K;         /* 4KB栈区 */
      _stack_pointer = .;
  } > sram
  
}
