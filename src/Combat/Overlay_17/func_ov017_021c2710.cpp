#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

extern AllocatorUnion gMainHeap_02114e20;
extern "C" void FreeMemory_02012da4(AllocatorUnion* allocator, void* block);

// USA: func_ov017_021c2710
extern "C" ARM void func_ov017_021c2710(unsigned char* arg0) {
    void* var0 = *(void**)(arg0 + 8);
    if (var0 != NULL) {
        FreeMemory_02012da4(&gMainHeap_02114e20, var0);
        *(void**)(arg0 + 8) = NULL;
    }
    arg0[1] = 1;
}
