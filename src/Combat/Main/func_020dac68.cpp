#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_020dac40_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[11];
    int unknown_c_;
    int unknown_10_;
    unsigned char unknown_14_[0x14];
    unsigned char unknown_28_;
};

// USA: func_020dac68
extern "C" ARM void func_020dac68(Struct_020dac40_2* arg0) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
    arg0->unknown_0_ = 0x4b;
    arg0->unknown_c_ = 0;
    arg0->unknown_10_ = 0;
    arg0->unknown_28_ = 0xff;
}
