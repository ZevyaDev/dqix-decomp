#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

extern AllocatorUnion gMainHeap_02114e20;

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" void EnablePlayerControl_020397c0(void* object);

extern "C" void* GetEffectManager_02057924();
extern "C" void RemoveEffectResource_02057f00(void* effectManager, int effectId);
extern "C" void func_ov010_021842a0(void* arg0);

struct Struct_ov010_021842d8 {
    unsigned char unknown_0_[4];
    int unknown_4_;
    unsigned char unknown_8_[0xc];
    SafeAllocator unknown_14_;
};

// USA: func_ov010_021842d8
extern "C" ARM void func_ov010_021842d8(struct Struct_ov010_021842d8* arg0) {
    RemoveEffectResource_02057f00(GetEffectManager_02057924(), 0x11);
    void* var0 = arg0->unknown_14_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_14_.Destroy();
        FreeMemory_02012da4(&gMainHeap_02114e20, var0);
    }
    if (arg0->unknown_4_ >= 0) {
        int var1 = (int)BackgroundLoader::GetInstance();
        ((BackgroundLoader*)(var1))->RemoveTask((int)(arg0->unknown_4_));
        arg0->unknown_4_ = -1;
    }
    GameObject* var2 = GameState::GetInstance()->GetUnknownGameObject();
    if (var2 != NULL) {
        EnablePlayerControl_020397c0(var2);
    }
    func_ov010_021842a0(arg0);
}
