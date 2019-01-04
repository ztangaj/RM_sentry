/**
 * @file CRC.hpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief Hardware crc32 abstraction on stm32f4
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "ch.hpp"
#include "hal.h"
#include <cstdint>
#include <cstring>

namespace CRC32
{

uint32_t accumulate(uint8_t *input, size_t size);

void reset();
void init();

} // namespace CRC32