/**
 * @file Button.cpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief Generic class for button with single channel actions
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "Button.hpp"

namespace Button
{
volatile bool ButtonPressing = false;
event_source_t ButtonPressedEvt;
event_source_t ButtonReleasedEvt;

//this is done for software button debouncing, simple implementation by sampling the pin state with delay
THD_WORKING_AREA(buttonSampler_wa, 64);
THD_FUNCTION(buttonThdFunc, arg)
{
    (void)arg;
    chRegSetThreadName("buttonThdFunc");
    while (!chThdShouldTerminateX())
    {
        if (palWaitLineTimeout(LINE_USER_BUTTON, TIME_INFINITE) == MSG_OK)
        {
            //delay and sample the button
            chThdSleepMilliseconds(20);
            if (palReadLine(LINE_USER_BUTTON) == BUTTON_PRESSED_STATE)
            {
                chEvtBroadcast(&ButtonPressedEvt);
                ButtonPressing = true;

                while (palReadLine(LINE_USER_BUTTON) == BUTTON_PRESSED_STATE)
                {
                    chThdSleepMilliseconds(20);
                }
                chEvtBroadcast(&ButtonReleasedEvt);
                ButtonPressing = false;
            }
        }
    }
};

void buttonStart()
{
    chEvtObjectInit(&ButtonPressedEvt);
    chEvtObjectInit(&ButtonReleasedEvt);
    chThdCreateStatic(&buttonSampler_wa,
                      sizeof(buttonSampler_wa),
                      NORMALPRIO + 2,
                      buttonThdFunc,
                      NULL);
}

} // namespace Button