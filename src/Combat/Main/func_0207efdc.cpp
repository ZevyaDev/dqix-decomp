#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0207ed1c {
    void* unknown_0_;   // 0x0
    short unknown_4_;       // 0x4
    short unknown_6_;     // 0x6
};

// USA: AllocateMenuLayoutWindowEntries_0207efdc
extern "C" ARM void AllocateMenuLayoutWindowEntries_0207efdc(struct Struct_0207ed1c* windowEntries, SafeAllocator* allocator, int capacity) {
    if (allocator == NULL) return;
    if (capacity < 0) return;
    windowEntries->unknown_4_ = 0;
    windowEntries->unknown_6_ = capacity;
    windowEntries->unknown_0_ = allocator->Allocate(capacity * 0x18);
}
