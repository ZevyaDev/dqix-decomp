#include <globaldefs.h>
#if defined(jpn)

struct Struct_02072a68_2;
struct Struct_02081f70 {
    Struct_02072a68_2* unknown_0_;
};
struct Struct_02081f70_2 {
    char unknown_0_[0xa8];
    short unknown_a8_;
    char unknown_aa_[0xa];
    short unknown_b4_;
    short unknown_b6_;
};
struct Struct_02081f70_3 {
    char* unknown_0_;
    short unknown_4_;
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    unsigned char unknown_12_;
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    char unknown_14_[0x14];
    short unknown_28_;
    unsigned char unknown_2a_;
};

extern "C" void* func_02072a68(Struct_02072a68_2* arg0, int arg1);
extern "C" int func_020d2ff0(const char* arg0);
extern "C" void func_02050678(Struct_02081f70_2* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);

// JPN: func_02081f70
extern "C" ARM void func_02081f70(Struct_02081f70* arg0, Struct_02081f70_2* arg1, Struct_02081f70_3* arg2) {
    int var0 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 4) var0 = 5;
    if (arg2->unknown_2a_ & 8) {
        char* var1 = (char*)func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
        if (var1) {
            short var2 = arg1->unknown_a8_ * 8;
            int var3 = func_020d2ff0(var1) >> 1;
            arg2->unknown_6_ = (short)(var2 - var3 * arg2->unknown_13_0_) >> 1;
        }
    }
    int var4 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var4;
    arg1->unknown_b6_ = var4 + 1;
    if (arg2->unknown_2a_ & 0x10) {
        int var5 = arg2->unknown_13_0_;
        if (var5 == 12) {
            arg1->unknown_b4_ = var5;
            arg1->unknown_b6_ = 20;
        }
    }
    void* var6 = func_02072a68(arg0->unknown_0_, arg2->unknown_e_);
    func_02050678(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_), arg2->unknown_8_,
        var6, arg2->unknown_13_0_, var0, &arg2->unknown_a_, &arg2->unknown_c_);
}
#endif
