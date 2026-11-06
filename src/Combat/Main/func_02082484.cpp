#include <globaldefs.h>
#include "std_library_functions.h"

#if defined(jpn)

struct Struct_02082484 {
    struct StringList_02072a68_2* unknown_0_;
    char unknown_4_[0x18 - 0x4];
    void* unknown_18_;
};

struct Struct_02082484_2 {
    char unknown_0_[0xb4];
    unsigned short unknown_b4_;
    unsigned short unknown_b6_;
};

struct Struct_02082484_3 {
    float unknown_0_;
    char unknown_4_[0x6 - 0x4];
    short unknown_6_;
    short unknown_8_;
    short unknown_a_;
    short unknown_c_;
    short unknown_e_;
    short unknown_10_;
    char unknown_12_[0x13 - 0x12];
    unsigned char unknown_13_0_ : 4;
    unsigned char unknown_13_4_ : 4;
    unsigned char unknown_14_0_ : 2;
    unsigned char unknown_14_2_ : 6;
    char unknown_15_[0x28 - 0x15];
    short unknown_28_;
    unsigned char unknown_2a_;
};

struct MessageWindow_020465c0;

extern "C" int GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(int window);
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0* window, int index, int number);
extern "C" void func_020465d8(unsigned char*, int, unsigned char);
extern "C" void func_020465f0(unsigned char*, int, unsigned char);
extern "C" void func_020474a8(int arg0, int arg1, char* arg2, void* arg3);
extern "C" void func_02050678(void* arg0, short arg1, int arg2, void* arg3, int arg4, int arg5, short* arg6, short* arg7);
extern "C" void __clear(void* arg0, int arg1);

extern char data_020f1108[];
extern char data_020f1110[];
extern char data_020f1113[];

// JPN: func_02082484
extern "C" ARM void func_02082484(struct Struct_02082484* arg0, struct Struct_02082484_2* arg1, struct Struct_02082484_3* arg2) {
    int var0 = arg2->unknown_13_4_;
    if (arg2->unknown_2a_ & 0x4) {
        var0 = 5;
    }

    int var1 = (int)(100.0f * arg2->unknown_0_) / 100;
    int var2 = GetMessageWindow_020421a0();
    memset(arg0->unknown_18_, 0, 0x800);
    ClearMessageParams_02046380(var2);
    SetMessageNumber_020465c0((struct MessageWindow_020465c0*)var2, 0, var1);
    func_020465d8((unsigned char*)var2, 0, arg2->unknown_14_0_);
    func_020465f0((unsigned char*)var2, 0, arg2->unknown_14_2_);
    func_020474a8(var2, arg2->unknown_13_0_, data_020f1108, arg0->unknown_18_);

    int var3 = arg2->unknown_13_0_;
    arg1->unknown_b4_ = var3;
    arg1->unknown_b6_ = var3 + 1;

    func_02050678(arg1, (short)(arg2->unknown_6_ + arg2->unknown_28_), arg2->unknown_8_, arg0->unknown_18_,
                  arg2->unknown_13_0_, var0, &arg2->unknown_a_, &arg2->unknown_c_);

    short var4 = arg2->unknown_6_ + arg2->unknown_28_ + arg2->unknown_a_;
    func_02050678(arg1, var4, arg2->unknown_8_, data_020f1110, arg2->unknown_13_0_, var0, &arg2->unknown_a_,
                  &arg2->unknown_c_);
    var4 = var4 + 3;

    float var5 = arg2->unknown_0_ - (float)var1;
    short var6 = arg2->unknown_10_;
    do {
        var5 *= 10;
        int var7 = (int)(100.0f * var5) / 100 % 10;
        char var8[2];
        __clear(var8, 2);
        sprintf(var8, data_020f1113, var7);
        func_02050678(arg1, var4, arg2->unknown_8_, var8, arg2->unknown_13_0_, var0, &arg2->unknown_a_,
                      &arg2->unknown_c_);
        var4 = var4 + arg2->unknown_c_;
        var6 = var6 - 1;
    } while (var6 > 0);
}

#endif
