#include <globaldefs.h>

#if defined(jpn)

struct Struct_ov004_021589e8 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 5;
    unsigned int unknown_3_2_ : 6;
};

extern "C" void func_020cf0fc(int* arg0);
extern "C" void func_020cf1a8(int* arg0);
extern "C" int func_ov017_021b2090(Struct_ov004_021589e8 arg0, Struct_ov004_021589e8 arg1);

// JPN: func_ov017_021b2718
extern "C" ARM int func_ov017_021b2718(Struct_ov004_021589e8 arg0) {
    Struct_ov004_021589e8 var0;
    int var2[4];
    int var1[3];
    func_020cf0fc(var2);
    func_020cf1a8(var1);
    var0.unknown_0_0_ = var2[0] + 2000;
    var0.unknown_1_4_ = var2[1];
    var0.unknown_2_0_ = var2[2];
    var0.unknown_2_5_ = var1[0];
    var0.unknown_3_2_ = var1[1];
    return func_ov017_021b2090(arg0, var0);
}

#endif
