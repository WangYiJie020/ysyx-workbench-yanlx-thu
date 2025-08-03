ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = ALIGN(32) + _pmem_start + _entry_offset;  /* 确保起始地址对齐 */
  
  .text : ALIGN(32) {
    *(entry)
    *(.text*)
  } : text
  . = ALIGN(32);  /* 确保节区结束对齐 */
  etext = .;
  _etext = .;
  
  .rodata : ALIGN(32) {
    *(.rodata*)
    . = ALIGN(32);
  }
  
  .data : ALIGN(32) {
    *(.data)
    . = ALIGN(32);
  } : data
  edata = .;
  _data = .;
  
  .bss : ALIGN(32) {
    _bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    . = ALIGN(32);
  }
  
  _stack_top = ALIGN(0x1000);  /* 栈4KB对齐 */
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  
  end = .;
  _end = .;
  
  _heap_start = ALIGN(0x1000);  /* 堆4KB对齐 */
}
