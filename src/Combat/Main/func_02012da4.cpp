#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: FreeMemory_02012da4
extern "C" ARM void FreeMemory_02012da4(AllocatorUnion* allocator, void* block) {
    allocator->Free(block);
}
