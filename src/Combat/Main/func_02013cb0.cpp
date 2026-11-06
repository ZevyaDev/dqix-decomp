#include <globaldefs.h>
#include "World/ZoneChest.h"

struct ActiveZone_020fdd44;
extern "C" ActiveZone_020fdd44* GetActiveZones_02027ca4();
extern "C" ActiveZone_020fdd44* FindActiveZone_02028bd0(ActiveZone_020fdd44* zones, int zoneId);

// USA: func_02013cb0
extern "C" ARM void func_02013cb0(Zone3D* arg0, unsigned int arg1) {
    int var0;
    for (var0 = 0; var0 < arg0->unknown_476_; var0++) {
        if (arg1 & (1 << var0)) {
            arg0->unknown_478_[var0].unknown_2_ = -1;
        }
    }
    ActiveZone_020fdd44* var1 = GetActiveZones_02027ca4();
    ActiveZone_020fdd44* var2 = FindActiveZone_02028bd0(var1, arg0->currentZoneID_);
    if (var2 == NULL) {
        return;
    }
    unsigned short* var3 = (unsigned short*)((unsigned char*)var2 + 2);
    unsigned int var4 = *var3;
    *var3 = (var4 & 0xffff000f) | ((arg1 << 20) >> 16);
}
