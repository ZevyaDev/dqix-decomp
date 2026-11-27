#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

extern "C" void ResetQuestDisplay_0208b9a0(void*, int);

struct Struct_02061c04_11;
extern "C" void func_ov017_021b994c(struct Struct_02061c04_11* arg0);

// USA: ResetTalkTask_ov017_021b8d1c
extern "C" ARM void ResetTalkTask_ov017_021b8d1c(unsigned char* talkTask) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)talkTask);
    ((SafeAllocator*)(talkTask + 0x8))->ResetAllocatorPointer();
    ((SafeAllocator*)(talkTask + 0x1c))->ResetAllocatorPointer();
    ResetQuestDisplay_0208b9a0(talkTask + 0x30, 0);
    talkTask[0] = 5;
    *(int*)(talkTask + 0x11c) = 0;
    *(int*)(talkTask + 0x124) = 0;
    *(int*)(talkTask + 0x114) = 0;
    *(int*)(talkTask + 0x118) = 0;
    talkTask[0x128] = 0;
    talkTask[0x129] = 0;
    talkTask[0x137] = 0;
    talkTask[0x138] = 0;
    talkTask[0x139] = 0;
    func_ov017_021b994c((struct Struct_02061c04_11*)talkTask);
}
