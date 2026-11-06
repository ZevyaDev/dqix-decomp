#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

// USA: func_ov017_021a124c
extern "C" ARM void func_ov017_021a124c(unsigned char* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0[0] = 2;
    ((SafeAllocator*)(arg0 + 8))->ResetAllocatorPointer();
    *(int*)(arg0 + 0x1c) = 0;
    arg0[0x20] = 2;
    arg0[0x21] = 0;
    arg0[0x22] = 0;
}
