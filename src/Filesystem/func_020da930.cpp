#include <globaldefs.h>
#include "Filesystem/ExtendedNitroVM.h"

#if defined(jpn)
extern "C" void func_020d9e5c(void* arg0, int arg1);

// JPN: func_020da930
extern "C" ARM int func_020da930(const char* arg0, void* arg1, unsigned int* arg2, unsigned int arg3, bool arg4) {
    *arg2 = 0;
    if (arg1 == NULL) return 0;

    ExtendedNitroVM var0;
    func_020d9e5c(&var0, sizeof(ExtendedNitroVM));
    var0.status = 0;
    var0.isBadState = 0;
    if (!var0.Open(arg0, arg4)) return 0;

    int var1 = 0;
    unsigned int var2 = var0.GetFileSize();
    if (arg3 >= ((var2 + 7) & ~3)) {
        if (var0.DecompressBytes(arg1, *arg2, var2, arg3)) var1 = 1;
    }
    var0.Close();
    return var1;
}
#endif
