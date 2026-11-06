#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_021c17cc {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    SafeAllocator unknown_8_;
    unsigned char unknown_1c_;
    unsigned char unknown_1d_;
    unsigned char unknown_1e_[2];
    int unknown_20_;
};

// USA: func_ov017_021c17cc
extern "C" ARM void func_ov017_021c17cc(Struct_ov017_021c17cc* arg0) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
    arg0->unknown_0_ = 0x2f;
    arg0->unknown_8_.ResetAllocatorPointer();
    arg0->unknown_1c_ = 0;
    arg0->unknown_20_ = 0;
    arg0->unknown_1d_ = 0;
}
