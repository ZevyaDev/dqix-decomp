#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Graphics/BGLayer.h"
#include "Graphics/OBJSpriteSet.h"

struct SpriteAnimationList_02043368;

struct BGLayer_02020cb8;

extern "C" void InitTextWindow_0204c684(char* textWindow);

struct TextWindowManager_0205cfd4;
extern "C" void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager);

extern "C" void func_ov023_021e20c0(void* arg0);

#if defined(jpn)
struct Sprite_02043368_2;
#define BLOCK60_SIZE 0x190
#define BLOCKD4_SIZE 0x48
#else
#define BLOCK60_SIZE 0x370
#define BLOCKD4_SIZE 0x4c
#endif

// USA: func_ov003_0216e02c
extern "C" ARM void func_ov003_0216e02c(char* arg0, SafeAllocator* arg1) {
    if (arg1 == 0) {
        return;
    }

    *(SafeAllocator**)(arg0 + 0xd0) = arg1;
    *(void**)(arg0 + 0x3c) = arg1->Allocate(0xbc);
    *(void**)(arg0 + 0x40) = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(0x40);
    *(void**)(arg0 + 0x44) = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(0x1c0);
    *(void**)(arg0 + 0x60) = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(BLOCK60_SIZE);
    *(void**)(arg0 + 0x64) = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(8);
    *(void**)(arg0 + 0xd4) = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(BLOCKD4_SIZE);

#if defined(jpn)
    for (int var0 = 0; var0 < 10; var0++) {
        int var1 = var0 * 0x28;
        ((OBJSpriteSet::Metatile*)((struct Sprite_02043368_2*)(*(char**)(arg0 + 0x60) + var1)))->Reset();
        *(*(char**)(arg0 + 0x60) + var1 + 0x26) = 1;
    }
#endif

    ((OBJSpriteSet::List*)((struct SpriteAnimationList_02043368*)*(void**)(arg0 + 0x64)))->Reset();

    void* var2 = (*(SafeAllocator**)(arg0 + 0xd0))->Allocate(0x400);
    ((SafeAllocator*)(arg0 + 0xbc))->CreateTypeA(var2, 0x400);
    ((SafeAllocator*)(arg0 + 0xbc))->Reset();

    InitTextWindowManager_0205cfd4((struct TextWindowManager_0205cfd4*)*(void**)(arg0 + 0x3c));

    for (int var3 = 0; var3 < 2; var3++) {
        ((BGLayer*)((struct BGLayer_02020cb8*)(*(char**)(arg0 + 0x40) + (var3 << 5))))->Reset();
    }

    for (int var4 = 0; var4 < 2; var4++) {
        InitTextWindow_0204c684(*(char**)(arg0 + 0x44) + var4 * 0xe0);
    }

    func_ov023_021e20c0(*(void**)(arg0 + 0xd4));
}
