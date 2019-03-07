/*
    __irda2_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __irda2_driver.h
@brief    IrDa_2 Driver
@mainpage IrDa_2 Click
@{



@}

@defgroup   IRDA2
@brief      IrDa_2 Click Driver
@{

| Global Library Prefix | **IRDA2** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **jan 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _IRDA2_H_
#define _IRDA2_H_

/** 
 * @macro T_IRDA2_P
 * @brief Driver Abstract type 
 */
#define T_IRDA2_P    const uint8_t*

/** @defgroup IRDA2_COMPILE Compilation Config */              /** @{ */

//  #define   __IRDA2_DRV_SPI__                            /**<     @macro __IRDA2_DRV_SPI__  @brief SPI driver selector */
//  #define   __IRDA2_DRV_I2C__                            /**<     @macro __IRDA2_DRV_I2C__  @brief I2C driver selector */                                          
  #define   __IRDA2_DRV_UART__                           /**<     @macro __IRDA2_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup IRDA2_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup IRDA2_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup IRDA2_INIT Driver Initialization */              /** @{ */

#ifdef   __IRDA2_DRV_SPI__
void irda2_spiDriverInit(T_IRDA2_P gpioObj, T_IRDA2_P spiObj);
#endif
#ifdef   __IRDA2_DRV_I2C__
void irda2_i2cDriverInit(T_IRDA2_P gpioObj, T_IRDA2_P i2cObj, uint8_t slave);
#endif
#ifdef   __IRDA2_DRV_UART__
void irda2_uartDriverInit(T_IRDA2_P gpioObj, T_IRDA2_P uartObj);
#endif
                                                                       /** @} */
/** @defgroup IRDA2_FUNC Driver Functions */                   /** @{ */

/**
 * @brief Write Single Byte
 *
 * @param[in] input 
 *
 * Writes sinle byte.
 */
void irda2_writeByte(uint8_t input);

/**
 * @brief Read Single Byte
 *
 * @return received byte
 *
 * Read received byte.
 */
uint8_t irda2_readByte();

/**
 * @brief Check for new byte received
 *
 * @retval 0 - no new data / 1 - data ready
 *
 * Checks is there a new byte received.
 */
uint8_t irda2_byteReady();

/**
 * @brief Click reset function
 *
 * Function resets click state by seting RST mikrobus pin to low,
 * and then to high state.
 */
void irda2_reset();

/**
 * @brief Click Initialization function
 *
 * Function initialize the click
 */
void irda2_init();




                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_IrDa_2_STM.c
    @example Click_IrDa_2_TIVA.c
    @example Click_IrDa_2_CEC.c
    @example Click_IrDa_2_KINETIS.c
    @example Click_IrDa_2_MSP.c
    @example Click_IrDa_2_PIC.c
    @example Click_IrDa_2_PIC32.c
    @example Click_IrDa_2_DSPIC.c
    @example Click_IrDa_2_AVR.c
    @example Click_IrDa_2_FT90x.c
    @example Click_IrDa_2_STM.mbas
    @example Click_IrDa_2_TIVA.mbas
    @example Click_IrDa_2_CEC.mbas
    @example Click_IrDa_2_KINETIS.mbas
    @example Click_IrDa_2_MSP.mbas
    @example Click_IrDa_2_PIC.mbas
    @example Click_IrDa_2_PIC32.mbas
    @example Click_IrDa_2_DSPIC.mbas
    @example Click_IrDa_2_AVR.mbas
    @example Click_IrDa_2_FT90x.mbas
    @example Click_IrDa_2_STM.mpas
    @example Click_IrDa_2_TIVA.mpas
    @example Click_IrDa_2_CEC.mpas
    @example Click_IrDa_2_KINETIS.mpas
    @example Click_IrDa_2_MSP.mpas
    @example Click_IrDa_2_PIC.mpas
    @example Click_IrDa_2_PIC32.mpas
    @example Click_IrDa_2_DSPIC.mpas
    @example Click_IrDa_2_AVR.mpas
    @example Click_IrDa_2_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __irda2_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

