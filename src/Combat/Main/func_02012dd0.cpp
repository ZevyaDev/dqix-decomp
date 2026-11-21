#include <globaldefs.h>
#include "NitroSDK/Memory/HPXEAllocator.h"

struct Struct_02114e20 {
    void* unknown_0_;
    HPXEAllocator* unknown_4_;
};

// USA: GetMaxPossibleAllocation_02012dd0
extern "C" ARM unsigned int GetMaxPossibleAllocation_02012dd0(Struct_02114e20* allocator) {
    return allocator->unknown_4_->GetMaxPossibleAllocation(4);
}
