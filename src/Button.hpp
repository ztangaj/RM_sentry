#include "ch.hpp"
#include "hal.h"

#define BUTTON_PRESSED_STATE 1

namespace Button
{
extern event_source_t ButtonPressedEvt;
extern event_source_t ButtonReleasedEvt;
extern volatile bool ButtonPressing;

/**
 * @brief start the button feedbacks, this function should only be called once 
 */
void buttonStart();
} // namespace Button