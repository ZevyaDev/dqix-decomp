#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c { signed char type_0_, isFinished_1_, isQueued_2_, isRunning_3_; };
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

// USA: func_ov017_021c2b28
extern "C" ARM void func_ov017_021c2b28(void* arg0, unsigned char arg1, unsigned char arg2) {
    unsigned char* var0 = (unsigned char*)arg0;
    ResetQueueNode_0204693c((QueueNode_0204693c*)var0);
    var0[0] = 0x46;
    ((SafeAllocator*)(var0 + 8))->ResetAllocatorPointer();
    var0[0x8c] = 0;
    var0[0x8d] = 0;
    *(int*)(var0 + 0x90) = 0;
    var0[0x96] = 0;
    var0[0x94] = arg1;
    var0[0x95] = arg2;
}
