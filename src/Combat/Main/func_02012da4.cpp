#include <globaldefs.h>
#include "NitroSDK/Memory/AllocatorUnion.h"

#if defined(jpn)
#define func_02012da4 func_02012b6c
#endif

// USA: func_02012da4
extern "C" ARM void func_02012da4(AllocatorUnion* allocator, void* block) {
    allocator->Free(block);
}
