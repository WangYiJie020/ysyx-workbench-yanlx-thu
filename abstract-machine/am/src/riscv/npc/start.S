.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_top
  call load_data_section
  jal _trm_init

/* 加载数据段 */
load_data_section:
    /* 获取数据段的源地址(LMA)、目标地址(VMA)和长度 */
    la t0, _data_lma_start    /* 源地址：MROM中的数据 */
    la t1, _data_vma_start    /* 目标地址：SRAM中的数据段 */
    la t2, _data_vma_end      /* 数据段长度 */
    sub t2, t2, t1
    /* 计算长度 */
    beqz t2, load_done       /* 如果长度为0，跳过 */
    
load_loop:
    /* 逐字复制数据 */
    lw a3, 0(t0)            /* 从MROM加载 */
    sw a3, 0(t1)            /* 存储到SRAM */
    addi t0, t0, 4          /* 源地址+4 */
    addi t1, t1, 4          /* 目标地址+4 */
    addi t2, t2, -4         /* 长度-4 */
    bgtz t2, load_loop      /* 如果还有数据，继续循环 */
    
load_done:
    ret