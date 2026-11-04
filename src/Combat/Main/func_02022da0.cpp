#include <globaldefs.h>
#if defined(jpn)
#include "Resource/MessageSystem.h"
#include "NitroSDK/Memory.h"
#include "NitroSDK/Cache.h"
#include "NitroSDK/LoadToVRAM.h"

extern "C" Struct_02021b84* func_020421a0(void);
extern "C" void func_020230fc(void* arg0, void* arg1, int arg2);
extern "C" void func_020c9820(void);

// JPN: func_02022da0
extern "C" ARM int func_02022da0(void* arg0) {
    char* var0 = func_020421a0()->unknown_2c_;
    char* var1 = (char*)0x06600000;
    VectorizedInvertedMemcpy(var1 + 0x2c20, var0, 0x480);
    func_020230fc(arg0, var0, 0);
    func_020c9820();
    DC_FlushRange(var0, 0x480);
    LoadToSubObjVRAM(var0, 0x2c20, 0x480);
    return 1;
}
#endif
