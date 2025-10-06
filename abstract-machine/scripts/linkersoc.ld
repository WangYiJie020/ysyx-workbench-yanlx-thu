ENTRY(_start)

MEMORY {
  mrom : ORIGIN = 0x20000000, LENGTH = 4K
  sram : ORIGIN = 0x0f000000, LENGTH = 8K
}

REGION_ALIAS("REGION_TEXT", mrom);
REGION_ALIAS("REGION_RODATA", mrom);
REGION_ALIAS("REGION_DATA", sram);
REGION_ALIAS("REGION_BSS", sram);

SECTIONS {
  
  . = ORIGIN(mrom);
  .text : {
    *(entry)
    *(.text*)
  } > REGION_TEXT AT> REGION_TEXT  
  .rodata :
  {
    *(.rodata)
    rodata_end = .;
  } > REGION_RODATA
  .data : AT (rodata_end)
    {
      _data_vma_start = .;
      *(.data)
    } > REGION_DATA
  _data_size = SIZEOF(.data);
  _data_lma_start = LOADADDR(.data);
  .bss :
    {
      *(.bss)
    } > REGION_BSS
  
  
  /* 堆区在数据段和BSS段之后 */
  .heap : ALIGN(4) {
      _heap_start = .;
      . = . + 1K;        /* 16KB堆区 */
      _heap_end = .;
  } > REGION_BSS
  
  /* 栈区在SRAM末尾 */
  .stack : ALIGN(16) {
      _stack_bottom = .;
      . = . + 2K;         /* 4KB栈区 */
      _stack_top = .;
  } > REGION_BSS
  
}
