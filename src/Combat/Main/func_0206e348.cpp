#include <globaldefs.h>


extern "C" short func_0206e3e8(int arg0, int arg1);
extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);

// USA: func_0206e348
extern "C" ARM void func_0206e348(unsigned char* arg0, int arg1, int arg2) {
    int var0 = func_0206e3e8((int)arg0, (short)arg1);
    if (var0 - 0x11 < 0) return;
    SetFlag_0206df6c(arg0, arg0 + 0x8c, var0 + 0xbf1, arg2);
}
