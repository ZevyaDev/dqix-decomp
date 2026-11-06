#include <globaldefs.h>
#if defined(jpn)
#define BUFFER_OFFSET 0x1dc
#define OWNED_OFFSET 0x1e0
#else
#define BUFFER_OFFSET 0x48c
#define OWNED_OFFSET 0x490
#endif
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"
#include "Resource/GameResources.h"

extern "C" void LoadFileTables_020a0c0c(void);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern AllocatorUnion gMainHeap_02114e20;

// USA: func_020a395c
extern "C" ARM void func_020a395c(void) {
    GameState* var0 = GameState::GetInstance();
    int var1 = ((int)GetGameResources());
    unsigned char* var2 = var0->GetTreasureMapLanguageData();
    FreeMemory_02012da4(&gMainHeap_02114e20, *(void**)(var1 + 0x4000 + BUFFER_OFFSET));
    FreeMemory_02012da4(&gMainHeap_02114e20, var2);
    if (*(unsigned char*)(var1 + 0x4000 + OWNED_OFFSET) != 0) {
        LoadFileTables_020a0c0c();
        *(unsigned char*)(var1 + 0x4000 + OWNED_OFFSET) = 0;
    }
    var0->SetTreasureMapLanguageDataPtr(0);
    *(void**)(var1 + 0x4000 + BUFFER_OFFSET) = 0;
}

