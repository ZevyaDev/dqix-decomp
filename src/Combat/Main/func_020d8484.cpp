#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "GameState/GameState.h"

struct Struct_020d8484 {
    signed char unknown_0_;
    signed char unknown_1_;
    signed char unknown_2_;
    signed char unknown_3_;
};
struct StringList_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
struct Struct_020d80b0_3 {
    struct Struct_020d8484 unknown_0_;
    int unknown_4_;
    int unknown_8_;
    struct StringList_020727d8 unknown_c_;
    SafeAllocator unknown_14_;
};

extern "C" int GetFollowCamera_020100f8(char* gameState);
extern "C" void EnableCameraTurning_020a27ac(void* camera);
extern "C" void func_020727ec(struct StringList_020727d8* arg0);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

// USA: func_020d8484
extern "C" ARM void func_020d8484(struct Struct_020d80b0_3* arg0) {
    EnableCameraTurning_020a27ac((void*)GetFollowCamera_020100f8((char*)GameState::GetInstance()));
    void* var0 = arg0->unknown_14_.GetSignedAllocator();
    if (var0 != NULL) {
        arg0->unknown_14_.Reset();
        arg0->unknown_14_.Destroy();
        func_020727ec(&arg0->unknown_c_);
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
    }
    arg0->unknown_0_.unknown_1_ = 1;
}
