#include <am.h>

#define UART_BASE 0x10000000L
#define UART_RX   0
#define UART_FIFO_CONTROL 2
#define UART_LSR 5

#define KEYDOWN_MASK 0x8000
#define KBD_ADDR 0x10011000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t k = *(volatile uint8_t *)(KBD_ADDR);
  kbd->keydown = (k & KEYDOWN_MASK ? true : false);
  kbd->keycode = k & ~KEYDOWN_MASK;
}

void __am_uart_rx(AM_UART_RX_T *uart) {
  //uint8_t a = inb(UART_BASE+UART_RX);
  char data_ready;
  data_ready = *(volatile uint8_t *)(UART_BASE + UART_LSR) & 0x01;
  if(data_ready == 1) {
    uart->data = *(volatile uint8_t *)(UART_BASE + UART_RX);
  }
  else {
    uart->data = 0xff;
  }
  //*(volatile uint8_t *)(UART_BASE + UART_FIFO_CONTROL) = (1 << 1);

}
