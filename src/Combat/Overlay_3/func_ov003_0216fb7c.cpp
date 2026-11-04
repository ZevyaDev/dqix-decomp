#include <globaldefs.h>

#if defined(jpn)

struct Struct_0205a254;
struct Struct_0205a254_2;

extern "C" Struct_0205a254_2* func_0205a3d0(Struct_0205a254* arg0, int arg1);
extern "C" void func_0205b724(Struct_0205a254*, int);
extern "C" void func_020e27ec(Struct_0205a254*, int, short, short);
extern "C" void func_0205ae8c(void*);

// JPN: func_ov003_0216fb7c
extern "C" ARM void func_ov003_0216fb7c(char* arg0) {
    if (arg0[1] == 0 || arg0[1] == 1) return;
    Struct_0205a254* var0 = *(Struct_0205a254**)(arg0 + 0xa4);
    if (var0 == NULL) return;

    Struct_0205a254_2* var1 = func_0205a3d0(var0, 1);
    if (*(short*)(arg0 + 0xc) == 5)
        *(short*)((char*)var1 + 0x10) = 0;
    else
        *(short*)((char*)var1 + 0x10) = 1;
    func_0205b724(var0, 1);
    Struct_0205a254_2* var2 = func_0205a3d0(var0, 1);
    if (var2 != NULL) *(unsigned char*)((char*)var2 + 0x15) |= 8;
    func_020e27ec(var0, 1, 0xd2, 0xb);
    func_0205ae8c(arg0 + 0x68);
}

#endif
