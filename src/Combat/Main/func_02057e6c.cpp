#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020553ac;
extern "C" void func_020553ac(struct Struct_020553ac* arg0);
struct Struct_02055558;
extern "C" int func_02055558(struct Struct_02055558* arg0, int arg1, int arg2, int arg3, int arg4, int arg5);

struct EffectResource_02057e6c {
    unsigned char unknown_0_[0x1ec];
    struct EffectResource_02057e6c* pNext_1ec_;
};

struct EffectManager_02057e6c_2 {
    struct EffectResource_02057e6c* pEffectResources_0_;
    int unknown_4_;
};

// USA: AddEffectResource_02057e6c
extern "C" ARM int AddEffectResource_02057e6c(EffectManager_02057e6c_2* effectManager, int effectId, SafeAllocator* allocator, int fileData, int fileSize, int textureVRAMArea) {
    EffectResource_02057e6c* effect = (EffectResource_02057e6c*)allocator->Allocate(0x1f0);
    if (effect == NULL) return -1;
    func_020553ac((struct Struct_020553ac*)effect);
    if (func_02055558((struct Struct_02055558*)effect, effectId, (int)allocator, fileData, fileSize, textureVRAMArea) == 0) return -1;
    EffectResource_02057e6c** link = &effectManager->pEffectResources_0_;
    while (*link != NULL) link = &(*link)->pNext_1ec_;
    *link = effect;
    return effectManager->unknown_4_++;
}
