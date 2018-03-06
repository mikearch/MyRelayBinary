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
       _pin = pin;
       _wiringMode = wiringMode;
       bool _status;
       int _pinstatus;

  }
  
  void  MyRelayBinary::begin()
  {
  }
  
   void  MyRelayBinary::on()
   {
          if(_wiringMode == 0){
                 digitalWrite(_pin, LOW); // normally open LOW will turn connect power
          }
          
          else {
                 digitalWrite(_pin, HIGH); //normally closed HIGH will connect power
          }
        
   }
   
   void  MyRelayBinary::off()
   {
          if(_wiringMode == 0){
                 digitalWrite(_pin, HIGH); // normally open HIGH will disconnect power
          }
          
          else {
                 digitalWrite(_pin, LOW); //normally closed LOW will connect power
          }
   }
   
   void  MyRelayBinary::status()
   {
          digitalRead(_pin);
   }
