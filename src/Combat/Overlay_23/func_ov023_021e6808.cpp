#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov023_021fc9ec_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};
struct Struct_ov023_021fc9ec {
    Struct_ov023_021fc9ec_2 unknown_0_;
    Struct_ov023_021fc9ec_2 unknown_2_;
};
extern const Struct_ov023_021fc9ec data_ov023_021fc9ec;

// JPN: func_ov023_021e6808
extern "C" ARM void func_ov023_021e6808(int arg0, unsigned char* arg1) {
    unsigned char var1 = arg1[0];
    unsigned char var2;
    Struct_ov023_021fc9ec_2 var0 = data_ov023_021fc9ec.unknown_2_;
    Struct_ov023_021fc9ec_2 var3 = data_ov023_021fc9ec.unknown_0_;
    var2 = arg1[1];
    if (var1 == 0x82 && var0.unknown_0_ <= var2 && var2 <= var3.unknown_0_) {
        var2 -= 1;
        var2 -= var2 % 3;
        var2 += 3;
    } else if (var1 == 0x83 && var0.unknown_1_ <= var2 && var2 <= var3.unknown_1_) {
        var2 -= 2;
        var2 -= var2 % 3;
        var2 += 4;
    } else {
        return;
    }
    arg1[0] = var1;
    arg1[1] = var2;
}
#endif
