#pragma once
#include "InterfaceUART.h"

class UARTConfig
{
	public:
		void setBandWidth(int bWidth);
		void setPortNumber(int port);
		void setMode(int mode);

		int getBandWidth(int bWidth);
		int getPortNumber(int port);
		Mode getMode(int mode);


	private:
		int bandWith;
		int porNumber;
		Mode mode;
		
};

