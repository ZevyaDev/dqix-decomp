#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/FileIO.h"
#include "Resource/Script.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
struct Struct_02072a28;
struct Struct_02108db0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned short unknown_2_;
    char* unknown_4_;
    short* unknown_8_;
    SafeAllocator* unknown_c_;
    Struct_02072a28* unknown_10_;
};
extern Struct_02108db0 data_02108db0;
extern Script::OpcodeLookupEntry data_020f0cc8[];

// JPN: func_02073864
extern "C" ARM void func_02073864(Struct_02072a28* arg0, SafeAllocator* arg1, const char* arg2, short* arg3, unsigned short arg4, unsigned char arg5) {
    unsigned int var0;
    Script var1;

    BackgroundLoader::AddLockGlobal();

    void* var2 = LoadFileIntoMemory(arg2, data_0211e33c, &var0);
    if (var2 != NULL) {
        data_02108db0.unknown_10_ = arg0;
        data_02108db0.unknown_c_ = arg1;
        data_02108db0.unknown_8_ = arg3;
        data_02108db0.unknown_2_ = arg4;
        data_02108db0.unknown_4_ = NULL;
        data_02108db0.unknown_0_ = arg5;
        var1.Initialize();
        var1.SetOpcodeLookup(data_020f0cc8);
        var1.Load(var2, var0);
        var1.Execute();
    }
    BackgroundLoader::RemoveLockGlobal();
}
#endif
