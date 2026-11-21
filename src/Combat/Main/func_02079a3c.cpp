#include <globaldefs.h>
#include "Filesystem/GPC.h"

void ZeroInitGPCPointer(GPCFile** ppGPC);

// USA: InitGPCReadPair_02079a3c
extern "C" ARM void* InitGPCReadPair_02079a3c(void* readPair) {
    ZeroInitGPCPointer((GPCFile**)(readPair));
    ((GPCReadPair*)readPair)->ZeroInitializeMachine();
    return readPair;
}
