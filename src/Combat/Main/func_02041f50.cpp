#include <globaldefs.h>

#if defined(jpn)
// JPN: func_02041f50
extern "C" ARM void func_02041f50(char* arg0, char* arg1) {
    if (arg0 == NULL || arg1 == NULL) return;
    while (*arg0 != 0) {
        if (*arg0 == '[') {
            int var1 = 0;
            int var2 = 0;
            char* var4 = arg0 + 1;
            char* var3 = NULL;
            while (*var4 != 0) {
                if (*var4 == '/') {
                    var4++;
                    var1 = 1;
                    break;
                }
                unsigned char var5 = *(unsigned char*)var4;
                if ((var5 >= 0x81 && var5 <= 0x9f) || (var5 >= 0xe0 && var5 <= 0xea)) var4++;
                var4++;
            }
            while (*var4 != 0) {
                if (*var4 == ']') {
                    var3 = var4 + 1;
                    var2 = 1;
                    break;
                }
                unsigned char var5 = *(unsigned char*)var4;
                if ((var5 >= 0x81 && var5 <= 0x9f) || (var5 >= 0xe0 && var5 <= 0xea)) var4++;
                var4++;
            }
            if (var1 != 0 && var2 != 0) {
                arg0++;
                while (*arg0 != '/') {
                    unsigned char var6 = *(unsigned char*)arg0;
                    if ((var6 >= 0x81 && var6 <= 0x9f) || (var6 >= 0xe0 && var6 <= 0xea)) {
                        *arg1++ = *arg0;
                        arg0++;
                    }
                    *arg1++ = *arg0++;
                }
                arg0 = var3;
                continue;
            }
        }
        unsigned char var7 = *(unsigned char*)arg0;
        if ((var7 >= 0x81 && var7 <= 0x9f) || (var7 >= 0xe0 && var7 <= 0xea)) {
            *arg1++ = *arg0;
            arg0++;
        }
        *arg1++ = *arg0++;
    }
}
#endif
