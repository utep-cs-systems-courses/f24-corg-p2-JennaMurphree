#include <msp430.h>
#include "led.h"


void ledInit(){
  P1DIR |= LEDS; // mark LEDS values as outputs
  ledsOff(); 
}

void ledsOff(){
  //initialize LED outputs to off  
  P1OUT &= ~LEDS;
}
