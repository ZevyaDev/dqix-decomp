#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct BGLayer_0204af38 {
    char unknown_0_[0x10];
    void* pScreenBlocks_10_;        // 0x10
    char unknown_14_[0xa];     // 0x14
    unsigned char screenBlockCapacity_1e_; // 0x1e
};

// USA: AllocateBGScreenBlocks_0204af38
extern "C" ARM void AllocateBGScreenBlocks_0204af38(struct BGLayer_0204af38* layer, int capacity, SafeAllocator* allocator) {
    if (allocator == NULL) return;
    layer->pScreenBlocks_10_ = allocator->Allocate(capacity * 0x10);
    layer->screenBlockCapacity_1e_ = capacity;
}
