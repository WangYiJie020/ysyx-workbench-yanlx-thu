ENTRY(_start)


MEMORY {
  flash : ORIGIN = 0x30000000, LENGTH = 256M
  psram : ORIGIN = 0x80000000, LENGTH = 8M
}

SECTIONS {
  
  . = ORIGIN(flash);
  _pmem_start = .;
  
  .text ALIGN(4) : {
    _text_vma_start = .;
    *(entry)
    *(.text*)
    etext = .;
    _etext = .;
  } > flash AT> flash 

  /* 夹在中间强制对齐 */
  .rodata ALIGN(4) : {
    *(.rodata*)
    *(.srodata.mainargs)  /* 放在.rodata段中 */
    _rodata_end = .;
  } > flash AT> flash  

  .bootloader ALIGN(4) :{
    *(.bootloader*)
    _sidata = .;
  } > flash AT> flash  
  
  .data :
  {
    _data_vma_start = .;
    *(.data)           /* 主要数据段 */
    *(.data.*)         /* 数据子段 */
    *(.sdata)          /* 小数据段 */
    *(.sdata.*)        /* 小数据子段 */
    _data_vma_end = .;
  } > psram AT>flash

  _data_lma_start = LOADADDR(.data);

  .bss :
  {
    *(.bss)
  } > psram 
  
  
  /* 堆区在数据段和BSS段之后 */
  .heap : ALIGN(4) {
      _heap_start = .;
      . = . + 4M;        /* 16KB堆区 */
      _heap_end = .;
  } > psram
  
  /* 栈区在SRAM末尾 */
  .stack : ALIGN(4) {
      _stack_top = .;
      . = . + 3M;         /* 4KB栈区 */
      _stack_pointer = .;
  } > psram
  
}
