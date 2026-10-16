#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

#define ADDR_GAMECARD_BUS_ROMCTRL 0x040001a4
#define GAMECARD_BUS_COMMAND_BYTE(n) *(unsigned char*)(0x040001a8 + n)

#define ROMCTRL_FLAG_BUSY (1u << 31)

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d08d8
ARM void SendGamecardBusCommand(unsigned int firstWord, unsigned int secondWord)
{
    volatile unsigned int* control = (unsigned int*)ADDR_GAMECARD_BUS_ROMCTRL;
    while (*control & ROMCTRL_FLAG_BUSY) {}

    *(unsigned char*)0x40001a1 = 0xC0;

    GAMECARD_BUS_COMMAND_BYTE(0) = firstWord >> 24;
    GAMECARD_BUS_COMMAND_BYTE(1) = firstWord >> 16;
    GAMECARD_BUS_COMMAND_BYTE(2) = firstWord >> 8;
    GAMECARD_BUS_COMMAND_BYTE(3) = firstWord >> 0;

    GAMECARD_BUS_COMMAND_BYTE(4) = secondWord >> 24;
    GAMECARD_BUS_COMMAND_BYTE(5) = secondWord >> 16;
    GAMECARD_BUS_COMMAND_BYTE(6) = secondWord >> 8;
    GAMECARD_BUS_COMMAND_BYTE(7) = secondWord >> 0;
}
