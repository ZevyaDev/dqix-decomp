#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Resource/Brightness.h"

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

struct Struct_ov017_021bef84 {
    char unknown_0_[0x44];
    SafeAllocator unknown_44_;
};

// USA: func_ov017_021bef84
extern "C" ARM void func_ov017_021bef84(struct Struct_ov017_021bef84* arg0) {
    int var0 = (int)GetGameResources();
    void* var1 = arg0->unknown_44_.GetSignedAllocator();
    if (var1 != NULL) {
        arg0->unknown_44_.Destroy();
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var1);
    }
    ClearFlags04((GameResources*)var0, 0xc0);
}
