#include "ShellManager.hpp"
#include "memstreams.h"
#include "DR16.hpp"

namespace shellApp
{

class logger : public chibios_rt::BaseStaticThread<256>
{
  protected:
    void main(void) override
    {
        setName("usb_shell_logger");

        msObjectInit(&logStream, logStreamBuf, sizeof(logStreamBuf), 0);

        while (!chThdShouldTerminateX())
        {
            //MemoryStream is used to prevent hanging when writing to unavailable port

            if (DR16::isConnected)
                chprintf((BaseSequentialStream *)&logStream,
                         "\nDR16:\nch0 %d\nch1 %d\nch2 %d\nch3 %d\ns1 %d\ns2 %d\n",
                         DR16::rcValue.rc.ch0,
                         DR16::rcValue.rc.ch1,
                         DR16::rcValue.rc.ch2,
                         DR16::rcValue.rc.ch3,
                         DR16::rcValue.rc.s1,
                         DR16::rcValue.rc.s2);
            else
                chprintf((BaseSequentialStream *)&logStream,
                         "\nDR16: remote not connected\n");

            chnWriteTimeout(&SHELL_CHN, logStream.buffer, logStream.eos, TIME_MS2I(50));
            logStream.eos = 0;

            chThdSleepMilliseconds(250);
        }
    };

  public:
    logger(void) : BaseStaticThread<256>(){};

    MemoryStream logStream;
    uint8_t logStreamBuf[256];
} shellLogger;
} // namespace shellApp