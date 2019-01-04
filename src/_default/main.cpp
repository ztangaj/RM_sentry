/*
    ChibiOS - Copyright (C) 2006..2018 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#include "ch.hpp"
#include "hal.h"
#include "arm_math.h"

#include "chprintf.h"
#include "shell.h"

#include "Peripherals.hpp"

#include "usbcfg.h"
#include "ShellManager.hpp"
#include "DR16.hpp"
#include "CAN_Receiver.hpp"
#include "SH1106.hpp"
#include "usbcfg.h"

#include "chassis_task.hpp"

int lastrpm = 0;
double the_acceleration = 0.0;

pid_s_t wheel_pid;

static THD_WORKING_AREA(motor_ctrl_thread_wa, 512);
static THD_FUNCTION(motor_ctrl_thread, p)
{
    (void)p;

    pid_init(&wheel_pid, 7.0f, 0.0f, 0.0f, 1000.0f, 16384.0f);

    while (true)
    {

        chassis_task(&wheel_pid);
        chThdSleepMilliseconds(2);
    }
}

int main(void)
{
    /*
   * System initializations.
   * - HAL initialization, this also initializes the configured device drivers
   *   and performs the board-specific initializations.
   * - Kernel initialization, the main() function becomes a thread and the
   *   RTOS is active.
   */
    halInit();
    chSysInit();
    DR16::start();
    OLED_Init();
    OLED_Display_On();

    Peripherals::init_All();

    CAN_Receiver::start();
    ShellManager::init();

    chThdCreateStatic(motor_ctrl_thread_wa, sizeof(motor_ctrl_thread_wa),
                      NORMALPRIO, motor_ctrl_thread, NULL);

    while (true)
    {
        OLED_ShowString(0, 0, "_default");
        palToggleLine(LINE_LED_GREEN);
        chprintf((BaseSequentialStream *)&SDU1,
                 "ch0: %d\n setcurrect:%d\n rpm: %d\n orientation:%d\n acceleration:%d/n",
                 DR16::rcValue.rc.ch0,
                 CAN_Receiver::setCurrent_1,
                 CAN_Receiver::rpm_1,
                 CAN_Receiver::orientation_1,
                 the_acceleration);
        the_acceleration = (CAN_Receiver::rpm_1 - lastrpm)/0.005;
        lastrpm = CAN_Receiver::rpm_1;
        chThdSleepMilliseconds(5);
    }
}