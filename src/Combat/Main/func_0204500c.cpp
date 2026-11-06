#include <globaldefs.h>
#include <std_library_functions.h>
#include "GameState/GameState.h"
#include "Resource/MessageSystem.h"

#if defined(jpn)

extern "C" void func_02044f3c(void*, const char*, int);
extern "C" void func_0206cb14(void*, int, unsigned short);
extern "C" void func_0205e944(void*, int);
extern "C" void func_02041bbc(Struct_0204166c*);
extern "C" void func_02043270(void*, int, int, int, int);
extern "C" void func_02044d0c(void);
extern "C" void func_02044104(Struct_0204394c*);
extern "C" void func_020698d8(void*, int, const char*, char*);
extern "C" void func_02069ecc(Struct_0204500c_5*, const char*, char*);
extern "C" void func_0206c570(void*, const char*);
extern "C" unsigned char* func_020e1b24(void*);
extern "C" void func_020e1b2c(void*, int);
extern "C" int func_020e1f1c(void*);
extern "C" void func_020e2110(void*);
extern "C" void func_020e23f4(void*);
extern "C" void func_020e2478(int*);
extern "C" void func_020e2cc4(Struct_020439b0*, int);
extern "C" void ResetTextureVRAMState_0207df50(TextureVRAMArea_0203d028*);
extern int gSoundEffectManager_02108760;

#else

