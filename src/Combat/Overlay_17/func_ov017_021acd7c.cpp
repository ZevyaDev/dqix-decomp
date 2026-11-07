#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
extern "C" void InitChoiceList_0205c790(char* choiceList);

#if defined(jpn)
#define TAIL_OFFSET 0x20c
#else
#define TAIL_OFFSET 0x27c
#endif

// USA: func_ov017_021acd7c
extern "C" ARM void func_ov017_021acd7c(char* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0[0] = 1;
    ((SafeAllocator*)(arg0 + 0x8))->ResetAllocatorPointer();
    arg0[0x1c] = 0;
    arg0[0x1d] = 0;
    arg0[TAIL_OFFSET + 0] = 0;
    arg0[TAIL_OFFSET + 1] = 0;
    arg0[TAIL_OFFSET + 2] = 0;
    arg0[0x1e] = 0;
    arg0[0x1f] = 0;
    arg0[TAIL_OFFSET + 4] = 0;
    arg0[TAIL_OFFSET + 3] = 0;
    *(short*)(arg0 + 0x40) = -1;
    arg0[TAIL_OFFSET + 5] = 0;
    arg0[TAIL_OFFSET + 6] = 0;
    *(int*)(arg0 + 0x20) = 0;
    *(int*)(arg0 + 0x24) = 0;
    *(int*)(arg0 + 0x28) = 0;
    VectorizedMemset(arg0 + 0x2c, 0, 0x14);
    InitChoiceList_0205c790(arg0 + 0x44);
}
