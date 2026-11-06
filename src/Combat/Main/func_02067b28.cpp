#include <globaldefs.h>
#include <std_library_functions.h>

#if defined(jpn)
struct Struct_02045c00_2;
struct Struct_02067b28 {
    char unknown_0_[0x18];
    unsigned short* unknown_4c_;
    unsigned short* unknown_50_;
    void* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[0x10];
    unsigned int unknown_6c_;
    unsigned int unknown_70_;
    char unknown_74_[0x7c4];
    short unknown_934_, unknown_936_;
    char unknown_938_[0x7c];
    unsigned int unknown_9b4_;
    char unknown_9b8_[0xe00];
    unsigned char unknown_17b8_[0x80];
    char unknown_1838_[0x4a];
    unsigned short unknown_1882_[16];
    unsigned short unknown_1942_;
    short unknown_1946_;
    char unknown_1948_[0x12];
    unsigned char unknown_19dc_;
    char unknown_1789_[0x69];
    unsigned char unknown_17f2_;
    unsigned char unknown_19c2_;
    unsigned char unknown_19c3_;
    unsigned char unknown_19c4_;
};
extern "C" int func_02069430(void*, unsigned short);
extern "C" int func_02069444(void*, unsigned short);
extern "C" int func_02043014(int, unsigned short*);
extern "C" int func_02045c00(Struct_02045c00_2*, const char*, int);
extern "C" int func_02046530(void*, unsigned short*, int, int);
extern "C" int CompareBytes_02001aec(const void*, const void*, int);
extern const char data_020f07ce[];

extern "C" ARM void func_02067b28(Struct_02067b28* arg0) {
    if (!arg0->unknown_54_ | !arg0->unknown_58_) return;
    if (arg0->unknown_70_ <= arg0->unknown_6c_) return;
    char var0[3] = {0};
    while (arg0->unknown_6c_ < arg0->unknown_70_) {
        unsigned short var1;
        unsigned short* var2;
        unsigned short* var3;
        int var4;
        var2 = arg0->unknown_50_ + arg0->unknown_6c_;
        var1 = *var2;
        var4 = arg0->unknown_19dc_;
        var3 = arg0->unknown_4c_ + arg0->unknown_6c_;
        if (func_02069430(arg0, var1)) {
            if (var1 == 0xff37) arg0->unknown_17f2_ = 1;
            else if (var1 == 0xff38) arg0->unknown_17f2_ = 0;
            *var3 = var1;
            ++arg0->unknown_6c_;
            int var5 = func_02069444(arg0, var1);
            memcpy(var3 + 1, var2 + 1, var5 * 2);
            arg0->unknown_6c_ += var5;
            continue;
        }
        memcpy(var0, var2, 2);
        if (!arg0->unknown_19c2_) {
            arg0->unknown_19c4_ = 1;
            if (arg0->unknown_1946_ <= 0) arg0->unknown_19c4_ = 0;
            var4 = 10;
            if (!CompareBytes_02001aec(var0, data_020f07ce, 2)) {
                if (arg0->unknown_1942_ == 0) arg0->unknown_19c4_ = 0;
                else {
                    int var6 = arg0->unknown_1942_ * var4;
                    arg0->unknown_934_ = (short)(8 - (var6 & 7)) + (var6 + 18);
                    arg0->unknown_936_ = 22;
                }
                arg0->unknown_19c3_ = 1;
                arg0->unknown_19c2_ = 1;
                var4 = arg0->unknown_19dc_;
            }
        }
        if (arg0->unknown_17f2_) var4 = 6;
        int var7 = func_02043014(var4, (unsigned short*)var0);
        if (var7 >= 0) {
            int var8 = func_02045c00((Struct_02045c00_2*)arg0, var0, var4);
            if (var8 < 0) {
                unsigned short var9 = func_02046530(arg0, (unsigned short*)var0, var7, var4);
                if (!arg0->unknown_19c2_) arg0->unknown_1882_[arg0->unknown_1942_] = var9;
                *var3 = var9;
                ++arg0->unknown_6c_;
                arg0->unknown_9b4_ = (arg0->unknown_9b4_ + 1) & 0x7f;
                break;
            }
            unsigned short var10 = var8;
            if (!arg0->unknown_19c2_) {
                arg0->unknown_1882_[arg0->unknown_1942_] = var10;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0xf;
            }
            *var3 = var10;
            if (arg0->unknown_17b8_[var10] < 255) ++arg0->unknown_17b8_[var10];
        } else {
            if (!arg0->unknown_19c2_) {
                arg0->unknown_1882_[arg0->unknown_1942_] = 0xff19;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0xf;
            }
            *var3 = 0xff19;
        }
        ++arg0->unknown_6c_;
    }
    if (!arg0->unknown_19c2_) {
        ++arg0->unknown_1942_;
        arg0->unknown_1942_ &= 0xf;
    }
}
#else
struct FontGlyph_0204254c {
    int unknown_0_;
    char unknown_4_;
    signed char codeLength_5_0_ : 6;
    signed char unknown_5_6_ : 2;
    char unknown_6_[2];
};
struct Struct_02045c00_2;
struct Struct_02067b28 {
    char unknown_0_[0x4c];
    unsigned short* unknown_4c_;
    char* unknown_50_;
    void* unknown_54_;
    void* unknown_58_;
    char unknown_5c_[0x10];
    unsigned int unknown_6c_;
    unsigned int unknown_70_;
    char unknown_74_[8];
    unsigned int unknown_7c_;
    char unknown_80_[0x8b4];
    short unknown_934_, unknown_936_;
    char unknown_938_[0x7c];
    unsigned int unknown_9b4_;
    char unknown_9b8_[0xe00];
    unsigned char unknown_17b8_[0x80];
    char unknown_1838_[0x4a];
    unsigned short unknown_1882_[64];
    char unknown_1902_[0x40];
    unsigned short unknown_1942_;
    short unknown_1944_;
    short unknown_1946_;
    char unknown_1948_[0x7a];
    unsigned char unknown_19c2_;
    unsigned char unknown_19c3_;
    unsigned char unknown_19c4_;
    char unknown_19c5_[0x17];
    unsigned char unknown_19dc_;
};
extern "C" int func_02044494(void*, void*);
extern "C" int func_02044420(void*, void*);
extern "C" FontGlyph_0204254c* func_0204254c(int, int);
extern "C" int func_020424e4(int, int);
extern "C" int func_02045c00(Struct_02045c00_2*, int);
extern "C" int func_020459b8(Struct_02067b28*, unsigned char, FontGlyph_0204254c*, unsigned char);
extern "C" int CompareBytes_02001aec(const void*, const void*, int);
extern char data_020f08dc[3];

