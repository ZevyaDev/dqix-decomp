#include <globaldefs.h>
#include "std_library_functions.h"

// USA: ResetBGVRAMManager_0203b634
extern "C" ARM void ResetBGVRAMManager_0203b634(char* bgVRAMManager) {
    memset(bgVRAMManager, 0, 0x20);
    memset(bgVRAMManager + 0x20, 0, 0x20);
    memset(bgVRAMManager + 0x40, 0, 0x20);
}
