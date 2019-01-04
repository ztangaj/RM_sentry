/**
 * @file DR16.hpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief receiver for DR16 RC receiver 
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#ifndef DR16_H_
#define DR16_H_

#include "ch.hpp"
#include "Peripherals.hpp"
#include "hal.h"

#define DR16_TRANSMIT_INTERVAL_MS 17
#define DR16_RECEIVE_TIMEOUT_MS 10 //better not be divisor of DR16_TRANSMIT_INTERVAL_MS
#define DR16_RECEIVE_WAIT_MS (DR16_TRANSMIT_INTERVAL_MS - DR16_RECEIVE_TIMEOUT_MS)
#define DR16_CONNECT_TIMEOUT_MS 250
#define DR16_CONNECT_TIMEOUT_FAIL_COUNT (DR16_CONNECT_TIMEOUT_MS / DR16_TRANSMIT_INTERVAL_MS)

namespace DR16
{

void start();

/* ----------------------- Data Struct ------------------------------------- */
typedef struct
{
	struct
	{
		uint16_t ch0;
		uint16_t ch1;
		uint16_t ch2;
		uint16_t ch3;
		uint8_t s1;
		uint8_t s2;
	} rc;
	struct
	{
		int16_t x;
		int16_t y;
		int16_t z;
		uint8_t press_l;
		uint8_t press_r;
	} mouse;

	uint16_t key;

} RC_Value_t;

//this contains the received values from the remote
extern volatile RC_Value_t rcValue;

extern volatile bool isConnected; //indicates whether remote is connected

//uart receive frame definition, used for decoding
#pragma pack(1)
typedef union {
	struct
	{
		struct
		{
			uint8_t ch0_l : 8; //!< Byte 0
			uint8_t ch0_h : 3; //!< Byte 1
			uint8_t ch1_l : 5;
			uint8_t ch1_h : 6; //!< Byte 2
			uint8_t ch2_l : 2;
			uint8_t ch2_m : 8; //!< Byte 3
			uint8_t ch2_h : 1; //!< Byte 4
			uint8_t ch3_l : 7;
			uint8_t ch3_h : 4; //!< Byte 5
			uint8_t s1 : 2;
			uint8_t s2 : 2;
		} rc;
		struct
		{
			int16_t x;		 //!< Byte 6,7
			int16_t y;		 //!< Byte 8,9
			int16_t z;		 //!< Byte 10,11
			uint8_t press_l; //!< Byte 12
			uint8_t press_r; //!< Byte 13
		} mouse;
		struct
		{
			uint16_t v; //!< Byte 14,15
		} key;

		uint16_t resv; //!< Byte 16,17
	};
	uint8_t buf[18];
} RC_Msg_t;
#pragma pack()

/* ----------------------- RC Channel Definition---------------------------- */
#define RC_CH_VALUE_MIN ((uint16_t)364)
#define RC_CH_VALUE_MID ((uint16_t)1024)
#define RC_CH_VALUE_MAX ((uint16_t)1684)

/* ----------------------- RC Switch Definition----------------------------- */
#define RC_SW_UP ((uint16_t)1)
#define RC_SW_MID ((uint16_t)3)
#define RC_SW_DOWN ((uint16_t)2)
/* ----------------------- PC Key Definition-------------------------------- */
#define KEY_PRESSED_OFFSET_W ((uint16_t)0x01 << 0)
#define KEY_PRESSED_OFFSET_S ((uint16_t)0x01 << 1)
#define KEY_PRESSED_OFFSET_A ((uint16_t)0x01 << 2)
#define KEY_PRESSED_OFFSET_D ((uint16_t)0x01 << 3)
#define KEY_PRESSED_OFFSET_Q ((uint16_t)0x01 << 4)
#define KEY_PRESSED_OFFSET_E ((uint16_t)0x01 << 5)
#define KEY_PRESSED_OFFSET_SHIFT ((uint16_t)0x01 << 6)
#define KEY_PRESSED_OFFSET_CTRL ((uint16_t)0x01 << 7)
} // namespace DR16

#endif