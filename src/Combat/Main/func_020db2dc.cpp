#include <globaldefs.h>

extern "C" int GetOAMManager_0203bd08(int arg0);
extern "C" int GetSubOAMBuffer_0203be4c(int arg0);
extern "C" int func_0203be40(int arg0);

// USA: func_020db2dc
extern "C" ARM int func_020db2dc(int arg0, int arg1) {
    int var0 = GetOAMManager_0203bd08(arg0);
    int var1 = GetSubOAMBuffer_0203be4c(var0);
    if (arg1 != 0) return var1;
    return func_0203be40(var0);
}
