#include "UARTConfig.h"

void UARTConfig::setBandWidth(int bWidth)
{
}

void UARTConfig::setPortNumber(int port)
{
}

void UARTConfig::setMode(int mode)
{
    std::cout << "UARTConfig::setMode " << std::endl;
}

int UARTConfig::getBandWidth(int bWidth)
{
    return 0;
}

int UARTConfig::getPortNumber(int port)
{
    return 0;
}

Mode UARTConfig::getMode(int mode)
{
    return Mode();
}
