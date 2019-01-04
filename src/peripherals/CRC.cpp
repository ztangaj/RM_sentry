/**
 * @file CRC.cpp
 * @author Alex Au (alex_acw@outlook.com)
 * @brief Hardware crc32 abstraction on stm32f4
 * @version 0.1
 * @date 2018-11-14
 * 
 * @copyright Copyright (c) 2018
 * 
 */

#include "CRC.hpp"

#define CRC_DR (*(volatile uint32_t *)CRC)
#define CRC_IDR *((volatile uint32_t *)CRC + 1)
#define CRC_CR *((volatile uint32_t *)CRC + 2)

namespace CRC32
{

uint32_t accumulate(uint8_t *input, size_t size)
{
    int i;
    for (i = 0; size - i >= 4; i += sizeof(uint32_t))
    {
        CRC->DR = *(uint32_t *)(input + i);
        CRC_DR;
    }
    int remainBytes;
    if ((remainBytes = size % sizeof(uint32_t)))
    {
        uint32_t temp;
        memcpy(&temp, input + i, remainBytes);
        CRC_DR = temp;
    }
    return CRC_DR;
}

void reset()
{
    CRC_CR |= CRC_CR_RESET;
}

void init()
{
//enable CRC clock
#ifdef STM32F4XX
    RCC->AHB1ENR |= RCC_AHB1ENR_CRCEN_Msk;
    (void)RCC->APB1ENR;
#endif

#ifdef STM32F4XX
    RCC->AHB1ENR |= RCC_AHB1ENR_CRCEN_Msk;
    (void)RCC->APB1ENR;
#endif
}

} // namespace CRC32
