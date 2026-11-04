#include <globaldefs.h>
#include "std_library_functions.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory/HMRFAllocator.h"

#if defined(jpn)
struct Struct_0209564c {
    void* unknown_0_;
    int unknown_4_;
    unsigned int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_[0x28];
    int unknown_3c_;
    int unknown_40_;
    unsigned char unknown_44_[0x10];
    unsigned char unknown_54_[4];
    unsigned char unknown_58_;
    unsigned char unknown_59_[8];
};

// JPN: func_0209564c
extern "C" ARM void func_0209564c(Struct_0209564c* arg0, SafeAllocator* arg1) {
    if (arg1 == NULL) return;
    unsigned int var0 = ((HMRFAllocator*)arg1->pSignedAlloc)->GetMaxPossibleAllocation(4);
    arg0->unknown_0_ = arg1->Allocate(var0);
    arg0->unknown_4_ = 0;
    arg0->unknown_8_ = var0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_3c_ = -1;
    arg0->unknown_40_ = -1;
    memset(arg0->unknown_44_, 0, 0x10);
    arg0->unknown_58_ = 0;
    memset(arg0->unknown_59_, 0, 8);
}
#endif
