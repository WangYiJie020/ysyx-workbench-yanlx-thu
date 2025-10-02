ENTRY(_start)
PHDRS { text PT_LOAD; data PT_LOAD; }

MEMORY {
    MROM : ORIGIN = 0x20000000, LENGTH = 64K
    SRAM : ORIGIN = 0x0f000000, LENGTH = 1M
}

SECTIONS {
  /* _pmem_start and _entry_offset are defined in LDFLAGS */
  . = _pmem_start + _entry_offset;
  .text : {
    *(entry)
    *(.text*)
  } : text
  etext = .;
  _etext = .;
  . = 0x0f000000;
  .rodata : {
    *(.rodata*)
  }
  .data : {
    *(.data)
  } : data
  edata = .;
  _data = .;
  .bss : {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
  }
  _stack_top = ALIGN(0x0);
  . = _stack_top + 0x1000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}
