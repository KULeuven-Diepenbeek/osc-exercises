#include <avr/io.h>
#include <avr/interrupt.h>

#define HEARTBEAT_LED 7

ISR(TIMER1_OVF_vect) {
  PORTD ^= (1 << HEARTBEAT_LED);
}

int main(void) {

  /* setup */
  DDRD |= (1 << HEARTBEAT_LED);

  /* configure TIMER/COUNTER 1 */
  TCCR1A = 0x00;
  TCCR1B = 0x05;

  /* enable the interrupts */
  TIMSK1 = 0x01;
  sei();

  /*loop*/ for/*ever*/ (;;);
 
  return 0;
}