#include <stdint.h>
#include <stddef.h>


extern uint8_t _data_lma_start[];
extern uint8_t _data_vma_start[];
extern uint8_t _data_vma_end[];
extern uint8_t _trm_init[];

/* 简单的内存操作函数 */
static void memcpy(void *dest, const void *src, size_t n) {
    uint8_t *d = (uint8_t *)dest;
    const uint8_t *s = (const uint8_t *)src;
    while (n--) {
        *d++ = *s++;
    }
}

void __attribute__((section(".bootloader"))) _bootloader_init() {
    size_t data_size = (size_t)(_data_vma_end - _data_vma_start);
    if (data_size > 0) {
        memcpy(_data_vma_start, _data_lma_start, data_size);
    }
    //__asm__ volatile ("jal %0" : : "i"(_trm_init));
}