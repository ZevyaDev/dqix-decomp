#if defined(jpn)
#define R(j,u) (j)
#define data_ov009_0218ac04 data_ov009_0218bb6c
#define data_ov013_02187d94 data_ov013_02188cd0
#define func_ov008_02187b20 func_ov008_021888fc
#define func_ov012_0218adac func_ov012_0218bba0
#define func_ov013_02185900 func_ov013_02186aec
#define func_ov023_021e6de4 func_ov023_021e7148
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#if defined(jpn)
#define func_ov012_0218432c func_ov012_021853a0
#define func_ov012_0218930c func_ov012_02189be8
#endif
#include "std_library_functions.h"
#include "GameState/GameState.h"

extern "C" int func_ov012_0218432c(int arg0);
extern "C" void func_ov023_021e6e60(void* arg0);
extern "C" int func_ov023_021e6448(void* arg0);
extern "C" int func_ov023_021e6de4(char* arg0);
struct Struct_ov012_02186a7c { char unknown_0_[R(0x90,0xac)]; };
extern "C" int func_ov023_021e6e20(struct Struct_ov012_02186a7c* arg0);
#if defined(jpn)
extern "C" void func_ov012_0218adac(void* arg0, int arg1, int arg2);
#else
extern "C" void func_ov012_0218adac(void* arg0, int arg1, int arg2, int arg3);
#endif
extern "C" void func_ov012_0218930c(void* arg0, int arg1);
extern "C" void func_ov012_02189d68(char* arg0);

struct TextWindowManager_0205de24_2;
extern "C" void SetNextTextWindowBGLayer_0205de24(struct TextWindowManager_0205de24_2* windowManager, unsigned char arg1, unsigned char bgIndex);
struct Struct_0205c570;
extern "C" int GetCursorIndex_0205d794(struct Struct_0205c570* windowManager);
struct SoundEffectManager_02108760;
extern "C" void PlaySoundEffect_0205eaa0(struct SoundEffectManager_02108760* manager, int soundEffectIndex, int handle);
extern int gSoundEffectManager_02108760;
struct StringList_02072a68_2;
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);

struct Struct_ov012_02187158 { unsigned short unknown_0_0_ : 5; unsigned short unknown_0_5_ : 11; };

// USA: func_ov012_02187158
extern "C" ARM void func_ov012_02187158(char* arg0) {
    int var0 = *(unsigned char*)(arg0 + R(0x1340,0x1370));
    if (var0 == 0) {
        *(unsigned char*)(arg0 + R(0x1368,0x13a0)) = 0;
        *(int*)(arg0 + R(0x143c,0x13e4)) = 0;
        int var1 = func_ov012_0218432c(2);
        int var2;
        for (var2 = 0; var2 < ((struct Struct_ov012_02187158*)(arg0 + R(0x1400,0x1300) + R(0x1c,0xc4)))->unknown_0_0_; var2++) {
            if (var1 == (*(signed char**)(arg0 + 0x1000 + R(0x418,0x3c0)))[var2]) {
                *(int*)(arg0 + 0x1000 + R(0x43c,0x3e4)) = var2;
                break;
            }
        }
        SetNextTextWindowBGLayer_0205de24((struct TextWindowManager_0205de24_2*)(arg0 + R(0x90,0xac)), 0, 3);
        func_ov023_021e6e60(arg0);
        func_ov012_02189d68(arg0);
        (*(unsigned char*)(arg0 + R(0x1340,0x1370)))++;
        return;
    }
    if (var0 != 1) return;
    *(unsigned char*)(arg0 + R(0x1368,0x13a0)) = 1;
    *(int*)(arg0 + R(0x143c,0x13e4)) = GetCursorIndex_0205d794((struct Struct_0205c570*)(arg0 + R(0x90,0xac)));
    if (func_ov023_021e6448(arg0)) {
        *(int*)(arg0 + R(0x143c,0x13e4)) = GetCursorIndex_0205d794((struct Struct_0205c570*)(arg0 + R(0x90,0xac)));
    }
    if (func_ov023_021e6de4(arg0)) {
        PlaySoundEffect_0205eaa0((struct SoundEffectManager_02108760*)&gSoundEffectManager_02108760, 1, 0);
        GameState* var3 = GameState::GetInstance();
        int var4 = (*(signed char**)(arg0 + 0x1000 + R(0x418,0x3c0)))[*(int*)(arg0 + 0x1000 + R(0x43c,0x3e4))];
        short var5 = (short)(var4 + 0x2710);
        char* var6 = (char*)FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + R(0x1314,0x133c)), var5);
        char* var7 = (char*)var3 + R(0x3c,0x29c) + 0x5400;
        memset(arg0 + R(0x1498,0x1440), 0, 0x40);
        memcpy(arg0 + R(0x1498,0x1440), var6, strlen(var6));
        int var8 = *(int*)(var7 + 0x4);
        *(int*)(var7 + 0x4) = (var8 & 0xfff801ff) | ((var4 & 0x3ff) << 9);
#if defined(jpn)
        func_ov012_0218adac(arg0, 0, -1);
#else
        func_ov012_0218adac(arg0, 0, -1, 0);
#endif
        func_ov012_0218930c(arg0, 0);
        return;
    }
    if (func_ov023_021e6e20((struct Struct_ov012_02186a7c*)arg0)) {
        func_ov012_0218930c(arg0, 1);
    }
}
