#pragma once
#include "InterfaceUART.h"
#include "UARTConfig.h"
class UART :
    public InterfaceUART
{
    public:
		UART();
		virtual void setMode(Mode mode);
		virtual void setPort(int port);
		virtual void setBandWith(int port);

		//Read Write related
		virtual std::string read();
		virtual void write(std::string s);

		//Connection Related Api
		virtual void Open();
		virtual void Close();
		~UART();

    private:
		UARTConfig* configManager;

};

