#include <stdint.h>
#include <stddef.h>


extern uint8_t _data_lma_start[];
extern uint8_t _data_vma_start[];
extern uint8_t _data_vma_end[];
extern uint8_t _trm_init[];
extern uint8_t _pmem_start[];
extern uint8_t _sidata[];


void __attribute__((section(".bootloader"))) _bootloader_init() {
    size_t data_size = (size_t)(_data_vma_end - _data_vma_start);
    uint8_t *d = (uint8_t *)_data_vma_start;
    uint8_t *s = (uint8_t *)_data_lma_start;
    if (data_size > 0) {
        //memcpy(_data_vma_start, _data_lma_start, data_size);        
        while (data_size--) {
            *d = *s;
            d++;
            s++;
        }
    }
    //size_t code_size = (size_t)(_sidata - _pmem_start);

    asm volatile ("jal %0" : : "i"(_trm_init));
}