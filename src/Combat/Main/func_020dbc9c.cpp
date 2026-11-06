#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct Struct_020dbc5c {
    signed char unknown_0_;
    signed char unknown_1_[7];
    signed char unknown_8_;
    signed char unknown_9_[3];
    int unknown_c_;
    int unknown_10_;
};

// USA: func_020dbc9c
extern "C" ARM void func_020dbc9c(struct Struct_020dbc5c* arg0) {
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)arg0);
    arg0->unknown_0_ = 0x4c;
    arg0->unknown_8_ = 0;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
}
