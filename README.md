![MikroE](http://www.mikroe.com/img/designs/beta/logo_small.png)

---

# IrDa_2 Click

---

- **CIC Prefix**  : IRDA2
- **Author**      : MikroE Team
- **Verison**     : ${VER}
- **Date**        : ${DATE}

---

### Software Support

We provide a library for the IrDa_2 Click on our [LibStock](http://libstock.mikroe.com/projects/view/372/irda2-click-example) 
page, as well as a demo application (example), developed using MikroElektronika 
[compilers](http://shop.mikroe.com/compilers). The demo can run on all the main 
MikroElektronika [development boards](http://shop.mikroe.com/development-boards).

**Library Description**


Key functions :

- ``` void irda3_writeByte(uint8_t input); ``` - Function writes (sends) one byte in UART rx buffer
- ``` uint8_t irda3_readByte(); ``` - Function reads (receives) one byte from UART rx buffer
- ``` uint8_t irda3_byteReady(); ``` - Function checks state of rx buffer (is new data placed in)

**Examples Description**

- System Initialization - GPIO and UART module initialization 
- Application Initialization - Click and Driver initialization 
- Application Task - Checks if new data byte have received in rx buffer (ready for reading),
  and if ready than reads one byte from rx buffer. In second case aplication task writes
  message data via UART and IR interface.


```.c

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

```



The full application code, and ready to use projects can be found on our 
[LibStock]( http://libstock.mikroe.com/projects/view/372/irda2-click-example}) page.

Other mikroE Libraries used in the example:

- UART


**Additional notes and informations**

Depending on the development board you are using, you may need 
[USB UART click](http://shop.mikroe.com/usb-uart-click), 
[USB UART 2 Click](http://shop.mikroe.com/usb-uart-2-click) or 
[RS232 Click](http://shop.mikroe.com/rs232-click) to connect to your PC, for 
development systems with no UART to USB interface available on the board. The 
terminal available in all Mikroelektronika 
[compilers](http://shop.mikroe.com/compilers), or any other terminal application 
of your choice, can be used to read the message.

---
---
