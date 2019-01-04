/**
 * @file Persistence.hpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief 
 * @version 0.1
 * @date 2018-10-30
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "flash.hpp"
#include "arm_math.h"

namespace Persistence
{

/**
 * Declaration of variables to persist here
 */
extern volatile uint32_t testuin32;
extern volatile float64_t testf64;

/**
 * We use the last sector:
 * sector 23
 * 0x081E0000 - 0x081FFFFF
 * 128kB
 */
const flashsector_t start_sector = 23;

bool save();

bool load();

} // namespace Persistence