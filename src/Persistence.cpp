#include "Persistence.hpp"
#include "CRC.hpp"
#include "flash.hpp"

//TODO: CRC checking
//TODO: multiple sector storage (low pirority)

namespace Persistence
{

char *const storageStartAddr = flashSectorBegin(start_sector);

enum DTYPE : uint32_t
{
    DTYPE_FLOAT32 = 0,
    DTYPE_FLOAT64,
    DTYPE_INT32,
    DTYPE_UINT32
};

typedef struct
{
    const char *const param_name;
    DTYPE dt;
    char *ptr;
} param_entry;

uint32_t volatile testuin32 = 1234;
float64_t volatile testf64 = 4.321;

const param_entry param_list[] = {
    {"testuint32", DTYPE_UINT32, (char *)&testuin32},
    {"testuf64", DTYPE_FLOAT64, (char *)&testf64}};

bool save()
{
    //Unlock flash for write access
    if (!flashUnlock())
        return false;

    char *write_addr = storageStartAddr;
    if (flashSectorErase(start_sector) == FLASH_RETURN_SUCCESS)
    {
        *write_addr = 0x12;
        //write by 32bit
        for (unsigned int i = 0; i < sizeof(param_list) / sizeof(param_entry); i++)
        {
            //32 bit datatypes write
            flashWrite(write_addr, (uint8_t *)param_list[i].ptr, 4);
            //64 bit datatypes's additional 32bit write
            if (param_list[i].dt == DTYPE_FLOAT64)
            {
                write_addr += 4;
                flashWrite(write_addr, (uint8_t *)param_list[i].ptr + 4, 4);
            }
            write_addr += 4;
        }
        return true;
    }
    return false;
}; // namespace Persistence

bool load()
{ //TODO: check CRC beforehand

    volatile char *read_addr = storageStartAddr;
    for (unsigned int i = 0; i < sizeof(param_list) / sizeof(param_entry); i++)
    {
        switch (param_list[i].dt)
        {
            //increment must be at least four byte for simplified write access,
            //increment pointer in unit of 4 bytes
        case DTYPE_FLOAT32:
            *(volatile float32_t *)param_list[i].ptr = *(volatile float32_t *)read_addr;
            read_addr += sizeof(float32_t);
            break;
        case DTYPE_FLOAT64:
            *(volatile float64_t *)param_list[i].ptr = *(volatile float64_t *)read_addr;
            read_addr += sizeof(float64_t);
            break;
        case DTYPE_INT32:
            *(volatile int32_t *)param_list[i].ptr = *(volatile int32_t *)read_addr;
            read_addr += sizeof(int32_t);
            break;
        case DTYPE_UINT32:
            *(volatile uint32_t *)param_list[i].ptr = *(volatile uint32_t *)read_addr;
            read_addr += sizeof(uint32_t);
            break;

            // DTYPE_FLOAT32 = 0,
            // DTYPE_FLOAT64,
            // DTYPE_INT32,
            // DTYPE_UINT32
        };
    }
    return true;
};

} // namespace Persistence