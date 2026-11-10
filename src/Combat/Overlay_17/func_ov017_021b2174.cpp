#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

extern int data_ov017_021d83f0[2];

// USA: ResetMenuTask_ov017_021b2174
extern "C" ARM void ResetMenuTask_ov017_021b2174(unsigned char* node) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)node);
    node[0x0] = 0x2d;
    *(int*)(node + 0x8) = 0;
    *(int*)(node + 0xc) = -1;
    data_ov017_021d83f0[1] = 0;
    ((SafeAllocator*)(node + 0x10))->ResetAllocatorPointer();

    struct Struct_ov017_021b2174 {
        unsigned int unknown_0_0_ : 1;
        unsigned int unknown_0_1_ : 1;
        unsigned int unknown_0_2_ : 1;
        unsigned int unknown_0_3_ : 1;
        unsigned int unknown_0_4_ : 1;
        unsigned int unknown_0_5_ : 1;
    };
    Struct_ov017_021b2174* flags = (Struct_ov017_021b2174*)(node + 0x38);
    flags->unknown_0_0_ = 0;
    flags->unknown_0_1_ = 0;
    flags->unknown_0_2_ = 0;
    node[0x24] = 0;
    *(int*)(node + 0x30) = 0;
    flags->unknown_0_3_ = 1;
    flags->unknown_0_4_ = 0;
    flags->unknown_0_5_ = 0;

    node[0x3c] = 0xff;
    node[0x3d] = 0xff;
    node[0x3e] = 0;
    *(int*)(node + 0x40) = 0;
    *(int*)(node + 0x44) = 0;
    node[0x48] = 0;
}
