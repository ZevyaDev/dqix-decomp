#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
extern "C" void func_0205c790(char* arg0);
struct StringTable_0201099c_14;
extern "C" void InitStringTable_020dfc40(struct StringTable_0201099c_14* stringTable);

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
    func_0205c790(arg0 + 0x24);
#if defined(jpn)
    ((SafeAllocator*)(arg0 + 0x1ec))->ResetAllocatorPointer();
    InitStringTable_020dfc40((struct StringTable_0201099c_14*)(arg0 + 0x200));
#else
    ((SafeAllocator*)(arg0 + 0x25c))->ResetAllocatorPointer();
    InitStringTable_020dfc40((struct StringTable_0201099c_14*)(arg0 + 0x270));
#endif
}
