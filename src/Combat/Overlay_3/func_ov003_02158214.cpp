#include <globaldefs.h>

#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"

#if defined(jpn)
enum { Enum_ov003_02158214_505 = 0x1f5 };
enum { Enum_ov003_02158214_812 = 0x328 };
enum { Enum_ov003_02158214_494 = 0x1ea };
enum { Enum_ov003_02158214_492 = 0x1e8 };
enum { Enum_ov003_02158214_516 = 0x200 };
enum { Enum_ov003_02158214_512 = 0x1fc };
enum { Enum_ov003_02158214_504 = 0x1f4 };
#else
enum { Enum_ov003_02158214_505 = 0x1f9 };
enum { Enum_ov003_02158214_812 = 0x32c };
enum { Enum_ov003_02158214_494 = 0x1ee };
enum { Enum_ov003_02158214_492 = 0x1ec };
enum { Enum_ov003_02158214_516 = 0x204 };
enum { Enum_ov003_02158214_512 = 0x200 };
enum { Enum_ov003_02158214_504 = 0x1f8 };
#endif

extern "C" int GetResources_0200fb8c(int* gameState);
extern "C" int GetMessageWindow_020421a0();
extern "C" void ResetMessageWindow_02043204(char* window);

struct Struct_020e28dc;
extern "C" int func_020e28dc(struct Struct_020e28dc* arg0);
struct YesNoWindow_020e25e8;
extern "C" void CloseYesNoWindow_020e25e8(struct YesNoWindow_020e25e8* yesNoWindow);

struct GameResources;
void SetSubBrightness(GameResources*, int, int);
int IsSubBrightnessTransitionActive(GameResources*);
extern "C" void func_ov023_021eb414(char* arg0);
extern "C" void func_ov023_021eb43c(void* arg0);
extern "C" void func_ov023_021eb26c(void* arg0);

// USA: func_ov003_02158214
extern "C" ARM void func_ov003_02158214(void* arg0) {
    char* var0 = (char*)arg0;
    GameState* var1 = GameState::GetInstance();
    int var2 = GetResources_0200fb8c((int*)var1);
    unsigned char var3 = *(unsigned char*)(var0 + Enum_ov003_02158214_505);

    if (var3 == 0) {
        *(int*)(var0 + Enum_ov003_02158214_812) = 0;
        ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());

        *(short*)(var0 + Enum_ov003_02158214_494) = -1;
        *(short*)(var0 + Enum_ov003_02158214_492) = *(short*)(var0 + Enum_ov003_02158214_494);

        if (*(void**)(var0 + 0x1c) != 0 &&
            func_020e28dc((struct Struct_020e28dc*)*(void**)(var0 + 0x1c)) != 0) {
            CloseYesNoWindow_020e25e8((struct YesNoWindow_020e25e8*)*(void**)(var0 + 0x1c));
        }

        unsigned char var4 = 3;
        *(unsigned char*)(var0 + Enum_ov003_02158214_505) = var4;
        if (*(void**)(var0 + Enum_ov003_02158214_516) == 0) return;
        SetSubBrightness((GameResources*)var2, var4 - 0x13, 0);
        *(unsigned char*)(var0 + Enum_ov003_02158214_505) = 1;
        return;
    }

    if (var3 == 1) {
        if (IsSubBrightnessTransitionActive((GameResources*)var2) != 0) return;
        func_ov023_021eb414(*(char**)(var0 + Enum_ov003_02158214_516));
        *(unsigned char*)(var0 + Enum_ov003_02158214_505) = 2;
        return;
    }

    if (var3 == 2) {
        func_ov023_021eb43c(*(void**)(var0 + Enum_ov003_02158214_516));
        if (*(unsigned short*)(*(char**)(var0 + Enum_ov003_02158214_516) + 0x438) & 4) {
            func_ov023_021eb26c(*(void**)(var0 + Enum_ov003_02158214_516));
            ((SafeAllocator*)(*(char**)(var0 + 0) + 0x64))->Reset();
            *(int*)(var0 + Enum_ov003_02158214_516) = 0;
            *(int*)(var0 + Enum_ov003_02158214_512) = 0;
            *(unsigned char*)(var0 + Enum_ov003_02158214_505) = 3;
        }
        return;
    }

    if (var3 == 3) {
        *(unsigned char*)(var0 + Enum_ov003_02158214_504) = 5;
        *(unsigned char*)(var0 + Enum_ov003_02158214_505) = 0;
    }
}
