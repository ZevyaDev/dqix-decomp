#include <globaldefs.h>

#if defined(jpn)
extern "C" void* func_ov011_021849c8(void* arg0);
extern "C" void* func_ov023_021f6880(void* arg0, int arg1);
extern "C" int func_ov023_021f6f10(void* arg0);

// JPN: func_ov004_0216b010
extern "C" ARM void func_ov004_0216b010(void* arg0, int arg1, int arg2) {
    void* var0 = func_ov023_021f6880(func_ov011_021849c8(arg0), arg1);
    if (var0 != NULL && func_ov023_021f6f10(var0) == 8) {
        *(unsigned short*)((char*)var0 + 0x38) = (unsigned short)arg2;
    }
}
#endif
