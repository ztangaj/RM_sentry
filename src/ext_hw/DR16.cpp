/**
 * @file DR16.cpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief receiver for DR16 RC receiver 
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "DR16.hpp"
#include "chprintf.h"
namespace DR16
{
volatile RC_Value_t rcValue;
static volatile RC_Msg_t rxbuf;
static volatile systime_t lastReceive;
volatile bool isConnected = false;

static void decode()
{
	rcValue.rc.ch0 = rxbuf.rc.ch0_l | rxbuf.rc.ch0_h << 8;
	rcValue.rc.ch1 = rxbuf.rc.ch1_l | rxbuf.rc.ch1_h << 5;
	rcValue.rc.ch2 = rxbuf.rc.ch2_l | rxbuf.rc.ch2_m << 2 | rxbuf.rc.ch2_h << 10;
	rcValue.rc.ch3 = rxbuf.rc.ch3_l | rxbuf.rc.ch3_h << 7;
	rcValue.rc.s1 = rxbuf.rc.s1;
	rcValue.rc.s2 = rxbuf.rc.s2;
}

void resetValue()
{
	rcValue.rc.ch0 = RC_CH_VALUE_MID;
	rcValue.rc.ch1 = RC_CH_VALUE_MID;
	rcValue.rc.ch2 = RC_CH_VALUE_MID;
	rcValue.rc.ch3 = RC_CH_VALUE_MID;
	rcValue.mouse.press_l = 0;
	rcValue.mouse.press_r = 0;
	rcValue.key = 0;
}

static THD_WORKING_AREA(DR16RxThd_wa, 256);
static THD_FUNCTION(DR16RxThd, p)
{
	(void)p;
	chRegSetThreadName("DR16RxThd");

	static uint32_t failcount = 0;
	volatile size_t rxBytes;

	while (!chThdShouldTerminateX())
	{
		rxBytes = sizeof(rxbuf);
		if (MSG_OK ==
			uartReceiveTimeout(&DR16_UART_DRIVER,
							   (size_t *)&rxBytes,
							   (void *)&rxbuf,
							   TIME_MS2I(DR16_RECEIVE_TIMEOUT_MS)))
		{
			isConnected = true;
			decode(); //quite atomic write, implement mutral exclusion if input combination is important
			chThdSleepMilliseconds(DR16_RECEIVE_WAIT_MS);
		}
		else
		{
			failcount++;
			if (failcount > DR16_CONNECT_TIMEOUT_FAIL_COUNT)
				isConnected = false;
			resetValue();
			chThdSleepMilliseconds(DR16_RECEIVE_WAIT_MS);
		}
	}
}

/**
 * @brief   Initialize the RC receiver
 */
void start(void)
{
	chThdCreateStatic(DR16RxThd_wa,
					  sizeof(DR16RxThd_wa),
					  NORMALPRIO + 7,
					  DR16RxThd,
					  NULL);
}
} // namespace DR16
