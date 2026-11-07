#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void PopOverlay_020a1e54(int isPreviousReloaded);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

struct Struct_ov003_0217e36c {
    char unknown_0_[0xc];
    SafeAllocator unknown_c_;
    int unknown_20_;
};

// USA: func_ov003_0217e36c
extern "C" ARM void func_ov003_0217e36c(Struct_ov003_0217e36c* arg0) {
    if (arg0->unknown_20_ != 0) {
        PopOverlay_020a1e54(1);
        arg0->unknown_20_ = 0;
    }
    void* var0 = arg0->unknown_c_.GetSignedAllocator();
    arg0->unknown_c_.Destroy();
    FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var0);
}
