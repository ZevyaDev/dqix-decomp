#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Brightness.h"

extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);
extern int gMainHeap_02114e20;

// USA: func_ov017_021a9714
extern "C" ARM void func_ov017_021a9714(char* arg0) {
    SafeAllocator* var0 = (SafeAllocator*)(arg0 + 0xc);
    void* var1 = var0->GetSignedAllocator();
    if (var1 != NULL) {
        var0->Destroy();
        FreeMemory_02012da4((AllocatorUnion*)&gMainHeap_02114e20, var1);
    }
    var0->ResetAllocatorPointer();
    arg0[8] = 0;
    *(int*)(arg0 + 0x20) = 0;
    void* var2 = GetGameResources();
    ClearFlags04((GameResources*)var2, 0xc0);
}
