#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"

extern "C" void PopSubOverlay_020a1f4c(int isPreviousReloaded);
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

extern int gMainHeap_02114e20;

// USA: func_ov017_021c07d0
extern "C" ARM void func_ov017_021c07d0(char* arg0) {
    int* var0 = (int*)(arg0 + 0x1c);
    if (*var0 != 0) {
        PopSubOverlay_020a1f4c(1);
        *var0 = 0;
    }
    SafeAllocator* var1 = (SafeAllocator*)(arg0 + 0x8);
    void* var2 = var1->GetSignedAllocator();
    if (var2 == NULL) return;
    var1->Destroy();
    FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var2);
}
