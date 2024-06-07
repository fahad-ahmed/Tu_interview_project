#include "UART.h"
#include "UARTConfig.h"

UART::UART()
{
	configManager = new UARTConfig();
}

void UART::setMode(Mode mode)
{
	configManager->setMode(mode);
}

void UART::setPort(int port)
{
}

void UART::setBandWith(int port)
{
}

std::string UART::read()
{
	return std::string();
}

void UART::write(std::string s)
{
	std::cout << "UART::write->"+s << std::endl;
}

void UART::Open()
{
	std::cout << "Connection Open" << std::endl;
}

void UART::Close()
{
	std::cout << "Connection Close"<< std::endl;
}

UART::~UART()
{
	delete(configManager);
}
