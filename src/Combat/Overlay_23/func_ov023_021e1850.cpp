#include <globaldefs.h>

#if defined(jpn)

#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"

struct Struct_ov023_021ffa34 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};

extern Struct_ov023_021ffa34 data_ov023_021ffa34;
extern Script::OpcodeLookupEntry data_ov023_021fdc78[];

// JPN: func_ov023_021e1850
extern "C" ARM void func_ov023_021e1850(int arg0, int arg1, const char* arg2, int arg3, short arg4) {
    unsigned int var0;
    Script var1;
    BackgroundLoader::AddLockGlobal();
    void* var2 = LoadFileIntoMemory(arg2, data_0211e33c,&var0);
    if (var2 != NULL) {
        data_ov023_021ffa34.unknown_c_ = arg0;
        data_ov023_021ffa34.unknown_8_ = arg1;
        data_ov023_021ffa34.unknown_4_ = arg3;
        data_ov023_021ffa34.unknown_0_ = arg4;
        var1.Initialize();
        var1.SetOpcodeLookup(data_ov023_021fdc78);
        var1.Load(var2, var0);
        var1.Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}

#endif
