/*
MyRelayBinary.h  - Library for managing multiple relays that are wired either NO or NC.
The methods void on() and void off() take in consideration the NO or NC wiring state and 
connect power either ON (void on()) or OFF (void off())
Created by Michael S. Tomasik March 5, 2018
*/

#ifndef MyRelayBinary_h
#define MyRelayBinary_h

#include "Arduino.h"

class MyRelayBinary
{
	public:
		MyRelayBinary(uint8_t pin, uint8_t wireMode);
		
		void begin();
		void on();
		void off();
		bool status();
		
	private:
		uint8_t _pin;
		bool _status;
		uint8_t _wireMode;
	};
#endif
