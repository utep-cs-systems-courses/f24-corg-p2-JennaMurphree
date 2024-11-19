#include <msp430.h>
#include "switches.h"

//Turn on p2

void __interrupt_vec(PORT2_VECTOR) Port_2(){
  if (P2IFG & SWITCHES) { // check for button interrupt
    P2IFG &= ~SWITCHES; //clear switch interrupts
    switchInterruptHandler(); //methods for when buttons are pressed
  }
}
