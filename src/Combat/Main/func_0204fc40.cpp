#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
#define func_020d2ff0 func_020d4a54
#endif

extern "C" int func_020d2ff0(const char* string);
extern "C" int ParseDecimal_02005a94(void* string);

// USA: func_0204fc40
extern "C" ARM int func_0204fc40(void* arg0, char** arg1, char* arg2, short* arg3, int arg4) {
    int var0 = func_020d2ff0(arg2);
    char* var1 = *arg1;
    if (memcmp((unsigned char*)var1, (unsigned char*)arg2, var0) == 0) {
        var1 += var0;
        short var2;
        for (var2 = 0; var2 < arg4; var2++) {
            int var3 = ParseDecimal_02005a94(var1);
            arg3[var2] = (short)var3;
            if (var2 == arg4 - 1) break;
            while (*var1 != ',') var1++;
            var1++;
        }
        while (*var1 != '>' && *var1 != 0) var1++;
        *arg1 = var1 + 1;
        return 1;
    }
    return 0;
}
