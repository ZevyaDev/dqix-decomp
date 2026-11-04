#include <globaldefs.h>

struct Struct_ov004_02165f2c {
    unsigned short unknown_0_;
    unsigned short unknown_2_0_ : 2;
    unsigned short unknown_2_2_ : 1;
    unsigned short unknown_2_3_ : 13;
    unsigned int unknown_4_;
    struct Struct_ov004_02165f2c* unknown_8_;
};

struct Struct_ov004_0217101c {
    struct Struct_ov004_02165f2c* unknown_0_[2];
    struct Struct_ov004_02165f2c* unknown_8_;
    char unknown_c_[0x48 - 0xc];
    short unknown_48_[2];
    short unknown_4c_;
    char unknown_4e_[2];
    unsigned char unknown_50_0_ : 6;
    unsigned char unknown_50_6_ : 1;
    unsigned char unknown_50_7_ : 1;
};

extern "C" void func_ov023_021f65b4(void*, void*, short, short);
struct Struct_ov004_0217101c_2 {
#if defined(jpn)
    void** unknown_0_;
    struct Struct_ov004_0217101c* unknown1_0_;
#else
    struct Struct_ov004_0217101c* unknown1_0_;
    void** unknown_4_;
#endif
    struct Struct_ov004_0217101c* inline_ov004_02165f2c() { return unknown1_0_; }
};
extern struct Struct_ov004_0217101c_2 data_ov004_0217101c;

#if defined(jpn)
static const short data_ov004_021706f8[2] = {8, 6};
#else
static const short data_ov004_0216ff98[3] = {6, 8, 10};
#endif

// USA: func_ov004_02165ef4
extern "C" ARM void func_ov004_02165ef4(void* arg0) {
    short var0 = data_ov004_0217101c.inline_ov004_02165f2c()->unknown_4c_;
    short var1 = (var0 + 7) / 8;
    func_ov023_021f65b4(arg0, (void*)0x5b, 0, var1);
}

// USA: func_ov004_02165f2c
extern "C" ARM void func_ov004_02165f2c(void) {
    struct Struct_ov004_0217101c* var0 = data_ov004_0217101c.inline_ov004_02165f2c();
    struct Struct_ov004_02165f2c* var1;
    struct Struct_ov004_02165f2c* var2;
    struct Struct_ov004_02165f2c* var3;
    short var4;
    unsigned char* var5;
    short var6;
    if (var0->unknown_50_7_ == 1) {
        var2 = var0->unknown_8_ = var0->unknown_0_[0];
        var0->unknown_4c_ = var0->unknown_48_[0];
        var4 = var0->unknown_48_[0];
        var3 = 0;
        {
            unsigned char var7[] = {2, 3, 0xff};
            unsigned char var8[] = {1, 2, 3, 0xff};
            var5 = var7;
            if (var0->unknown_50_6_ == 1) {
                var2 = var0->unknown_0_[1];
                var5 = var8;
                var0->unknown_8_ = var2;
                var0->unknown_4c_ = var0->unknown_48_[1];
                var4 = var0->unknown_48_[1];
            }
            for (; *var5 != 0xff; var5++) {
                unsigned char var9 = *var5;
                var1 = var2;
                for (var6 = 0; var6 < var4; var6++) {
                    if (var1->unknown_8_ == 0) {
                        if (var1->unknown_2_2_ && var9 == 1) {
                            if (var1->unknown_2_0_ == 0 || var1->unknown_2_0_ == var9) {
                                if (var3 != 0)
                                    var3->unknown_8_ = var1;
                                else
                                    var0->unknown_8_ = var1;
                                var3 = var1;
                            }
                        } else if (var9 == var1->unknown_2_0_) {
                            if (var3 != 0)
                                var3->unknown_8_ = var1;
                            else
                                var0->unknown_8_ = var1;
                            var3 = var1;
                        }
                    }
                    var1++;
                }
            }
        }
    } else if (var0->unknown_50_7_ == 0) {
        short var10;
        short var11;
        var1 = var0->unknown_0_[0];
        var0->unknown_8_ = var1;
        var0->unknown_4c_ = var0->unknown_48_[0];
        var10 = var0->unknown_48_[0];
        if (var0->unknown_50_6_ == 1) {
            var1 = var0->unknown_0_[1];
            var0->unknown_8_ = var1;
            var0->unknown_4c_ = var0->unknown_48_[1];
            var10 = var0->unknown_48_[1];
        }
        for (var11 = 0; var11 < var10 - 1; var11++) {
            var1->unknown_8_ = var1 + 1;
            var1 = var1 + 1;
        }
    }
}
