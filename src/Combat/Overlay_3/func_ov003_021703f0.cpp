#include <globaldefs.h>

struct TextWindow_0205d0e0 {
    char unknown_0_[0xac];
    short tileX_ac_;
    short tileY_ae_;
};

struct TextWindowManager_0205d81c;
extern "C" struct TextWindow_0205d0e0* FindTextWindow_0205d81c(struct TextWindowManager_0205d81c* windowManager, int windowId);
extern "C" int IsTextWindowOpen_0204c7e0(unsigned char* textWindow);

struct Struct_0204c610;
extern "C" void func_0204c610(struct Struct_0204c610* arg0, int arg1, short* arg2, short* arg3, short* arg4, short* arg5);

struct Struct_ov003_021703f0 {
    char unknown_0_[1];
    signed char unknown_1_;
    char unknown_2_[4];
    signed char unknown_6_;
    char unknown_7_;
    signed char unknown_8_;
    char unknown_9_[0x3c - 0x9];
    struct TextWindowManager_0205d81c* unknown_3c_;
    char unknown_40_[4];
    unsigned char* unknown_44_;
};

// USA: func_ov003_021703f0
extern "C" ARM void func_ov003_021703f0(struct Struct_ov003_021703f0* arg0, short* arg1, short* arg2) {
    if (arg0->unknown_1_ == 5) {
        if (arg0->unknown_44_ != 0 && IsTextWindowOpen_0204c7e0(arg0->unknown_44_) != 0) {
#if defined(jpn)
            *arg1 = 0x2c;
            *arg2 = arg0->unknown_8_ * 17 + 0x3a;
#else
            struct TextWindow_0205d0e0* var0 = FindTextWindow_0205d81c(arg0->unknown_3c_, 0);
            if (var0 == 0) return;
            short var1 = var0->tileX_ac_ << 3;
            short var2 = var0->tileY_ae_ << 3;
            short var3, var4, var5, var6;
            func_0204c610((struct Struct_0204c610*)var0, arg0->unknown_8_, &var3, &var4, &var5, &var6);
            int var7 = var3;
            int var8 = var4;
            var7 = (short)(var7 + var1);
            var8 = (short)(var8 + var2);
            *arg1 = var7 - 0x10;
            *arg2 = var8 - 2;
#endif
        } else {
            *arg1 = 0;
            *arg2 = 0;
        }
    } else if (arg0->unknown_1_ == 4 || arg0->unknown_1_ == 2) {
        *arg1 = 4;
        *arg2 = arg0->unknown_6_ * 16 + 0x2b;
    } else {
        *arg1 = 0;
        *arg2 = 0;
    }
}
