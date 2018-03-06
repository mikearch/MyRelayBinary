/*
MyRelayBinary.cpp - code for multiple relay management when wired either NO or NC
Instantiated objects receive two variables
--- Pin - integer pin number driving the relay (LOW energizes relay)
--- wireMode - integer value indicating wiring mode
       wireMode = 0   Normally open
       wiremode = 1   Normally closed
Created by Michael S. Tomasik  March 5, 2018
*/

#include "Arduino.h"
"inllude "MyRelayBinary.h"

MyRelayBinary::MyRelayBinary(int pin, int wireMode)
{
  pinMode(pin, OUTPUT);
  _pin = pin
  _wiringMode = wiringMode;
  }
  
  void  MyRelayBinary::begin()
  {
  }
  
   void  MyRelayBinary::on()
   {
   }
   
   void  MyRelayBinary::off()
   {
   }
   
   void  MyRelayBinary::status()
   {
   }