// USA: func_02067b28
extern "C" ARM void func_02067b28(Struct_02067b28* arg0) {
    if (!arg0->unknown_54_ || !arg0->unknown_58_) return;
    if (arg0->unknown_70_ <= arg0->unknown_6c_) return;
    while (arg0->unknown_6c_ < arg0->unknown_70_) {
        char* var0 = arg0->unknown_50_ + arg0->unknown_7c_;
        unsigned short* var1 = arg0->unknown_4c_ + arg0->unknown_6c_;
        unsigned short var2;
        memcpy(&var2, var0, 2);
        if (func_02044494(arg0, &var2)) {
            *var1 = var2;
            arg0->unknown_7c_ += 2;
            ++arg0->unknown_6c_;
            int var3 = func_02044420(arg0, &var2);
            memcpy(var1 + 1, var0 + 2, var3 * 2);
            arg0->unknown_7c_ += var3 * 2;
            arg0->unknown_6c_ += var3;
            continue;
        }
        if (!arg0->unknown_19c2_) {
            arg0->unknown_19c4_ = 1;
            if (arg0->unknown_1946_ <= 0) arg0->unknown_19c4_ = 0;
            if (!CompareBytes_02001aec(var0, data_020f08dc, 2)) {
                if (arg0->unknown_1942_ == 0) arg0->unknown_19c4_ = 0;
                else {
                    arg0->unknown_934_ = arg0->unknown_1944_ + 18 + (short)(8 - (arg0->unknown_1944_ & 7));
                    arg0->unknown_936_ = 22;
                    arg0->unknown_19c2_ = 1;
                }
                arg0->unknown_19c3_ = 1;
            }
        }
        FontGlyph_0204254c* var4 = func_0204254c((int)var0, arg0->unknown_19dc_);
        int var5 = func_020424e4((int)var0, arg0->unknown_19dc_);
        if (var4 && var5 >= 0) {
            int var6 = func_02045c00((Struct_02045c00_2*)arg0, (int)var4);
            arg0->unknown_7c_ += var4->codeLength_5_0_;
            if (var6 < 0) {
                unsigned short var7 = func_020459b8(arg0, (unsigned char)var5, var4, arg0->unknown_19dc_);
                if (!arg0->unknown_19c2_) arg0->unknown_1882_[arg0->unknown_1942_] = var7;
                *var1 = var7;
                ++arg0->unknown_6c_;
                arg0->unknown_9b4_ = (arg0->unknown_9b4_ + 1) & 0x7f;
                break;
            }
            unsigned short var8 = var6;
            if (!arg0->unknown_19c2_) {
                arg0->unknown_1882_[arg0->unknown_1942_] = var8;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0x3f;
            }
            *var1 = var8;
            if (arg0->unknown_17b8_[var8] < 255) ++arg0->unknown_17b8_[var8];
        } else {
            signed char var9 = *var0;
            if (!arg0->unknown_19c2_ && var9 == 32) {
                arg0->unknown_1882_[arg0->unknown_1942_] = 0xff19;
                ++arg0->unknown_1942_;
                arg0->unknown_1942_ &= 0x3f;
            }
            *var1 = 0xff19;
            ++arg0->unknown_7c_;
        }
        ++arg0->unknown_6c_;
    }
    if (!arg0->unknown_19c2_) {
        ++arg0->unknown_1942_;
        arg0->unknown_1942_ &= 0x3f;
    }
}
#endif
