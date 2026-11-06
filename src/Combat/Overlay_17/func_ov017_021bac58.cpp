#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov017_021bac58
extern "C" ARM void func_ov017_021bac58(unsigned char* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0[0] = 0xf;
    ((SafeAllocator*)(arg0 + 0xc))->ResetAllocatorPointer();
    *(int*)(arg0 + 8) = 0;
    *(int*)(arg0 + 0x20) = 0;
    arg0[0x24] = 0xff;
}
