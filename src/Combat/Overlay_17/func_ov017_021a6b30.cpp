#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "NitroSDK/VRAMAllocation.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

extern "C" void* GetEffectManager_02057924(void* arg0);
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void LoadFileTables_020a0c0c(void);

extern int gMainHeap_02114e20;

struct Struct_ov017_021a6b30 {
    char unknown_0_[0x10];
    SafeAllocator unknown_10_;
};

// USA: func_ov017_021a6b30
extern "C" ARM void func_ov017_021a6b30(struct Struct_ov017_021a6b30* arg0) {
    RemoveEffectResource_02057f00(GetEffectManager_02057924(arg0), 0xc);

    void* var0 = arg0->unknown_10_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_10_.Destroy();
        func_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
    }

    RestoreTextureImageAllocationState((const unsigned int*)((int*)((char*)arg0 + 0x24)));
    RestoreTexturePaletteAllocationState((const unsigned int*)((int*)((char*)arg0 + 0x4c)));
    LoadFileTables_020a0c0c();
}
