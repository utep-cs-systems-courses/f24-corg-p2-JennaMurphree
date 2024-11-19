#include <msp430.h>
#include "switches.h"
#include "interuptVectorHandler.h"


void switchInit(){
  P2REN |= SWITCHES;  //enable resistors
  P2IE |= SWITCHES;   // enable switch interrupts
  P2OUT |= SWITCHES;  // pull ups for switches
  P2DIR &= ~SWITCHES; // set swtich bits for input
  switchPressCheck(); //set values that are currently being pressed.  Unsure if necessary 
}

void switchInterruptHandler(){
  char p2val = switchPressCheck(); //get the values of the switches that have been pressed
}


