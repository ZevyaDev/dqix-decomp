#include <globaldefs.h>

#if defined(jpn)
extern "C" void* func_0204af14(void* arg0, unsigned int arg1);
extern "C" void func_0204b938(void* arg0, void* arg1, int arg2, int arg3, unsigned short arg4);

// JPN: func_ov000_021811f4
extern "C" ARM void func_ov000_021811f4(char* arg0, int arg1, void* arg2, int arg3, short arg4, int arg5) {
    do {
        void* var1 = func_0204af14(arg0 + 0xc4 + 0x800, (unsigned char)(arg3 % 10 + 5));
        func_0204b938(arg2, var1, arg4, arg5, (unsigned short)(arg1 + 2));
        arg4 = arg4 - 1;
        arg3 = arg3 / 10;
    } while (arg3 != 0);
}
#else
extern "C" int func_ov000_02174e34(int arg0, int arg1);
extern "C" void DrawSprite_0205ac40(void* spriteSet, void* sprite);

struct Struct_ov000_021811f4 {
    char unknown_0_[0x14];
    int unknown_14_;
    int unknown_18_;
    char unknown_1c_[0x6];
    unsigned char unknown_22_;
    char unknown_23_[0x2];
    unsigned char unknown_25_;
    unsigned char unknown_26_;
};

// USA: func_ov000_021811f4
extern "C" ARM void func_ov000_021811f4(void* arg0, int arg1, short arg2, int arg3, short, short) {
    struct Struct_ov000_021811f4* var0 = *(struct Struct_ov000_021811f4**)((char*)arg0 + 0x170);
    struct Struct_ov000_021811f4* var1 = var0 + (arg1 + 0x24);
    var1->unknown_14_ = arg2 << 0xc;
    var1->unknown_18_ = arg3 << 0xc;
    var1->unknown_22_ = (unsigned char)(arg1 + 0x48);
    var1->unknown_26_ = 1;
    var1->unknown_25_ = (unsigned char)func_ov000_02174e34((int)arg0, (signed char)arg1);
    DrawSprite_0205ac40((char*)arg0 + 0x11c, var1);
}
#endif
