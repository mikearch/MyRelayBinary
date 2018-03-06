class MyRelayBinary
{
	public:
		MyRelayBinary(int pin, int wireMode);
		
		void begin();
		void on();
		void off();
		bool status();
		
	private;
		int _pin;
		boul _status;
	};