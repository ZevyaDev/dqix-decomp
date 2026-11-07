#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "GameState/GameState.h"

struct Struct_020979c0;
extern "C" void func_020979f4(struct Struct_020979c0* arg0);
extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void PopSubOverlay_020a1f4c(int isPreviousReloaded);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void func_020a27ac(void* arg0);

extern int gMainHeap_02114e20;
extern int data_ov017_021d83ec;

struct Struct_ov017_021b14ec {
    char unknown_0_[0x8];
    SafeAllocator unknown_8_;
    struct Struct_020979c0* unknown_1c_;
};

// USA: func_ov017_021b14ec
extern "C" ARM void func_ov017_021b14ec(struct Struct_ov017_021b14ec* arg0) {
    if (arg0->unknown_1c_ != NULL) func_020979f4(arg0->unknown_1c_);
    data_ov017_021d83ec = 0;

    void* var0 = arg0->unknown_8_.GetSignedAllocator();
    if (var0) {
        arg0->unknown_8_.Destroy();
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
    }

    PopOverlay_020a1e54(1);
    PopSubOverlay_020a1f4c(1);
    int var1 = GetFollowCamera_020100f8((char*)GameState::GetInstance());
    if (var1 != 0) func_020a27ac((void*)var1);
}
