#if defined(jpn)
enum { Enum_ov017_021b1d44_620 = 0xc };
#else
enum { Enum_ov017_021b1d44_620 = 0x26c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"
#include "Memory/SafeAllocator.h"
#include "NitroSDK/Memory.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct Struct_ov017_021b1d44 { char unknown_0_[0xc]; unsigned short unknown_c_0_ : 13; unsigned short unknown_d_5_ : 3; };
struct Struct_ov017_021b1d44_2 { char unknown_0_[0x5d00]; struct Struct_ov017_021b1d44 unknown_5d00_; };

struct Struct_ov017_021b1d44_3 { unsigned char unknown_0_[0x3c]; int unknown_3c_[8]; };

// USA: ResetWirelessTask_ov017_021b1d44
extern "C" ARM int ResetWirelessTask_ov017_021b1d44(unsigned char* node, int modeFlags, int isFullReset) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)node);
    node[0] = 0x2c;
    *(int*)(node + 8) = 0;
    node[0x20] = 0;
    node[0x21] = (unsigned char)modeFlags;
    *(int*)(node + 0x24) = 0;
    ((SafeAllocator*)(node + 0xc))->ResetAllocatorPointer();
    node[0x32] = 0;
    if (isFullReset != 0) {
        node[0x28] = 0;
        node[0x29] = 0;
        VectorizedMemset(node + 0x2a, 0, 8);
    }
    *(int*)(node + 0x34) = 0;
    *(int*)(node + 0x38) = 0;
    if ((node[0x21] & 0x40) != 0) {
        struct Struct_ov017_021b1d44_3* wirelessTask = (struct Struct_ov017_021b1d44_3*)node;
        for (int i = 0; i < 8; i++) {
            wirelessTask->unknown_3c_[i] = -1;
        }
        return 0;
    }
    struct Struct_ov017_021b1d44_2* var2 =
        (struct Struct_ov017_021b1d44_2*)((char*)GameState::GetInstance() + Enum_ov017_021b1d44_620);
    if ((var2->unknown_5d00_.unknown_c_0_ & 8) == 0) {
        unsigned char var3 = node[0x21];
        if ((var3 & 4) == 0 && (var3 & 2) == 0 && (var3 & 0x20) == 0) {
            node[0x21] = var3 | 0x10;
        }
    }
    return 1;
}
