#include <globaldefs.h>
#include "Combat/Main/CopyRecord0200fbb4.h"

// USA: SetZoneEntry_0200fcfc
extern "C" ARM void* SetZoneEntry_0200fcfc(void* gameState, const void* zoneEntry) {
    return func_0200fbb4(
        (ZoneEntry_0200fba4*)((char*)gameState + 0x3f8),
        (const ZoneEntry_0200fba4*)zoneEntry);
}
