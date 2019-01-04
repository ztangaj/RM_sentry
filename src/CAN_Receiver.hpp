#include "ch.hpp"
#include "hal.h"
#include "chprintf.h"

namespace CAN_Receiver
{
extern volatile int16_t setCurrent_1;

extern volatile int16_t tourqe_1;
extern volatile int16_t rpm_1;
extern volatile int16_t orientation_1; // [0,8191] -> [0,360 degree)

void start();

}; // namespace CAN_Receiver