#include <globaldefs.h>

#if defined(jpn)
struct Struct_ov023_021fc9ec_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
};
struct Struct_ov023_021fc9ec_3 {
    unsigned char unknown_0_[3];
};
struct Struct_ov023_021fc9ec {
    Struct_ov023_021fc9ec_2 unknown_0_;
    Struct_ov023_021fc9ec_2 unknown_2_;
    Struct_ov023_021fc9ec_3 unknown_4_;
    Struct_ov023_021fc9ec_3 unknown_7_;
    Struct_ov023_021fc9ec_3 unknown_a_;
    Struct_ov023_021fc9ec_3 unknown_d_;
};
extern const Struct_ov023_021fc9ec data_ov023_021fc9ec;

// JPN: func_ov023_021e68d8
extern "C" ARM void func_ov023_021e68d8(int arg0, unsigned char* arg1) {
    int var4;
    int var5;
    unsigned char var0;
    unsigned char var1;
    var0 = arg1[0];
    var1 = arg1[1];
    if (var0 == 0x83 && var1 == 0x45) {
        var1 = 0x94;
    } else if (var0 == 0x82 && var1 >= 0x9f && var1 <= 0xf1) {
        Struct_ov023_021fc9ec_3 var2 = data_ov023_021fc9ec.unknown_a_;
        Struct_ov023_021fc9ec_3 var3 = data_ov023_021fc9ec.unknown_7_;
        for (var4 = 0; var4 < 3; var4++) {
            if (var2.unknown_0_[var4] <= var1 && var1 <= var3.unknown_0_[var4]) {
                switch (var4) {
                case 0:
                    var1 -= 1;
                    var1 >>= 1;
                    var1 <<= 1;
                    var1 += 2;
                    break;
                case 1:
                    var1 >>= 1;
                    var1 <<= 1;
                    var1 += 1;
                    break;
                case 2:
                    var1 -= 1;
                    var1 -= var1 % 3;
                    var1 += 2;
                    break;
                }
                break;
            }
        }
    } else if (var0 == 0x83 && var1 >= 0x40 && var1 <= 0x96) {
        Struct_ov023_021fc9ec_3 var2 = data_ov023_021fc9ec.unknown_d_;
        Struct_ov023_021fc9ec_3 var3 = data_ov023_021fc9ec.unknown_4_;
        for (var5 = 0; var5 < 3; var5++) {
            if (var2.unknown_0_[var5] <= var1 && var1 <= var3.unknown_0_[var5]) {
                switch (var5) {
                case 0:
                    var1 >>= 1;
                    var1 <<= 1;
                    var1 += 1;
                    break;
                case 1:
                    var1 -= 1;
                    var1 >>= 1;
                    var1 <<= 1;
                    var1 += 2;
                    break;
                case 2:
                    var1 -= 2;
                    var1 -= var1 % 3;
                    var1 += 3;
                    break;
                }
            }
        }
    } else {
        return;
    }
    arg1[0] = var0;
    arg1[1] = var1;
}
#endif