extern "C" void __clear(void* arg0, int arg1);
extern "C" void* memcpy(void* arg0, const void* arg1, unsigned int arg2);
extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);
extern "C" void* func_020e46c4(void*);
extern "C" void func_020dcf7c(int, void*);
extern "C" int GetStringLength_020d2ff0(const char*);
extern "C" void func_02044f3c(struct MessageWindow_02021b84* arg0, const char* arg1, int arg2);
extern "C" void func_0206b198(struct Struct_0204500c_4*, unsigned short);
extern "C" void func_0205e944(void* arg0, int arg1);
extern "C" void func_020416c0(struct Struct_0204166c*);
extern "C" void func_02042b98(struct MessageWindow_02021b84* arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_02042fcc(struct Struct_02042c68*);
extern "C" void func_02045824(struct Struct_02042c68_2*, int, int);
extern "C" void func_02044d0c(void);
extern "C" void func_0204394c(struct Struct_0204394c*);
extern "C" void func_0206831c(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2);
extern "C" void func_02068418(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2, int arg3);
extern "C" void func_02068f40(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2, int arg3);
extern "C" void func_02069234(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2, int arg3);
extern "C" void func_020695f4(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2, int arg3);
extern "C" void func_02069fec(struct MessageWindow_02021b84* arg0, const char* arg1, char* arg2);
extern "C" void func_0206a974(struct Struct_0204500c_3*, const char*, int);
extern "C" unsigned char* func_020e1b24(void*);
extern "C" void func_020e1b2c(void*, int);
extern "C" int func_020e1f1c(void*);
extern "C" void func_020e2110(void*);
extern "C" void func_020e23f4(void*);
extern "C" void func_020e2478(int*);
extern "C" void func_020e2cc4(struct Struct_020439b0*, int);
extern "C" void ResetTextureVRAMState_0207df50(struct TextureVRAMArea_0203d028*);

extern int gSoundEffectManager_02108760;

#endif

#if defined(jpn)
// USA: StartMessage_0204500c
extern "C" ARM void StartMessage_0204500c(MessageWindow_02021b84* window, const char* text, int arg2) {
    if (text == 0) return;
    for (int var0 = 0; var0 < 4; var0++) {
        window->unknown_177c_[var0] = -1;
        window->unknown_1952_[var0] = 0;
    }
    window->unknown_1784_ = 0;
    window->unknown_1957_ = 0;
    window->unknown_17ff_.unknown_0_4_ = 1;
    window->unknown_17ff_.unknown_0_3_ = 0;
    window->unknown_1958_ = 0;
    window->unknown_195b_ = 0;
    window->unknown_880_ = 0;
    window->unknown_1788_ = 12;
    if (window->unknown_9a0_ == 3) {
        func_02044f3c(window, text, arg2);
    } else {
        unsigned short var1 = window->unknown_1772_;
        unsigned short* var2 = window->unknown_1752_;
        for (unsigned short var3 = 0; var3 < var1; var3++) {
            func_0206cb14(window, 10, var2[var3]);
        }
        memset(window->unknown_1752_, 0xff01, sizeof(window->unknown_1752_));
        window->unknown_19c4_ = 0;
        window->unknown_19c3_ = 0;
        window->unknown_1772_ = 0;
        window->unknown_1774_ = 0;
        window->unknown_17f3_ = 1;
        window->unknown_17ff_.unknown_0_5_ = 0;
        window->unknown_17e0_ = 0;
        window->unknown_19bf_ = 1;
        window->unknown_17ff_.unknown_0_1_ = 1;
        window->unknown_1778_[0] = window->unknown_1778_[1] = window->unknown_1778_[2] = window->unknown_1778_[3] = 0x7f;
        func_0205e944(&gSoundEffectManager_02108760, 0x7f);
        memset(window->unknown_2cc_, 0, sizeof(window->unknown_2cc_));
        memset(window->unknown_14_, 0, 0x800);
        memset(window->unknown_4c_, 0, 0x140);
        memset(window->unknown_1c_, 0, 0x140);
        window->unknown_19bd_ = 1;
        window->unknown_9b4_ = 14;
        for (int var4 = 14; var4 < 0x80; ++var4) {
            func_02041bbc(&window->unknown_9b8_[var4]);
            window->unknown_17b8_[var4] = 0;
        }
        window->unknown_17eb_ = 1;
        window->unknown_1730_ = 0xc;
        window->unknown_1864_ = 0x10;
        window->unknown_174c_ = 0x7fff;
        window->unknown_9a4_ = 3;
        func_02043270(window, 2, 0x80, 0xfc, 0x3e);
        window->unknown_19b8_ = 0;
        window->unknown_19b1_ = 1;
        window->unknown_860_ = 0x80;
        window->unknown_1868_ = 0;
        window->unknown_912_ = 0;
        window->unknown_994_ = -1;
        window->unknown_94c_[0] = 0;
        window->unknown_94c_[1] = 0;
        window->unknown_94c_[2] = 0;
        window->unknown_94c_[3] = 0;
        window->unknown_19ac_ = 0;
        window->unknown_17dd_ = 0;
        window->unknown_1960_ = 0;

        for (int var5 = 0; var5 < 4; var5++) window->unknown_1868_ = 0;
        window->unknown_17f2_ = 0;
        window->unknown_19c0_ = 0;
        window->unknown_195d_ = 0x1e;
        window->unknown_19c1_ = 0;
        window->unknown_19c6_ = 0;
        window->unknown_19c7_ = 0;
        window->unknown_19c8_ = 0;
        window->unknown_19c9_ = 0;
        window->unknown_174e_ = 0;
        window->unknown_19cc_ = 0;
        window->unknown_17ff_.unknown_0_0_ = 0;
        window->unknown_19cd_ = 0;
        if (arg2 == 1) {
            window->unknown_19cc_ = 1;
        } else if (arg2 == 1) {

            window->unknown_17ff_.unknown_0_0_ = 1;
        }
        if (window->unknown_19cc_ != 0) {
            window->unknown_19cd_ = 1;
            window->unknown_40_ = 0;
            func_02044d0c();
        }
        if (window->unknown_17ff_.unknown_0_0_ != 0) {
            window->unknown_44_ = 0;
            func_02044104((Struct_0204394c*)window->unknown_1e28_);
        }
        func_020698d8(window, window->unknown_1788_, text, window->unknown_2c_);
        func_02069ecc((Struct_0204500c_5*)window, window->unknown_2c_, window->unknown_30_);
        func_0206c570(window, window->unknown_30_);
        func_02043270(window, 2, 0x74, 0xfc, 0x4a);
        window->unknown_1728_ = 2;
        window->unknown_172c_ = 0x7e;
        window->unknown_1730_ = 0xc;
        window->unknown_1864_ = 0x14;
        if (window->unknown_4_ != 0) {
            unsigned char* var6 = func_020e1b24(window->unknown_4_);
            if (var6 != 0) {
                var6[0x38] = 2;
                var6[0x39] = 0x74;
                var6[0x3a] = 0xfc;
                var6[0x3b] = 0x4a;
                func_020e1b2c(window->unknown_4_, -1);
                if (func_020e1f1c(window->unknown_4_) != 0) {
                    func_020e2110(window->unknown_4_);
                    func_020e23f4(window->unknown_4_);
                    func_020e2478((int*)window->unknown_4_);
                }
            }
        }
        memset(window->unknown_82c_, 0, sizeof(window->unknown_82c_));
        memset(window->unknown_84c_, 0, sizeof(window->unknown_84c_));
        window->unknown_994_ = -1;
        window->unknown_19bc_ = 0;
        window->unknown_9a0_ = 5;
        window->unknown_19b2_ = 1;
        window->unknown_99c_ = 0;
        window->unknown_19ae_ = 0;
        window->unknown_19af_ = 0;
        window->unknown_19b5_ = 0;
        window->unknown_19c5_ = 0;
        window->unknown_19ca_ = 1;
        window->unknown_19b4_ = 0;
        for (int var7 = 0; var7 < 2; var7++) {
            func_020e2cc4(&window->unknown_1964_[var7].unknown_0_, 0);
        }
        if (window->unknown_1e28_ != 0) ResetTextureVRAMState_0207df50(window->unknown_1e28_);
    }
}
#else
// USA: StartMessage_0204500c
extern "C" ARM void StartMessage_0204500c(struct MessageWindow_02021b84* window, const char* text, int arg2, int arg3) {
    GameState* var8 = GameState::GetInstance();

    short var9 = var8->unknown_7f58_;
    Struct_0204500c_2 var10;
    func_020e46c4(&var10);
    if (var9 > 0) {
        char var11[0x80] = {};
        char var12[0x80] = {};
        var10.unknown_0_ = var11;
        var10.unknown_4_ = var12;
        func_020dcf7c(var9, &var10);
        window->unknown_18_ = &var10;
    }
    window->unknown_19dc_ = 1;
    if (text == 0) {
        return;
    }

    int var13 = GetStringLength_020d2ff0(text);
    for (int var14 = 0; var14 < var13;) {
        int var15 = 0x40;
        char var16[0x43] = {};
        if (var13 < var14 + 0x40) {
            var15 = var13 - var14;
        }
        memcpy(var16, text + var14, var15);
        var14 += var15;
    }

    for (int var17 = 0; var17 < 4; var17++) {
        window->unknown_194e_[var17] = -1;
        window->unknown_1952_[var17] = 0;
    }
    window->unknown_1956_ = 0;
    window->unknown_1957_ = 0;
    window->unknown_19d2_ = 1;
    window->unknown_19d1_ = 0;
    window->unknown_1958_ = 0;
    window->unknown_195b_ = 0;
    window->unknown_9b0_ = 0;
    window->unknown_195a_ = 8;

    if (window->unknown_9a0_ == 3) {
        func_02044f3c(window, text, arg2);
    } else {
        unsigned short var18 = window->unknown_1942_;
        for (unsigned short var19 = 0; var19 < var18; var19++) {
            func_0206b198((struct Struct_0204500c_4*)window, window->unknown_1882_[var19]);
        }
        memset(window->unknown_1882_, 0xff01, sizeof(window->unknown_1882_));
        memset(window->unknown_1902_, 0, sizeof(window->unknown_1902_));
        window->unknown_19c4_ = 0;
        window->unknown_19c3_ = 0;
        window->unknown_1942_ = 0;
        window->unknown_1944_ = 0;
        window->unknown_1946_ = 0;
        window->unknown_19c2_ = 1;
        window->unknown_19d3_ = 0;
        window->unknown_19b0_ = 0;
        window->unknown_19bf_ = 1;
        window->unknown_19cf_ = 1;
        window->unknown_194a_[0] = window->unknown_194a_[1] = window->unknown_194a_[2] = window->unknown_194a_[3] = 0x7f;
        func_0205e944(&gSoundEffectManager_02108760, 0x7f);
        memset(window->unknown_2cc_, 0, sizeof(window->unknown_2cc_));
        memset(window->unknown_48_, 0, 0x960);
        memset(window->unknown_4c_, 0, 0x280);
        memset(window->unknown_50_, 0, 0x280);
        window->unknown_19bd_ = 1;
        window->unknown_9b4_ = 0;
        for (int var20 = 0; var20 < 0x80; ++var20) {
            func_020416c0(&window->unknown_9b8_[var20]);
            window->unknown_17b8_[var20] = 0;
        }
        window->unknown_19bb_ = 1;
        window->unknown_1860_ = 0xc;
        window->unknown_1864_ = 0x10;
        window->unknown_187c_ = 0x7fff;
        window->unknown_9a4_ = 3;
        func_02042b98(window, 2, 0x80, 0xfc, 0x3e);
        func_02042fcc(&window->unknown_930_);
        window->unknown_19b8_ = 0;
        window->unknown_19b1_ = 1;
        window->unknown_990_ = 0x80;
        window->unknown_1868_ = 0;
        window->unknown_912_ = 0;
        window->unknown_994_ = -1;
        window->unknown_94c_[0] = 0;
        window->unknown_94c_[1] = 0;
        window->unknown_94c_[2] = 0;
        window->unknown_94c_[3] = 0;
        window->unknown_19ac_ = 0;
        window->unknown_19ad_ = 0;
        window->unknown_1960_ = 0;
        func_02045824((struct Struct_02042c68_2*)window, 0, -1);
        window->unknown_19c0_ = 0;
        window->unknown_195d_ = 0x1e;
        window->unknown_19c1_ = 0;
        window->unknown_19c6_ = 0;
        window->unknown_19c7_ = 0;
        window->unknown_19c8_ = 0;
        window->unknown_19c9_ = 0;
        window->unknown_187e_ = 0;
        window->unknown_19cc_ = 0;
        window->unknown_19ce_ = 0;
        window->unknown_19cd_ = 0;
        if (arg2 == 1) {
            window->unknown_19cc_ = 1;
        } else if (arg2 == 1) {

            window->unknown_19ce_ = 1;
        }
        if (window->unknown_19cc_ != 0) {
            window->unknown_19cd_ = 1;
            window->unknown_40_ = 0;
            func_02044d0c();
        }
        if (window->unknown_19ce_ != 0) {
            window->unknown_44_ = 0;
            func_0204394c((struct Struct_0204394c*)window->unknown_1e28_);
        }
        char* var21 = window->unknown_60_;
        char* var22 = window->unknown_64_;
        func_0206831c(window, text, var21);
        func_02068418(window, var21, var22, window->unknown_19dc_);
        func_02068f40(window, var22, var21, window->unknown_19dc_);
        func_02069234(window, var21, var22, window->unknown_19dc_);
        func_020695f4(window, var22, var21, window->unknown_19dc_);
        func_02069fec(window, var21, var22);
        func_0206a974((struct Struct_0204500c_3*)window, var22, arg3);
        func_02042b98(window, 2, 0x74, 0xfc, 0x4a);
        window->unknown_1858_ = 2;
        window->unknown_185c_ = 0x7e;
        window->unknown_1860_ = 0xc;
        window->unknown_1864_ = 0x14;
        if (window->unknown_38_ != 0) {
            unsigned char* var23 = func_020e1b24(window->unknown_38_);
            if (var23 != 0) {
                var23[0x38] = 2;
                var23[0x39] = 0x74;
                var23[0x3a] = 0xfc;
                var23[0x3b] = 0x4a;
                func_020e1b2c(window->unknown_38_, -1);
                if (func_020e1f1c(window->unknown_38_) != 0) {
                    func_020e2110(window->unknown_38_);
                    func_020e23f4(window->unknown_38_);
                    func_020e2478((int*)window->unknown_38_);
                }
            }
        }
        memset(window->unknown_95c_, 0, sizeof(window->unknown_95c_));
        memset(window->unknown_97c_, 0, sizeof(window->unknown_97c_));
        window->unknown_994_ = -1;
        window->unknown_19bc_ = 0;
        window->unknown_9a0_ = 5;
        window->unknown_19b2_ = 1;
        window->unknown_99c_ = 0;
        window->unknown_19ae_ = 0;
        window->unknown_19af_ = 0;
        window->unknown_19b5_ = 0;
        window->unknown_19c5_ = 0;
        window->unknown_19ca_ = 1;
        window->unknown_19b4_ = 0;
        for (int var24 = 0; var24 < 2; var24++) {
            func_020e2cc4(&window->unknown_1964_[var24], 0);
        }
        if (window->unknown_1e28_ != 0) {
            ResetTextureVRAMState_0207df50(window->unknown_1e28_);
        }
    }
    window->unknown_30_ = -1;
    window->unknown_31_ = -1;
    if (var9 > 0) {
        var8->unknown_7f58_ = 0;
    }
}

#endif
