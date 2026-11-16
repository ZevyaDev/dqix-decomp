#include <globaldefs.h>
#include "World/ZoneLootableRecord.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/AllocatorUnion.h"
#include "Graphics/SPRSprite.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

struct Struct_02012fa4;
extern "C" void func_0202f1a4(char* arg0);
extern "C" void func_02012da4(AllocatorUnion* allocator, void* block);

extern AllocatorUnion gMainHeap_02114e20;

// USA: func_0202f1dc
extern "C" ARM void func_0202f1dc(char* arg0) {
    char* var0;
    int var1;
    var0 = arg0;
    for (var1 = 0; var1 < 8; var1++) {
        ((SPRSprite*)((struct Struct_02012fa4*)var0))->Release();
        var0 += 0x88;
    }

    if (*(SafeAllocator**)(arg0 + 0x444) != NULL) {
        SignedAllocatorHeader* var2 = (*(SafeAllocator**)(arg0 + 0x444))->GetSignedAllocator();
        (*(SafeAllocator**)(arg0 + 0x444))->Destroy();
        func_02012da4(&gMainHeap_02114e20, var2);
        func_02012da4(&gMainHeap_02114e20, *(SafeAllocator**)(arg0 + 0x444));
    }

    func_0202f1a4(arg0);
}
