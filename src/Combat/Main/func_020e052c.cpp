#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

#if defined(jpn)
struct Struct_020dea64;

extern "C" void* func_020e0968(const char* arg0, unsigned int* arg1);
extern "C" int func_020dea64(Struct_020dea64* arg0, void* arg1, void* arg2, unsigned int arg3, void* arg4, short arg5);

// JPN: func_020e052c
extern "C" ARM int func_020e052c(Struct_020dea64* arg0, void* arg1, const char* arg2, void* arg3, short arg4, unsigned char arg5) {
    unsigned int var0;
    if (arg5 != 0) {
        BackgroundLoader::AddLockGlobal();
    }
    void* var1 = func_020e0968(arg2, &var0);
    int var2 = func_020dea64(arg0, arg1, var1, var0, arg3, arg4);
    if (arg5 != 0) {
        BackgroundLoader::RemoveLockGlobal();
    }
    return var2;
}
#endif
