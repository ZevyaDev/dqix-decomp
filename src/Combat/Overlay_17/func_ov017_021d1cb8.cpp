#include <globaldefs.h>

struct LocalWireless_0202c1a4 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};

extern "C" int* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);
extern "C" void* func_0202ae24(void);
extern "C" void func_0205e330(void* arg0, void* arg1, int arg2);

struct Struct_ov017_021d1cb8 {
    unsigned char unknown_0_;
    char unknown_1_[19];
};

// USA: func_ov017_021d1cb8
extern "C" ARM void func_ov017_021d1cb8(void) {
    if (!IsLocalWirelessOn_0202b7d8(GetLocalWireless_0202ae18())) return;
    if (GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)GetLocalWireless_0202ae18()) != 0) return;
    void* var0 = func_0202ae24();

    struct Struct_ov017_021d1cb8 var1;
    var1.unknown_0_ = 0xb4;
    func_0205e330(var0, &var1, 0);
}
