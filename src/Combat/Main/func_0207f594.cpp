#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_0207f12c {
    void* unknown_0_;   // 0x0
    short unknown_4_;       // 0x4
    short unknown_6_;     // 0x6
};

// USA: AllocateMenuLayoutTextEntries_0207f594
extern "C" ARM void AllocateMenuLayoutTextEntries_0207f594(struct Struct_0207f12c* textEntries, SafeAllocator* allocator, int capacity) {
    if (allocator == NULL) return;
    if (capacity <= 0) return;
    textEntries->unknown_4_ = 0;
    textEntries->unknown_6_ = capacity;
    textEntries->unknown_0_ = allocator->Allocate(capacity * 0x30);
}
