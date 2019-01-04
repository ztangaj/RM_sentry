/**
 * @file peripherals.hpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "ch.hpp"
#include "hal.h"

#define DR16_UART_DRIVER UARTD1

//SHELL_SD: if this is not defined, means shell will run on SDU1 from usbcfg.c
// #define SHELL_SD UARTD2

namespace Peripherals
{

void init_CAN1();
void init_Pins();

void init_All();

}; // namespace Peripherals
