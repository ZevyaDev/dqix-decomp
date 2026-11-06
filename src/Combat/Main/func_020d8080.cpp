#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct QueueNode_0204693c {
    signed char type_0_;
    signed char isFinished_1_;
    signed char isQueued_2_;
    signed char isRunning_3_;
};
struct StringList_020727d8 {
    void* unknown_0_;
    short unknown_4_;
    short unknown_6_;
};
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);
extern "C" void ResetStringList_020727d8(struct StringList_020727d8* stringList);

struct Struct_020d8080 {
    struct QueueNode_0204693c unknown_0_;   // 0x0
    int unknown_4_;                          // 0x4
    int unknown_8_;                          // 0x8
    struct StringList_020727d8 unknown_c_;            // 0xc
    SafeAllocator unknown_14_;             // 0x14
};

// USA: func_020d8080
extern "C" ARM void func_020d8080(struct Struct_020d8080* arg0) {
    ResetQueueNode_0204693c(&arg0->unknown_0_);
    arg0->unknown_0_.type_0_ = 0x43;
    arg0->unknown_8_ = 0;
    ResetStringList_020727d8(&arg0->unknown_c_);
    arg0->unknown_14_.ResetAllocatorPointer();
}
