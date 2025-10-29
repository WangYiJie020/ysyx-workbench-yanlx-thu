#include <stdint.h>
#include <stddef.h>
#include <stdio.h>


extern uint8_t _data_lma_start[];
extern uint8_t _data_vma_start[];
extern uint8_t _data_vma_end[];
extern uint8_t _trm_init[];
extern uint8_t _text_start[];
extern uint8_t _text_end[];

#define UART_BASE 0x10000000L
#define UART_DIV   0
#define UART_LCR   3
void set_div2() {
  *(volatile char *)(UART_BASE + UART_LCR) = *(volatile char *)(UART_BASE + UART_LCR) | 0x80;
  *(volatile char *)(UART_BASE + UART_DIV) = 4;
  *(volatile char *)(UART_BASE + UART_LCR) = *(volatile char *)(UART_BASE + UART_LCR) & 0x7F;
}

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
    
    size_t code_size = (size_t)(_text_end - _text_start);
    d = (uint8_t *)0x0f000000;
    s = (uint8_t *)_text_start;
    if(code_size > 0) {
        while(code_size--) {
            *d = *s;
            d++;
            s++;
        }
    }

    //uint8_t *init = (uint8_t *)_trm_init;
    //init = init - 0x30000000L + 0x0f000000;

    //asm volatile ("jal %0" : : "i"(_trm_init));
    //__asm__ volatile ("call 0x0f000000"); 
    //asm volatile ("call %0" : : "i"(_trm_init));
}