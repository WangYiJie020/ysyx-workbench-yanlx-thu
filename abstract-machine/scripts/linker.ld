ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = ALIGN(4) + _pmem_start + _entry_offset;  /* 确保起始地址对齐 */
  
  .text : ALIGN(4) {
    *(entry)
    *(.text*)
  } : text
  . = ALIGN(4);  /* 确保节区结束对齐 */
  etext = .;
  _etext = .;
  
  .rodata : ALIGN(4) {
    *(.rodata*)
    . = ALIGN(4);
  }
  
  .data : ALIGN(4) {
    *(.data)
    . = ALIGN(4);
  } : data
  edata = .;
  _data = .;
  
  .bss : ALIGN(4) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(4);
  }
  
  _stack_top = ALIGN(0x1000);  /* 栈4KB对齐 */
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  
  end = .;
  _end = .;
  
  _heap_start = ALIGN(0x1000);  /* 堆4KB对齐 */
}
