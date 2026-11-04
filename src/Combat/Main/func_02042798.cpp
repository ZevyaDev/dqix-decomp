#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)
extern char data_020f001f[];
extern char data_020f0021[];
extern char data_020f0023[];

// JPN: func_02042798
extern "C" ARM unsigned int func_02042798(char* arg0, unsigned int arg1, unsigned int arg2) {
    char var0[0x20];
    char* var4 = data_020f001f;
    char* var1 = strstr(arg0, var4);
    char* var2 = var0;
    int var3;
    memset(var0, 0, 0x20);
    if (var1 != NULL) {
        do {
            if (arg0 != var1) {
                var3 = var1 - arg0;
                memcpy(var2, arg0, var3);
                arg0 += var3;
                var2 += var3;
            }
            arg0++;
            var1 = strstr(arg0, data_020f0021);
            if (var1 == NULL) break;
            var3 = var1 - arg0;
            memcpy(var2, arg0, var3);
            arg0 += var3;
            var2 += var3;
            var1 = strstr(arg0, data_020f0023);
            if (var1 == NULL) break;
            arg0 += var1 + 1 - arg0;
            var1 = strstr(arg0, var4);
        } while (var1 != NULL);
        memcpy(var2, arg0, strlen(arg0));
        return (arg1 - ((arg2 * strlen(var0)) >> 1)) >> 1;
    }
    return (arg1 - ((arg2 * strlen(arg0)) >> 1)) >> 1;
}
#endif
