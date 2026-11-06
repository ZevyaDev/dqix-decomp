#include <globaldefs.h>
#include "World/Zone3D.h"

extern "C" Zone3D* GetZone3D_02012fe4(void);
extern "C" int func_020981e4(int arg0, int arg1);
extern "C" void QueueMenuScriptEntry_ov011_021848a0(void* menu, int entryId);

static inline unsigned short inline_ov004_02162b3c(Zone3D* arg0) {
    return arg0->currentZoneID_;
}

// USA: func_ov004_02162b3c
extern "C" ARM int func_ov004_02162b3c(void* arg0) {
    Zone3D* var0 = GetZone3D_02012fe4();
    char* var1 = var0->unk_840;
    if (var1 != 0) {
        unsigned short var2 = inline_ov004_02162b3c(var0);
        if (func_020981e4((int)var1, var2) != 0) {
            QueueMenuScriptEntry_ov011_021848a0(arg0, 0x32);
        } else {
            QueueMenuScriptEntry_ov011_021848a0(arg0, 0x33);
        }
    }
    return 0;
}
