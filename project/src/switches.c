#include <msp430.h>
#include "switches.h"
#include "led.h"
#include "interuptVectorHandler.h"


void switchInterruptHandler(){
  char p2val = switchPressCheck(); //get the values of the switches that have been pressed
}


