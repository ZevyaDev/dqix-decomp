#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

// USA: AllocateRoundedSize_02012d88
extern "C" ARM void* AllocateRoundedSize_02012d88(AllocatorUnion* allocator, unsigned int size) {
    void* block = allocator->Allocate((size + 3) & ~3);
    if (block == NULL)
        return NULL;
    return block;
}
