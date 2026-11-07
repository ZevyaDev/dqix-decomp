#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"
#include "Resource/CharacterCreationUI.h"

struct MenuLayout_0207fdcc_2;
struct MenuLayout_02080f8c;
struct Struct_ov006_02159fb0;
struct Struct_ov006_0215a00c;
#if defined(jpn)
struct Struct_ov006_0215a00c_2 { char unknown_0_[0x134]; char* unknown_134_; };
#else
struct Struct_ov006_0215a00c_2 { char unknown_0_[4]; short unknown_4_; };
#endif
struct Struct_0207d538 { int unknown_0_[3]; };

struct MessageWindow_020465c0 {
#if defined(jpn)
    char unknown_0_[0x28];
#else
    void* unknown_0_;
    char unknown_4_[0x14];
    void* unknown_18_;
    char unknown_1c_[0x40];
#endif
    char* unknown_5c_;
};

struct Struct_01ff8b48_23 { char unknown_0_[0x7c]; };
struct Struct_ov006_0215a00c_3 { char unknown_0_[5]; signed char unknown_5_0_:6; };

struct Struct_ov006_0215a00c_4 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0x78 - 0x50];
    short unknown_78_[3];
    short unknown_7e_;
    unsigned short unknown_80_;
    short unknown_82_;
    char unknown_84_[3];
    unsigned char unknown_87_;
    char unknown_88_[0x92 - 0x88];
    unsigned char unknown_92_;
    char unknown_93_[1];
    unsigned short unknown_94_;
    char unknown_96_[2];
};

struct Struct_ov006_0215a00c_5 {
#if defined(jpn)
    char unknown_4_[0xc];
#else
    int unknown_0_;
    char unknown_4_[0x10];
#endif
    void* unknown_14_;
    char unknown_18_[0x1c];
    int unknown_34_;
#if defined(jpn)
    char unknown_38_[0x11c];
#else
    char unknown_38_[0x158 - 0x38];
#endif
    struct Struct_0201099c_3 unknown_158_;
    char unknown_160_[0x170 - 0x160];
#if defined(jpn)
    struct Struct_0201099c_3 unknown_170_;
    char unknown_16c_[0x80];
#else
    struct Struct_01ff8b48_23 unknown_170_;
#endif
    short unknown_1ec_;
    char unknown_1ee_[0x300 - 0x1ee];
    struct Struct_ov006_0215a00c_4 unknown_300_;
    char unknown_398_[0x3b0 - 0x398];
    int unknown_3b0_;
};

extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2*, int);
extern "C" void OpenMenuLayoutWindow_020813ec(void*, int);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3*, int);
extern "C" struct MessageWindow_020465c0* GetMessageWindow_020421a0();
extern "C" void ClearMessageParams_02046380(struct MessageWindow_020465c0*);
extern "C" void* FindNounInTable_020e5294(void*, int);
extern "C" void SetMessageNumber_020465c0(struct MessageWindow_020465c0*, int, int);
extern "C" void InitPartyMemberNoun_020e4bf4(void*, int);
extern "C" void func_02046608(struct MessageWindow_020465c0*, int, const char*, char*, int, int, int);
extern "C" char* FindFontGlyph_0204254c(int, int);
extern "C" void __clear(void*, int);
extern "C" void SetMenuLayoutTextString_02080f8c(MenuLayout_02080f8c*, int, int);
extern "C" void func_ov006_02159fb0(struct Struct_ov006_02159fb0*);
extern char data_ov006_0215ffd2[];
extern char data_ov006_0215ffea[];
#if defined(jpn)
extern "C" void SetMessageString_02046574(struct MessageWindow_020465c0*, int, char*);
extern "C" void func_020474a8(struct MessageWindow_020465c0*, int, const char*, char*);
extern char data_ov006_021615c8[];
extern char data_ov006_021615cb[];
#endif

