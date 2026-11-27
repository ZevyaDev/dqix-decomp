#include <globaldefs.h>

extern "C" void Memcpy_ov031_0221e51c(void*, const void*, unsigned int);

// USA: func_ov031_0221e428
extern "C" THUMB void func_ov031_0221e428(unsigned char* arg0, int arg1, unsigned char* arg2) {
    int var0 = arg1 / 2;
    Memcpy_ov031_0221e51c(arg2, arg0 + var0, var0);
    Memcpy_ov031_0221e51c(arg2 + var0, arg0, var0);
    Memcpy_ov031_0221e51c(arg0, arg2, arg1);
}
