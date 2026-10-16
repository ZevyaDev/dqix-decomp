#include "Filesystem/FSInnerDefs.h"
#include "System/BiosData.h"
#include <globaldefs.h>

#define ADDR_GAMECARD_BUS_ROMCTRL 0x040001a4
#define ADDR_GAMECARD_RECEIVED_DATA 0x04100010

#define ROMCTRL_FLAG_WORD_READY (1u << 23)

void SendGamecardBusCommand(unsigned int firstWord, unsigned int secondWord);

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0cd8
ARM unsigned int SetupNormalGamecardBusCommandMode()
{
    SendGamecardBusCommand(0xb8000000, 0x00000000);
    unsigned int newSettings = data_020f22cc->gamecardBusControlNormalSettings;
    newSettings &= ~0x07000000;
    newSettings |=  0xa7000000;
    newSettings &=  0xffffe000;
    *(volatile unsigned int*)ADDR_GAMECARD_BUS_ROMCTRL = newSettings;
    do {
    } while ((*(volatile unsigned int*)ADDR_GAMECARD_BUS_ROMCTRL & ROMCTRL_FLAG_WORD_READY) == 0);
    return *(volatile unsigned int*)ADDR_GAMECARD_RECEIVED_DATA;
}
