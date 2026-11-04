#include <globaldefs.h>

#if defined(jpn)
extern "C" int func_02001aec(const char* arg0, const char* arg1, int arg2);

// JPN: func_0206c520
extern "C" ARM void func_0206c520(int arg0, const char** arg1, const char* arg2, int arg3) {
    if (!arg1 || !arg2) return;
    const char* var0 = *arg1;
    while (*var0) {
        if (!func_02001aec(var0, arg2, arg3)) break;
        var0++;
    }
    *arg1 = var0;
}
#endif
