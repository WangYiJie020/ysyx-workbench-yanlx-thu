#include <cpu/iringbuf.h>

#define MAX_IRINGBUF 10

IRingBuffer iringbuf[MAX_IRINGBUF];
static int position=0;

void iringbuf_write(uint32_t pc, uint32_t inst){
    iringbuf[position].pc = pc;
    iringbuf[position].inst = inst;

    position = (position + 1) % MAX_IRINGBUF;

}

void iringbuf_print(){
#ifdef CONFIG_ITRACE
    int i;
    for(i=0;i<MAX_IRINGBUF;i++) {
        printf("%x : %x",iringbuf[i].pc,iringbuf[i].inst);
    }


#endif
}
