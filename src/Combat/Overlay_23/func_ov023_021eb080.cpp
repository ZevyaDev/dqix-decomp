#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct AccoladeDisplayBufferSizes_ov023_021fd850 { unsigned int sizes_0_[4]; };
extern struct AccoladeDisplayBufferSizes_ov023_021fd850 data_ov023_021fd850;

// USA: AllocateAccoladeDisplayBuffers_ov023_021eb080
extern "C" ARM void AllocateAccoladeDisplayBuffers_ov023_021eb080(void* display, SafeAllocator* allocator) {
    if (allocator == NULL) return;
    struct AccoladeDisplayBufferSizes_ov023_021fd850 bufferSizes = data_ov023_021fd850;
    *(void**)display = allocator->Allocate(0x50);
    for (int i = 0; i < 4; i++) {
        SafeAllocator* bufferAllocator = &((SafeAllocator*)(*(void**)display))[i];
        bufferAllocator->ResetAllocatorPointer();
        unsigned int bufferSize = bufferSizes.sizes_0_[i];
        void* buffer = allocator->Allocate(bufferSize);
        bufferAllocator->CreateTypeA(buffer, bufferSize);
    }
    *(void**)((char*)display + 0x424) = allocator->Allocate(0x54);
    *(void**)((char*)display + 0x428) = allocator->Allocate(0xa0);
    *(void**)((char*)display + 0x42c) = allocator->Allocate(0x8);
}
