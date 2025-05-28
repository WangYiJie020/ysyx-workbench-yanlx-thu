#ifndef _iRingBuffer_h
#define _iRingBuffer_h

#include <common.h>

typedef struct {
    uint32_t pc;
    uint32_t inst;
} IRingBuffer;

void iringbuf_write(uint32_t pc, uint32_t inst);
void iringbuf_print();

#endif