#include "CAN_Receiver.hpp"

namespace CAN_Receiver
{

volatile int32_t receiveCount = 0;

//control command
volatile int16_t setCurrent_1 = 0;

//motor feedbacks
volatile int16_t tourqe_1 = 0;
volatile int16_t rpm_1 = 0;
volatile int16_t orientation_1 = 0; // [0,8191] -> [0,360 degree)

/*
 * Receiver thread.
 */
static THD_WORKING_AREA(can_rx_wa, 256);
static THD_FUNCTION(can_rx, p)
{
    (void)p;

    event_listener_t el;
    CANRxFrame rxmsg;
    chRegSetThreadName("canRxThd");
    chEvtRegister(&CAND1.rxfull_event, &el, 0);
    while (true)
    {
        if (chEvtWaitAny(ALL_EVENTS))
            while (canReceive(&CAND1, CAN_ANY_MAILBOX, &rxmsg, TIME_IMMEDIATE) == MSG_OK)
            {
                if (rxmsg.SID == 0x201 && rxmsg.DLC == 8)
                {
                    //received from motor 1
                    orientation_1 = rxmsg.data8[0] << 8 | rxmsg.data8[1];
                    rpm_1 = rxmsg.data8[2] << 8 | rxmsg.data8[3];
                    tourqe_1 = rxmsg.data8[4] << 8 | rxmsg.data8[5];
                    receiveCount++;
                }
            }
    }
    chEvtUnregister(&CAND1.rxfull_event, &el);
}

/*
 * Transmitter thread.
 */
static THD_WORKING_AREA(can_tx_wa, 256);
static THD_FUNCTION(can_tx, p)
{
    (void)p;
    chRegSetThreadName("canTxThd");

    CANTxFrame txmsg;
    txmsg.IDE = CAN_IDE_STD;
    txmsg.SID = 0x200;
    txmsg.RTR = CAN_RTR_DATA;
    txmsg.DLC = 8;

    while (true)
    {
        systime_t t = chVTGetSystemTime();
        palToggleLine(LINE_LED_A);
        txmsg.data8[0] = setCurrent_1 >> 8;
        txmsg.data8[1] = setCurrent_1;
        canTransmitTimeout(&CAND1, CAN_ANY_MAILBOX, &txmsg, TIME_MS2I(2));
        //200Hz
        chThdSleepUntil(t + TIME_MS2I(3));
    }
}

void start()
{
    chThdCreateStatic(&can_tx_wa,
                      sizeof(can_tx_wa),
                      NORMALPRIO + 7,
                      can_tx,
                      NULL);
    chThdCreateStatic(&can_rx_wa,
                      sizeof(can_rx_wa),
                      NORMALPRIO + 7,
                      can_rx,
                      NULL);
}

} // namespace CanBusHandler