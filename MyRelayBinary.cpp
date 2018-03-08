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
#include "MyRelayBinary.h"

MyRelayBinary::MyRelayBinary(int pin, int wireMode)
{
       pinMode(pin, OUTPUT);
       _pin = pin;
       _wireMode = wireMode;
   
  }
  
  void  MyRelayBinary::begin()
  {
  }
  
   void  MyRelayBinary::on()
   {
          if(_wireMode == 0){
                 digitalWrite(_pin, LOW); // normally open LOW will turn connect power
          }
          
          else {
                 digitalWrite(_pin, HIGH); //normally closed HIGH will connect power  
          }
          _status = true;    //changes variable to true after relay connects power
   }
   
   void  MyRelayBinary::off()
   {
          if(_wireMode == 0){
                 digitalWrite(_pin, HIGH); // normally open HIGH will disconnect power
          }
          
          else {
                 digitalWrite(_pin, LOW); //normally closed LOW will connect power
          }
          _status = false;  //changes variable after relay disconnects power
   }
   
   bool  MyRelayBinary::status()
   {
         return _status;
                 
   }
