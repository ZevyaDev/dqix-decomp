#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_0201bdac_3 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned char unknown_8_;
};

// USA: func_020d9850
extern "C" ARM void func_020d9850(Struct_0201bdac_3* arg0) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
    arg0->unknown_0_ = 0x48;
    arg0->unknown_8_ = 0;
}
