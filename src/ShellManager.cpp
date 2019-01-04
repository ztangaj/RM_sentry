/**
 * @brief 
 * 
 * @file shell.cpp
 * @author Alex Au
 * @date 2018-09-20
 */

#include "ShellManager.hpp"
#include "CRC.hpp"
#include <stdio.h>
#include <stdlib.h>
#include "DR16.hpp"
#include "arm_math.h"
#include "Persistence.hpp"

namespace ShellManager
{

const ShellCommand commands[] = {
    {NULL, NULL}};

#ifdef SHELL_SD
static const SerialConfig shellSDConfig =
    {SHELL_BAUD,
     0,
     USART_CR2_STOP1_BITS,
     0};

const ShellConfig shell_cfg = {
    (BaseSequentialStream *)&SHELL_SD,
    commands};

#else

const ShellConfig shell_cfg = {
    (BaseSequentialStream *)&SDU1,
    commands};

class usb_shell_watchdog : public chibios_rt::BaseStaticThread<64>
{
  protected:
    void main(void) override
    {

        setName("usb_shell_watchdog");
        while (!chThdShouldTerminateX())
        {
            chThdWait(chThdCreateFromHeap(NULL, SHELL_WA_SIZE,
                                          "shell",
                                          NORMALPRIO + 1,
                                          shellThread,
                                          (void *)&shell_cfg));
        }
    };

  public:
    usb_shell_watchdog(void) : BaseStaticThread<64>(){};
} usbShellWD;
#endif

void init()
{
    shellInit();
#ifdef SHELL_SD
    sdStart(&SHELL_SD, &shellSDConfig);
    chThdCreateFromHeap(NULL, SHELL_WA_SIZE,
                        "shell",
                        NORMALPRIO + 1,
                        shellThread,
                        (void *)&shell_cfg);
#else
    usbShellWD.start(NORMALPRIO);
#endif
}

void testPrint(BaseSequentialStream *chp, int argc, char *argv[])
{
    chprintf(chp, "argc = %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        chprintf(chp, "argv[%d] = %s\n", i, argv[i]);
    }
}

} // namespace ShellManager
