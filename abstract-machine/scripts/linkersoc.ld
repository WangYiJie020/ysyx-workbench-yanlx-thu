ENTRY(_start)


MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  sram : ORIGIN = 0x80000000, LENGTH = 8M
}

SECTIONS {
  
  . = ORIGIN(flash);
  
  .text ALIGN(4) : {
    *(entry)
    *(.text*)
    etext = .;
    _etext = .;
  } > flash AT> flash 

  /* 夹在中间强制对齐 */
  .rodata ALIGN(4) : {
    *(.rodata*)
    *(.srodata.mainargs)  /* 放在.rodata段中 */
  } >flash 

  .bootloader ALIGN(4) :{
    *(.bootloader*)
    _sidata = .;
  } >flash 
  
  .data :
  {
    _data_vma_start = .;
    *(.data)           /* 主要数据段 */
    *(.data.*)         /* 数据子段 */
    *(.sdata)          /* 小数据段 */
    *(.sdata.*)        /* 小数据子段 */
    _data_vma_end = .;
  } > sram AT>flash

  _data_lma_start = LOADADDR(.data);

  .bss :
  {
    *(.bss)
  } > sram 
  
  
  /* 堆区在数据段和BSS段之后 */
  .heap : ALIGN(4) {
      _heap_start = .;
      . = . + 2K;        /* 16KB堆区 */
      _heap_end = .;
  } > sram
  
  /* 栈区在SRAM末尾 */
  .stack : ALIGN(4) {
      _stack_bottom = .;
      . = . + 2K;         /* 4KB栈区 */
      _stack_top = .;
  } > sram
  
}
