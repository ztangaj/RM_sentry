/**
 * @file flash.cpp
 * @author Someone on GitHub, Modified by Alex Au
 * @brief flash memory manipulator for stm32f4 devices
 * @date 2018-10-27
 * 
 * @copyright Copyright (c) 2018
 * 
 */
#include "string.h"
#include "flash.hpp"

size_t flashSectorSize(flashsector_t sector)
{
    if (sector > 11 && sector < 24)
        sector -= 12;
    if (sector <= 3)
        return 16 * 1024;
    else if (sector == 4)
        return 64 * 1024;
    else if (sector >= 5 && sector <= 11)
        return 128 * 1024;
    return 0;
}

char *flashSectorBegin(flashsector_t sector)
{
    char *address = (char *)FLASH_BASE;
    while (sector > 0)
    {
        --sector;
        address += flashSectorSize(sector);
    }
    return address;
}

char *flashSectorEnd(flashsector_t sector)
{
    return flashSectorBegin(sector + 1);
}

flashsector_t flashSectorAt(char *address)
{
    flashsector_t sector = 0;
    while (address >= flashSectorEnd(sector))
        ++sector;
    return sector;
}

/**
 * @brief Wait for the flash operation to finish.
 */
inline void flashWaitWhileBusy()
{
    while (FLASH->SR & FLASH_SR_BSY)
        ;
}

/**
 * @brief Unlock the flash memory for write access.
 * @return true  Unlock was successful.
 */
bool flashUnlock()
{
    /* Check if unlock is really needed */
    if (!(FLASH->CR & FLASH_CR_LOCK))
        return true;

    /* Write magic unlock sequence */
    FLASH->KEYR = 0x45670123;
    FLASH->KEYR = 0xCDEF89AB;

    /* Check if unlock was successful */
    if (FLASH->CR & FLASH_CR_LOCK)
        return false;
    return true;
}

/**
 * @brief Lock the flash memory for write access.
 */
#define flashLock()                 \
    {                               \
        FLASH->CR |= FLASH_CR_LOCK; \
    }

int flashSectorErase(flashsector_t sector)
{
    /* Unlock flash for write access */
    if (!flashUnlock())
        return FLASH_RETURN_NO_PERMISSION;

    /* Wait for any busy flags. */
    flashWaitWhileBusy();

    /* Setup parallelism before any program/erase */
    FLASH->CR &= ~FLASH_CR_PSIZE_MASK;
    FLASH->CR |= FLASH_CR_PSIZE_VALUE;

    /* Start deletion of sector.
     * SNB(3:1) is defined as:
     * 00000 to 01011 sector 0 to sector 11
     * 10000 to 11011 sector 12 to sector 23
     * others not allowed */
    if (sector > 11)
    {
        FLASH->CR |= FLASH_CR_SNB_4;
        sector -= 12;
    }
    FLASH->CR &= ~(FLASH_CR_SNB_0 | FLASH_CR_SNB_1 | FLASH_CR_SNB_2 | FLASH_CR_SNB_3);
    if (sector & 0x1)
        FLASH->CR |= FLASH_CR_SNB_0;
    if (sector & 0x2)
        FLASH->CR |= FLASH_CR_SNB_1;
    if (sector & 0x4)
        FLASH->CR |= FLASH_CR_SNB_2;
    if (sector & 0x8)
        FLASH->CR |= FLASH_CR_SNB_3;
    FLASH->CR |= FLASH_CR_SER;
    FLASH->CR |= FLASH_CR_STRT;

    /* Wait until it's finished. */
    flashWaitWhileBusy();

    /* Sector erase flag does not clear automatically. */
    FLASH->CR &= ~FLASH_CR_SER;

    /* Lock flash again */
    flashLock();

    /* Check deleted sector for errors */
    if (flashIsErased(flashSectorBegin(sector), flashSectorSize(sector)) == FALSE)
        return FLASH_RETURN_BAD_FLASH; /* Sector is not empty despite the erase cycle! */

    /* Successfully deleted sector */
    return FLASH_RETURN_SUCCESS;
}

int flashErase(char *address, size_t size)
{
    while (size > 0)
    {
        flashsector_t sector = flashSectorAt(address);
        int err = flashSectorErase(sector);
        if (err != FLASH_RETURN_SUCCESS)
            return err;
        address = flashSectorEnd(sector);
        size_t sector_size = flashSectorSize(sector);
        if (sector_size >= size)
            break;
        else
            size -= sector_size;
    }

    return FLASH_RETURN_SUCCESS;
}

