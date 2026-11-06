#if defined(jpn)
#define R(j,u) (j)
#define func_ov012_02185bf0 func_ov012_02186248
#define func_ov012_0218943c func_ov012_02189d18
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_ov012_02187320
{
    char unknown_0_[R(0x868,0x998)];
    int unknown_998_;
    int unknown_99c_;
    int unknown_9a0_;
    char unknown_9a4_[R(0x17de,0x19ae) - R(0x874,0x9a4)];
    unsigned char unknown_19ae_;
};

struct Struct_ov012_02187320_2
{
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

struct Struct_ov012_02187320_3
{
    char unknown_0_[R(0x90,0xac)];
    char unknown_ac_[R(0x1314,0x133c) - R(0x90,0xac)];
    char unknown_133c_[R(0x1340,0x1370) - R(0x1314,0x133c)];
    unsigned char unknown_1370_;
    unsigned char unknown_1371_;
    char unknown_1372_[R(0x1368,0x13a0) - R(0x1342,0x1372)];
    unsigned char unknown_13a0_;
    char unknown_13a1_[R(0x1370,0x13a8) - R(0x1369,0x13a1)];
    signed char unknown_13a8_;
    signed char unknown_13a9_;
    char unknown_13aa_[R(0x1450,0x13f8) - R(0x1372,0x13aa)];
    unsigned int unknown_13f8_;
};

struct StringList_02072a68_2;
struct TextWindowManager_0205d6a0;
struct TextWindowManager_0205de24_2;
struct SoundEffectManager_02108760;
struct Struct_0205c570;
struct Struct_ov012_02186a7c;

extern "C" Struct_ov012_02187320* GetMessageWindow_020421a0();
extern "C" const char* FindStringInList_02072a68(StringList_02072a68_2* stringList, int stringId);
#if defined(jpn)
extern "C" void StartMessage_0204500c(Struct_ov012_02187320* window, const char* text, int arg2);
#else
extern "C" void StartMessage_0204500c(Struct_ov012_02187320* window, const char* text, int arg2, int arg3);
#endif
extern "C" void CloseTextWindows_0205d6a0(TextWindowManager_0205d6a0* windowManager, int isAll);
extern "C" void SetNextTextWindowBGLayer_0205de24(TextWindowManager_0205de24_2* windowManager, unsigned char isSubScreen, unsigned char bgIndex);
extern "C" void func_ov023_021e6e60(Struct_ov012_02187320_3* arg0);
extern "C" void func_ov012_02189f38(char* arg0);
extern "C" void PlaySoundEffect_0205eaa0(SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern "C" int GetCursorIndex_0205d794(Struct_0205c570* windowManager);
extern "C" int func_ov023_021e6de4(Struct_ov012_02187320_3* arg0);
extern "C" int func_ov023_021e6e20(Struct_ov012_02186a7c* arg0);
extern "C" void func_ov012_02185bf0(Struct_ov012_02187320_3* arg0, unsigned char arg1, int arg2);
#if defined(jpn)
extern "C" void func_ov012_0218adac(Struct_ov012_02187320_3* arg0, int arg1, int arg2);
#else
extern "C" void func_ov012_0218adac(Struct_ov012_02187320_3* arg0, int arg1, int arg2, int arg3);
#endif
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" void func_ov012_0218943c(Struct_ov012_02187320_3* arg0);
extern "C" int GetMessageChoice_020457e0(Struct_ov012_02187320* window);

extern "C" char gSoundEffectManager_02108760[];

static inline Struct_ov012_02187320_2* inline_ov012_02187320(GameState* arg0)
{
    return (Struct_ov012_02187320_2*)((char*)arg0 + R(0x543c,0x569c));
}

// USA: func_ov012_02187320
extern "C" ARM void func_ov012_02187320(Struct_ov012_02187320_3* arg0)
{
    Struct_ov012_02187320* var0 = GetMessageWindow_020421a0();
    int var1 = var0->unknown_9a0_;
    if (var1 == 3)
        var0->unknown_19ae_ = 0;
    if (arg0->unknown_1370_ == 0)
    {
#if defined(jpn)
        StartMessage_0204500c(var0, FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_133c_, 0xf), 0);
#else
        StartMessage_0204500c(var0, FindStringInList_02072a68((StringList_02072a68_2*)arg0->unknown_133c_, 0xf), 0, 0xe3);
#endif
        var0->unknown_998_ = 1;
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)arg0->unknown_ac_, 1);
        arg0->unknown_1370_ = 10;
        return;
    }
    else if (arg0->unknown_1370_ == 1)
    {
        if (var1 == 0 || var1 == 3)
            arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 2)
    {
        arg0->unknown_13a0_ = 0;
        arg0->unknown_13f8_ = 0;
        SetNextTextWindowBGLayer_0205de24((TextWindowManager_0205de24_2*)arg0->unknown_ac_, 0, 2);
        func_ov023_021e6e60(arg0);
        func_ov012_02189f38((char*)arg0);
        PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)gSoundEffectManager_02108760, 5, 0);
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 3)
    {
        arg0->unknown_13a0_ = 1;
        arg0->unknown_13f8_ = GetCursorIndex_0205d794((Struct_0205c570*)arg0->unknown_ac_);
        int var2 = 0;
        if (func_ov023_021e6de4(arg0) || func_ov023_021e6e20((Struct_ov012_02186a7c*)arg0))
        {
            func_ov012_02185bf0(arg0, arg0->unknown_1371_, 1);
            PlaySoundEffect_0205eaa0((SoundEffectManager_02108760*)gSoundEffectManager_02108760, 1, 0);
            Struct_ov012_02187320_2* var3 = inline_ov012_02187320(GameState::GetInstance());
            switch (arg0->unknown_13f8_)
            {
                case 1:
                    var3->unknown_3_7_ = 1;
                    break;
                case 0:
                    var3->unknown_3_7_ = 0;
                    break;
            }
            if (func_ov023_021e6e20((Struct_ov012_02186a7c*)arg0))
                var3->unknown_3_7_ = 1;
#if defined(jpn)
            func_ov012_0218adac(arg0, 0, -1);
#else
    #if defined(jpn)
        func_ov012_0218adac(arg0, 0, -1);
#else
        func_ov012_0218adac(arg0, 0, -1, 0);
#endif
#endif
            var2 = 1;
        }
        if (!var2)
            return;
        Struct_ov012_02187320* var4 = GetMessageWindow_020421a0();
        int var5 = var4->unknown_998_ == 0 ? 1 : 0;
        if (!var5)
            ResetMessageWindow_02043204((char*)var4);
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)arg0->unknown_ac_, 1);
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 4)
    {
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 5)
    {
        arg0->unknown_1370_++;
        return;
    }
    else if (arg0->unknown_1370_ == 6)
    {
        arg0->unknown_1371_ = 1;
        func_ov023_021e6e60(arg0);
        func_ov012_0218943c(arg0);
        arg0->unknown_13a0_ = 1;
        arg0->unknown_13a8_ = -1;
        arg0->unknown_13a9_ = 0;
        arg0->unknown_1370_ = 1;
        return;
    }
    else if (arg0->unknown_1370_ == 10 && var0->unknown_998_ == 0)
    {
        Struct_ov012_02187320_2* var6 = inline_ov012_02187320(GameState::GetInstance());
        if (GetMessageChoice_020457e0(var0) == 0)
            var6->unknown_3_7_ = 0;
        else
            var6->unknown_3_7_ = 1;
#if defined(jpn)
        func_ov012_0218adac(arg0, 0, -1);
#else
        func_ov012_0218adac(arg0, 0, -1, 0);
#endif
        CloseTextWindows_0205d6a0((TextWindowManager_0205d6a0*)arg0->unknown_ac_, 1);
        arg0->unknown_1370_ = 5;
    }
}
