#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/StringList.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
extern "C" void InitChoiceList_0205c790(char* choiceList);
struct StringTable_0201099c_14;

// USA: func_ov017_021a7328
extern "C" ARM void func_ov017_021a7328(char* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0[0] = 0x3f;
    *(int*)(arg0 + 0x8) = 0;
    *(int*)(arg0 + 0xc) = 0;
    *(int*)(arg0 + 0x10) = 0;
    *(int*)(arg0 + 0x20) = -1;
    *(int*)(arg0 + 0x14) = 0;
    *(int*)(arg0 + 0x18) = 0;
    InitChoiceList_0205c790(arg0 + 0x24);
#if defined(jpn)
    ((SafeAllocator*)(arg0 + 0x1ec))->ResetAllocatorPointer();
    ((StringList*)((struct StringTable_0201099c_14*)(arg0 + 0x200)))->Reset();
#else
    ((SafeAllocator*)(arg0 + 0x25c))->ResetAllocatorPointer();
    ((StringList*)((struct StringTable_0201099c_14*)(arg0 + 0x270)))->Reset();
#endif
}