// USA: func_ov006_0215a00c
extern "C" ARM void func_ov006_0215a00c(struct Struct_ov006_0215a00c_5* arg0) {
    char var0[0x400];
    struct Struct_0207d538 var1;
    int var2;

    unsigned char var3 = arg0->unknown_300_.unknown_92_;
    if (var3 == 0) {
        if (arg0->unknown_300_.unknown_94_ & 0x20) {
            ShowMenuLayoutWindow_02080c20((struct MenuLayout_0207fdcc_2*)arg0->unknown_14_, 0);
            OpenMenuLayoutWindow_020813ec(arg0->unknown_14_, 0);
        }
        arg0->unknown_300_.unknown_94_ &= ~0x20;
        arg0->unknown_300_.unknown_80_ = 0;
        if (FindStringInTable_020e0434(&arg0->unknown_158_, arg0->unknown_300_.unknown_7e_) == 0) {
            arg0->unknown_300_.unknown_7e_ = -1;
        }
        arg0->unknown_3b0_ = -1;
        arg0->unknown_300_.unknown_92_ = arg0->unknown_300_.unknown_92_ + 1;
        return;
    }
    if (var3 == 1) {
        struct MessageWindow_020465c0* var4 = GetMessageWindow_020421a0();
        char* var5 = var4->unknown_5c_;
#if defined(jpn)
        memset(var5, 0, 0x800);
#else
        memset(var5, 0, 0x960);
#endif
        ClearMessageParams_02046380(var4);

        unsigned short var6 = 0;
        if (arg0->unknown_34_ != 0) {
#if defined(jpn)
            SetMessageString_02046574(var4, 0, (char*)FindStringInTable_020e0434(&arg0->unknown_170_, arg0->unknown_1ec_));
#else
            void* var7 = FindNounInTable_020e5294(&arg0->unknown_170_, arg0->unknown_1ec_);
            if (var7 != 0) {
                var4->unknown_18_ = var7;
            }
#endif
            var6 = (unsigned short)((arg0->unknown_300_.unknown_82_ / 10) * 10);
        }
        SetMessageNumber_020465c0(var4, 0, arg0->unknown_300_.unknown_87_);
        SetMessageNumber_020465c0(var4, 1, var6);

        struct Struct_ov006_0215a00c_2* var8 = (struct Struct_ov006_0215a00c_2*)((GameState*)((struct Struct_ov006_0215a00c*)GameState::GetInstance()))->GetUnknownGameObject();
        if (var8 != 0) {
#if defined(jpn)
            SetMessageString_02046574(var4, 1, var8->unknown_134_);
#else
            InitPartyMemberNoun_020e4bf4(&var1, var8->unknown_4_);
            var4->unknown_0_ = &var1;
#endif
        }

#if defined(jpn)
        SetMessageString_02046574(var4, 2, (char*)FindStringInTable_020e0434(&arg0->unknown_170_, arg0->unknown_300_.unknown_78_[0]));
        SetMessageString_02046574(var4, 3, (char*)FindStringInTable_020e0434(&arg0->unknown_170_, arg0->unknown_300_.unknown_78_[1]));
        SetMessageString_02046574(var4, 4, (char*)FindStringInTable_020e0434(&arg0->unknown_170_, arg0->unknown_300_.unknown_78_[2]));
#else
        short* var9 = (short*)data_ov006_0215ffd2;
        for (var2 = 0; ; var2++) {
            short var10 = *var9;
            if (var10 < 0) break;
            if (var10 == arg0->unknown_300_.unknown_7e_) {
                void* var11 = FindNounInTable_020e5294(&arg0->unknown_170_, arg0->unknown_300_.unknown_78_[var2]);
                if (var11 != 0) {
                    var4->unknown_18_ = var11;
                }
                break;
            }
            var9++;
        }
#endif

        const char* var12 = (const char*)FindStringInTable_020e0434(&arg0->unknown_158_, arg0->unknown_300_.unknown_7e_);
#if defined(jpn)
        func_020474a8(var4, 0xc, var12, var5);
#else
        func_02046608(var4, 0xc, var12, var5, 0xe3, 0, 1);
#endif

        char* var13 = var5 + arg0->unknown_300_.unknown_80_;
        unsigned short var14 = arg0->unknown_300_.unknown_80_;
#if defined(jpn)
        unsigned int var16 = arg0->unknown_300_.unknown_4c_;
        unsigned int var17;
        for (var17 = 0; var17 < var16; var17++) {
            if (*var13 == 0) break;
            unsigned short var24 = 0;
            if (*var13 == 0x5b) {
                int var25 = 0;
                int var26 = 0;
                while (*var13 != 0) {
                    if (*var13 == 0x2f) {
                        var13++;
                        var24++;
                        var25 = 1;
                        break;
                    }
                    unsigned char var27 = *(unsigned char*)var13;
                    if ((var27 >= 0x81 && var27 <= 0x9f) || (var27 >= 0xe0 && var27 <= 0xea)) {
                        var13++;
                        var24++;
                    }
                    var13++;
                    var24++;
                }
                if (var25) {
                    while (*var13 != 0) {
                        if (*var13 == 0x5d) {
                            var24++;
                            var26 = 1;
                            break;
                        }
                        unsigned char var28 = *(unsigned char*)var13;
                        if ((var28 >= 0x81 && var28 <= 0x9f) || (var28 >= 0xe0 && var28 <= 0xea)) {
                            var13++;
                            var24++;
                        }
                        var13++;
                        var24++;
                    }
                }
                if (var25 && var26) {
                    var14 += var24;
                    break;
                }
            }
            unsigned char var29 = *(unsigned char*)var13;
            if ((var29 >= 0x81 && var29 <= 0x9f) || (var29 >= 0xe0 && var29 <= 0xea)) {
                var13++;
                var14++;
            }
            var13++;
            var14++;
        }
#else
        int var15 = arg0->unknown_0_ >> 4;
        arg0->unknown_0_ += (arg0->unknown_300_.unknown_4c_ << 4);
        var2 = arg0->unknown_0_ >> 4;
        int var16 = var2 - var15;
        if (arg0->unknown_0_ >= 0xffffff) {
            arg0->unknown_0_ = 0;
        }

        int var17 = 0;
        int var18 = 1;
        while (var17 < var16) {
            signed char var19 = ((signed char*)var13)[0];
            if (var19 == 0) break;
            signed char var20 = 1;
            if (var19 == 0x5c && ((signed char*)var13)[1] == 0x6e) {
                var13 += 2;
                var14 += 2;
            } else {
                Struct_ov006_0215a00c_3* var21 = (Struct_ov006_0215a00c_3*)FindFontGlyph_0204254c((int)var13, 1);
                if (var21 != 0) {
                    var20 = var21->unknown_5_0_;
                }
                var13 += var20;
                var14 = (unsigned short)(var14 + var20);
            }
            var17++;
        }
#endif
        if (arg0->unknown_300_.unknown_80_ >= var14) {
            arg0->unknown_300_.unknown_7e_ = -1;
        }
        arg0->unknown_300_.unknown_80_ = var14;
        __clear(var0, 0x400);
        memcpy(var0, var5, var14);
        SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c*)arg0->unknown_14_, 1, (int)var0);
        OpenMenuLayoutWindow_020813ec(arg0->unknown_14_, 1);
        ShowMenuLayoutWindow_02080c20((struct MenuLayout_0207fdcc_2*)arg0->unknown_14_, 1);
#if defined(jpn)
        if (strstr(var0, data_ov006_021615c8) != 0) {
            arg0->unknown_3b0_ = 1;
        } else if (strstr(var0, data_ov006_021615cb) != 0) {
            arg0->unknown_3b0_ = -1;
        }
#else
        arg0->unknown_3b0_ = 1;

        short* var22 = (short*)data_ov006_0215ffea;
        for (;;) {
            short var23 = *var22;
            if (var23 < 0) break;
            if (var23 == arg0->unknown_300_.unknown_7e_) {
                arg0->unknown_3b0_ = -1;
                break;
            }
            var22++;
        }
#endif
        func_ov006_02159fb0((struct Struct_ov006_02159fb0*)arg0);
    }
}
