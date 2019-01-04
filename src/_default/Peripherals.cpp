/**
 * @file peripherals.cpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "Peripherals.hpp"
#include "usbcfg.h"

namespace Peripherals
{

/**
 * @brief Initializes CAN1
 */
void init_CAN1()
{

    /* 1MBaud, automatic wakeup, automatic recover from abort mode.
See section 22.7.7 on the STM32 reference manual.*/
    static const CANConfig CAN1_Config =
        {CAN_MCR_ABOM | CAN_MCR_AWUM | CAN_MCR_TXFP,
         CAN_BTR_SJW(0) | CAN_BTR_TS2(3) | CAN_BTR_TS1(8) | CAN_BTR_BRP(2)};

    canStart(&CAND1, &CAN1_Config);
};

/**
 * @brief Initializes USART1, used for receiving from DR16
 */
void init_UART1()
{
    /**
     * @brief UART1 driver configuration structure.
     * UART1 is solely used for receiving from DR16 remote receiver
     */
    static const UARTConfig UART1_Config = {
        NULL, NULL, NULL, NULL, NULL,
        100000,                      //baud rate 100k
        USART_CR1_M | USART_CR1_PCE, //parity control enable, 8+1 bits
        USART_CR2_LBDL,              //10 bit break detection
        0};

    uartStart(&UARTD1, &UART1_Config);
}

/**
 * @brief Initializes a serial-over-USB CDC driver to USBD1
 */
#ifndef SHELL_SD
void init_USB_Serial()
{
    sduObjectInit(&SDU1);
    sduStart(&SDU1, &serusbcfg);
    usbDisconnectBus(serusbcfg.usbp);
    usbStart(serusbcfg.usbp, &usbcfg);
    usbConnectBus(serusbcfg.usbp);
};
#endif // SHELL_USE_USB

/**
 * @brief Initializes pin interrupts
 */
void init_Pins()
{
    // enable interrupt from the user button (normal high)
    palEnableLineEvent(LINE_USER_BUTTON, PAL_EVENT_MODE_FALLING_EDGE);
};

void init_All()
{
    init_CAN1();
    init_Pins();
    init_UART1();

#ifndef SHELL_SD
    init_USB_Serial();
#endif //SHELL_USE_USB
};

}; // namespace Peripherals
