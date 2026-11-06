#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct StringList_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
extern "C" void ResetStringList_020727d8(struct StringList_020727d8* stringList);

// USA: func_ov017_021a6be4
extern "C" ARM void func_ov017_021a6be4(unsigned char* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0[0] = 0x3e;
    *(int*)(arg0 + 8) = 0;
    *(int*)(arg0 + 0x44) = -1;
    *(int*)(arg0 + 0xc) = 0;
    arg0[0x10] = 0;
    ResetStringList_020727d8((struct StringList_020727d8*)(arg0 + 0x14));
    ((SafeAllocator*)(arg0 + 0x1c))->ResetAllocatorPointer();
    ((SafeAllocator*)(arg0 + 0x30))->ResetAllocatorPointer();
}
