#include <globaldefs.h>
#include "NitroSDK/Memory.h"

// USA: InitZoneEntry_02070378
extern "C" ARM void InitZoneEntry_02070378(char* zoneEntry) {
    VectorizedMemset(zoneEntry, 0, 0x70);
    zoneEntry[0x4] = 1;
    zoneEntry[0x8] = 1;
    zoneEntry[0x9] = 1;
    zoneEntry[0xb] = -1;
    *(int*)(zoneEntry + 0x20) = -1;
    *(int*)(zoneEntry + 0x24) = -1;
    *(int*)(zoneEntry + 0x28) = -1;
    *(int*)(zoneEntry + 0x2c) = -1;
    *(short*)(zoneEntry + 0x1e) = -1;
    zoneEntry[0xc] = 0;
    *(short*)(zoneEntry + 0x6c) = -1;
}
