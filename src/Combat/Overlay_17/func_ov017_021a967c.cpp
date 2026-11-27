#include <globaldefs.h>
#include "NitroSDK/Memory.h"
#include "Memory/SafeAllocator.h"
#include "std_library_functions.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct Struct_ov017_021a967c { unsigned short unknown_0_0_ : 14; unsigned short unknown_1_6_ : 1; unsigned short unknown_1_7_ : 1; };

// USA: ResetBattleRecordsTask_ov017_021a967c
extern "C" ARM void ResetBattleRecordsTask_ov017_021a967c(unsigned char* node, int protagonistObjectIndex) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)node);
    node[0x0] = 0x3a;
    ((SafeAllocator*)(node + 0xc))->ResetAllocatorPointer();
    node[0x8] = 0;
    *(int*)(node + 0x20) = 0;
    node[0x24] = protagonistObjectIndex;
    node[0x9] = 0;
    node[0x25] = 0;
    node[0x26] = 0;
    VectorizedMemset(node + 0x28, 0, 6);
    memset(node + 0x2e, 0, 0xb);
    ((Struct_ov017_021a967c*)(node + 0x3a))->unknown_0_0_ = 0;
    node[0x39] = 0;
    ((Struct_ov017_021a967c*)(node + 0x3a))->unknown_1_6_ = 0;
    VectorizedMemset(node + 0x3c, 0, 0x18);
    *(int*)(node + 0x54) = 0;
}
