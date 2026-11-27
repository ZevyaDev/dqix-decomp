#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct Struct_ov010_021842a0 {
    int unknown_0_;
    SafeAllocator unknown_4_;
    int unknown_18_;
    int unknown_1c_;
};

// USA: InitHeapNode_ov011_021842a0
extern "C" ARM void InitHeapNode_ov011_021842a0(Struct_ov010_021842a0* heap) {
    heap->unknown_0_ = 0;
    heap->unknown_4_.ResetAllocatorPointer();
    heap->unknown_18_ = 0;
    heap->unknown_1c_ = 0;
}
