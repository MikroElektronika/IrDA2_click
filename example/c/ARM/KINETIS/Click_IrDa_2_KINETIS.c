/*
Example for IrDa_2 Click

    Date          : jan 2018.
    Author        : MikroE Team

Test configuration KINETIS :
    
    MCU              : MK64
    Dev. Board       : HEXIWEAR
    ARM Compiler ver : v6.0.0.0

---

Description :

The application is composed of three sections :

- System Initialization - GPIO and UART module initialization 
- Application Initialization - Click and Driver initialization 
- Application Task - Checks if new data byte have received in rx buffer (ready for reading),
  and if ready than reads one byte from rx buffer. In second case aplication task writes
  message data via UART and IR interface.
                                                                                        v
*/

#include "Click_IrDa_2_types.h"
#include "Click_IrDa_2_config.h"


const uint8_t MESSAGE_DATA[9] = { 'M', 'i', 'k', 'r', 'o', 'E', 13, 10, 0 };

void systemInit()
{
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_AN_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_RST_PIN, _GPIO_OUTPUT );
    mikrobus_gpioInit( _MIKROBUS1, _MIKROBUS_CS_PIN, _GPIO_OUTPUT );

    mikrobus_uartInit( _MIKROBUS1, &_IRDA2_UART_CFG[0] );
    mikrobus_logInit( _MIKROBUS2, 9600 );

    Delay_ms( 100 );
}

void applicationInit()
{
    irda2_uartDriverInit( (T_IRDA2_P)&_MIKROBUS1_GPIO, (T_IRDA2_P)&_MIKROBUS1_UART );
    irda2_init();
    mikrobus_logWrite( "Initialized", _LOG_LINE );
    Delay_ms( 100 );
}

void applicationTask()
{
    char tmp;
    uint8_t rdyFlag;

// RECEIVER - UART polling 

    rdyFlag = irda2_byteReady();

    if (1 == rdyFlag)
    {
        tmp = irda2_readByte();
        mikrobus_logWrite( &tmp, _LOG_BYTE );
    }

// TRANSMITER - TX each 2 sec
/*  
    for (tmp = 0; tmp < 9; tmp++)
    {
        irda2_writeByte( MESSAGE_DATA[tmp] );
        mikrobus_logWrite( "MESSAGE SENT", _LOG_LINE );
    }

    Delay_ms(2000);
*/
}

void main()
{
    systemInit();
    applicationInit();

    while (1)
    {
            applicationTask();
    }
}