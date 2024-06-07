#include <iostream>
#include <memory>
#include "InterfaceUART.h"
#include "UART.h"

int main()
{
    InterfaceUART* uartInstance = new UART();

    //set configuration
    uartInstance->setMode(async);

    //setConnection
    uartInstance->Open();

    uartInstance->write("Sample Write");


    uartInstance->Close();

    delete(uartInstance);

    return 0;
}