bool flashIsErased(char *address, size_t size)
{
    /* Check for default set bits in the flash memory
     * For efficiency, compare flashdata_t values as much as possible,
     * then, fallback to byte per byte comparison. */
    while (size >= sizeof(flashdata_t))
    {
        if (*(volatile flashdata_t *)address != (flashdata_t)(-1)) // flashdata_t being unsigned, -1 is 0xFF..FF
            return FALSE;
        address += sizeof(flashdata_t);
        size -= sizeof(flashdata_t);
    }
    while (size > 0)
    {
        if (*(char *)address != 0xff)
            return FALSE;
        ++address;
        --size;
    }

    return TRUE;
}

bool flashCompare(char *address, const char *buffer, size_t size)
{
    /* For efficiency, compare flashdata_t values as much as possible,
     * then, fallback to byte per byte comparison. */
    while (size >= sizeof(flashdata_t))
    {
        if (*(volatile flashdata_t *)address != *(flashdata_t *)buffer)
            return FALSE;
        address += sizeof(flashdata_t);
        buffer += sizeof(flashdata_t);
        size -= sizeof(flashdata_t);
    }
    while (size > 0)
    {
        if (*(volatile char *)address != *buffer)
            return FALSE;
        ++address;
        ++buffer;
        --size;
    }

    return TRUE;
}

int flashRead(char *address, char *buffer, size_t size)
{
    memcpy(buffer, (char *)address, size);
    return FLASH_RETURN_SUCCESS;
}

static void flashWriteData(char *address, const flashdata_t data)
{
    /* Enter flash programming mode */
    FLASH->CR |= FLASH_CR_PG;

    /* Write the data */
    *(flashdata_t *)address = data;

    /* Wait for completion */
    flashWaitWhileBusy();

    /* Exit flash programming mode */
    FLASH->CR &= ~FLASH_CR_PG;
}

int flashWrite(char *address, const uint8_t *buffer, size_t size)
{
    /* Unlock flash for write access */
    if (!flashUnlock())
        return FLASH_RETURN_NO_PERMISSION;

    /* Wait for any busy flags */
    flashWaitWhileBusy();

    /* Setup parallelism before any program/erase */
    FLASH->CR &= ~FLASH_CR_PSIZE_MASK;
    FLASH->CR |= FLASH_CR_PSIZE_VALUE;

    /* Check if the flash address is correctly aligned */
    size_t alignOffset = (size_t)address % sizeof(flashdata_t);
    if (alignOffset != 0)
    {
        /* Not aligned, thus we have to read the data in flash already present
         * and update them with buffer's data */

        /* Align the flash address correctly */
        char *alignedFlashAddress = address - alignOffset;

        /* Read already present data */
        flashdata_t tmp = *(volatile flashdata_t *)alignedFlashAddress;

        /* Compute how much bytes one must update in the data read */
        size_t chunkSize = sizeof(flashdata_t) - alignOffset;
        if (chunkSize > size)
            chunkSize = size; // this happens when both address and address + size are not aligned

        /* Update the read data with buffer's data */
        memcpy((char *)&tmp + alignOffset, buffer, chunkSize);

        /* Write the new data in flash */
        flashWriteData(alignedFlashAddress, tmp);

        /* Advance */
        address += chunkSize;
        buffer += chunkSize;
        size -= chunkSize;
    }

    /* Now, address is correctly aligned. One can copy data directly from
     * buffer's data to flash memory until the size of the data remaining to be
     * copied requires special treatment. */
    while (size >= sizeof(flashdata_t))
    {
        flashWriteData(address, *(const flashdata_t *)buffer);
        address += sizeof(flashdata_t);
        buffer += sizeof(flashdata_t);
        size -= sizeof(flashdata_t);
    }

    /* Now, address is correctly aligned, but the remaining data are to
     * small to fill a entier flashdata_t. Thus, one must read data already
     * in flash and update them with buffer's data before writing an entire
     * flashdata_t to flash memory. */
    if (size > 0)
    {
        flashdata_t tmp = *(volatile flashdata_t *)address;
        memcpy(&tmp, buffer, size);
        flashWriteData(address, tmp);
    }

    /* Lock flash again */
    flashLock();

    return FLASH_RETURN_SUCCESS;
}

/*
Additional commands for storing more dynamic data
*/
