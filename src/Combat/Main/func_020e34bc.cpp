#include <globaldefs.h>

extern "C" void* GetLocalWireless_0202ae18(void);

extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct Struct_0208ab34_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
    unsigned char unknown_3_;
};
extern "C" struct Struct_0208ab34_2* func_020e3054(struct Struct_0208ab34_2* arg0, int arg1);

struct LocalWireless_0202c1a4 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);

struct Struct_0208ab34 {
    struct Struct_0208ab34_2 unknown_0_[8];
    unsigned char unknown_20_[8];
};

#pragma optimize_for_size off
// USA: func_020e34bc
extern "C" ARM int func_020e34bc(struct Struct_0208ab34* arg0, int arg1) {
    unsigned char* var0;
    int var1;
    void* var2;
    struct Struct_0208ab34_2* var3;
    signed char var4;

    var2 = GetLocalWireless_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)var2)) return 1;

    var1 = 0;
    for (var0 = arg0->unknown_20_; var1 < 8; var0++) {
        if (*var0 == arg1) return 2;
        var1++;
    }

    var3 = func_020e3054(arg0->unknown_0_, arg1);
    if (var3 != NULL) {
        var4 = GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)var2);
        if (var3->unknown_0_ == var4) return var3->unknown_2_;
        return 3;
    }
    return 0;
}
