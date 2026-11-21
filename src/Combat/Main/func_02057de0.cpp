#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_020553ac;
extern "C" void func_020553ac(struct Struct_020553ac* arg0);
extern "C" int func_020553ec(void* arg0, int arg1, void* arg2, int arg3, int arg4);

struct EffectResource_02057de0 {
    unsigned char unknown_0_[0x1ec];
    struct EffectResource_02057de0* pNext_1ec_;
};

struct EffectManager_02057de0_2 {
    struct EffectResource_02057de0* pEffectResources_0_;
    int unknown_4_;
};

// USA: LoadEffectResource_02057de0
extern "C" ARM int LoadEffectResource_02057de0(EffectManager_02057de0_2* effectManager, int effectId, SafeAllocator* allocator, int fileData, int fileSize) {
    EffectResource_02057de0* effect = (EffectResource_02057de0*)allocator->Allocate(0x1f0);
    if (effect == NULL) return -1;
    func_020553ac((struct Struct_020553ac*)effect);
    if (func_020553ec(effect, effectId, allocator, fileData, fileSize) == 0) return -1;
    EffectResource_02057de0** link = &effectManager->pEffectResources_0_;
    while (*link != NULL) link = &(*link)->pNext_1ec_;
    *link = effect;
    return effectManager->unknown_4_++;
}
