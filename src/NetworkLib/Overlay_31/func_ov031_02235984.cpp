#include <globaldefs.h>

extern void* data_ov031_02290cf8;
extern unsigned char data_ov031_022491fc[6];
extern "C" int CompareBytes_02001aec(void* left, void* right, int count);

// USA: func_ov031_02235984
extern "C" ARM int func_ov031_02235984(void** arg0) {
    int var0 = 0;
    int var1 = 0;
    char* var2 = (char*)data_ov031_02290cf8 + 0x1300;
    *arg0 = var2;
    do {
        int var3 = CompareBytes_02001aec(var2 + 0x20, data_ov031_022491fc, 6);
        var1++;
        if (var3 != 0) var0++;
        var2 += 0x2a;
    } while (var1 < 20);
    return var0;
}
