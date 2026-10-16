#include "Filesystem/FSInnerDefs.h"
#include <globaldefs.h>

void RegisterType0x11Handler_020d1118();
Struct_02111f20::LowLevelReadProc GetLowLevelCartridgeReadProc();

// KEEP-NAME: the ROM symbol here is the mangled C++ name, not a func_ tag.
// USA: func_020d0ec4
ARM void InitializeCardReading()
{
    CardReadManager* readManager = &data_021118e0;
    if (readManager->flags != 0)
        return;

    readManager->flags = (1 << CARTRIDGE_READ_CONTEXT_FLAG_0);
    readManager->writeLength = 0;
    readManager->writeDst = NULL;
    readManager->cartridgeReadOffset = 0;
    readManager->dmaChannel = -1;
    readManager->onComplete = NULL;
    readManager->handle = NULL;

    data_02111f00.number = 0;
    InitializeCardReadManager();
    data_02111f00.innerStruct.lowLevelReadProc = GetLowLevelCartridgeReadProc();
    RegisterType0x11Handler_020d1118();
}
