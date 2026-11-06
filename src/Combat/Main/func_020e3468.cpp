#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" Struct_0208ab34_2* func_020e3054(Struct_0208ab34_2* arg0, int arg1);

struct LocalWireless_0202c1a4 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(LocalWireless_0202c1a4* wireless);

struct Struct_020e3004_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" void func_020e303c(Struct_020e3004_2* arg0);

// USA: func_020e3468
extern "C" ARM void func_020e3468(Struct_0208ab34_2* arg0, int arg1) {
    void* var0 = GetLocalWireless_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)var0)) return;
    Struct_0208ab34_2* var1 = func_020e3054(arg0, arg1);
    if (var1 == NULL) return;
    signed char var2 = GetOwnProtagonistObjectIndex_0202c1a4((LocalWireless_0202c1a4*)var0);
    if (var1->unknown_0_ != var2) return;
    func_020e303c((Struct_020e3004_2*)var1);
}
