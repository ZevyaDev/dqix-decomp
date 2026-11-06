#include <globaldefs.h>

struct Struct_0201099c_3;
struct TextWindowManager_0205de24_2;
struct BGLayer_02020cb8_5;

extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(void* wireless);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_020420e8(char* arg0, int arg1);
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char arg1, unsigned char bgIndex);
extern "C" char* GetMessageWindow_020421a0(void);
extern "C" int SetBGScroll_0204b5e8(struct BGLayer_02020cb8_5* layer, int scrollX, int scrollY);
extern "C" void memset(void* arg0, int arg1, int arg2);
extern "C" void func_ov003_0215e13c(char* arg0, char* arg1, int arg2);
#if defined(jpn)
extern "C" void OpenTextWindow_0205d304(void* windowManager, char* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins);
#else
extern "C" void OpenTextWindow_0205d304(void* windowManager, void* text, int arg2, int isVerticallyCentered, int hasPageArrows, int isSizedToText, int margins, int font);
#endif

struct Struct_ov003_0215df1c {
#if defined(jpn)
    char unknown_0_[0x64 + 0x18];
#else
    char unknown1_0_[0x64];
#endif
    char unknown_64_[0x7c - 0x64];
    char* unknown_7c_;
    char unknown_80_[0x98 - 0x80];
    char unknown_98_[0x138 - 0x98];
    short unknown_138_;
    short unknown_13a_;
    short unknown_13c_;
    short unknown_13e_;
    short unknown_140_;
    short unknown_142_;
    short unknown_144_;
    short unknown_146_;
    char unknown_148_;
    unsigned char unknown_149_;
    char unknown_14a_[3];
    unsigned char unknown_14d_;
    char unknown_14e_;
    unsigned char unknown_14f_;
    char unknown_150_[4];
    char unknown_154_[2][0x20];
    char unknown_194_[0x3bd - 0x194];
    unsigned char unknown_3bd_[3];
    unsigned char unknown_3c0_;
    signed char unknown_3c1_;
    char unknown_3c2_[0x3d0 - 0x3c2];
    int unknown_3d0_;
    char unknown_3d4_[0x3f2 - 0x3d4];
    unsigned char unknown_3f2_;
};

// USA: func_ov003_0215df1c
extern "C" ARM void func_ov003_0215df1c(struct Struct_ov003_0215df1c* arg0) {
    void* var0 = GetLocalWireless_0202ae18();
    arg0->unknown_3c0_ = 3;
    arg0->unknown_3bd_[0] = 0;
    arg0->unknown_3bd_[1] = 1;
    arg0->unknown_3bd_[2] = 2;
    if (IsLocalWirelessGuest_0202c540(var0)) {
        arg0->unknown_3c0_ = 2;
        arg0->unknown_3bd_[0] = 1;
        arg0->unknown_3bd_[1] = 2;
        arg0->unknown_3bd_[2] = 0xff;
    } else if (arg0->unknown_3d0_ == 0) {
        arg0->unknown_3c0_ = 2;
        arg0->unknown_3bd_[0] = 0;
        arg0->unknown_3bd_[1] = 2;
        arg0->unknown_3bd_[2] = 0xff;
    }

    short var1 = (arg0->unknown_3c0_ * 14 + 0x12) / 8;
#if defined(jpn)
    short var5 = 7;
#else
    int var2 = 0;
    for (int var3 = 0; var3 < arg0->unknown_3c0_; var3++) {
        short var4 = func_020420e8((char*)FindStringInTable_020e0434((struct Struct_0201099c_3*)arg0->unknown_64_, arg0->unknown_3bd_[var3]), 0);
        if (var2 < var4) {
            var2 = var4;
        }
    }
    short var5 = (var2 + 0x18) >> 3;
#endif

    SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)arg0->unknown_98_, 0, 2);
    arg0->unknown_138_ = var5;
    arg0->unknown_13a_ = var1;
    arg0->unknown_13c_ = 0x1f - var5;
    arg0->unknown_13e_ = 2;
    arg0->unknown_140_ = 0xc;
    arg0->unknown_142_ = 8;
    arg0->unknown_144_ = 0xa;
    arg0->unknown_146_ = 0xe;
    arg0->unknown_14f_ = 0xa;
    arg0->unknown_149_ = 1;
    arg0->unknown_14d_ = 1;

    if (arg0->unknown_3f2_) {
#if defined(jpn)
        short var6 = *(short*)(GetMessageWindow_020421a0() + 0x7e6);
#else
        short var6 = *(short*)(GetMessageWindow_020421a0() + 0x916);
#endif
        short var7 = var6 / 8;
        short var8 = var6 % 8;
        arg0->unknown_13c_ = 0x20 - var5;
        arg0->unknown_13e_ = var7 - var1;
        for (int var9 = 0; var9 < 2; var9++) {
            SetBGScroll_0204b5e8((struct BGLayer_02020cb8_5*)arg0->unknown_154_[var9], 2, -var8);
        }
    }

    arg0->unknown_3c1_ = 0;
#if defined(jpn)
    memset(arg0->unknown_7c_, 0, 0x800);
#else
    memset(arg0->unknown_7c_, 0, 0x960);
#endif
    func_ov003_0215e13c((char*)arg0, arg0->unknown_7c_, 0);
#if defined(jpn)
    OpenTextWindow_0205d304(arg0->unknown_98_, arg0->unknown_7c_, 0, 1, 0, 1, 0);
#else
    OpenTextWindow_0205d304(arg0->unknown_98_, arg0->unknown_7c_, 0, 1, 0, 1, 0, 0);
#endif
}
