#include <avr/io.h>

#define HEARTBEAT_LED 7

int main(void) {
  int i, j;

  /* setup */
  DDRD |= (1 << HEARTBEAT_LED);

  /*loop*/ for/*ever*/ (;;) {
    PORTD |= (1 << HEARTBEAT_LED);
    for(j=0;j<1600;j++) for(i=0;i<1600;i++) asm("nop");
    PORTD &= ~(1 << HEARTBEAT_LED);
    for(j=0;j<1600;j++) for(i=0;i<1600;i++) asm("nop");
  }
 
  return 0;
}

