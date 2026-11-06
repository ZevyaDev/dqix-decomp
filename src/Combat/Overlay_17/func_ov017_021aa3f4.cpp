#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_021aa3f4 {
    unsigned char unknown_0_;
    unsigned char unknown_1_[7];
    unsigned short unknown_8_;
    unsigned short unknown_a_;
    unsigned short unknown_c_;
};

// USA: func_ov017_021aa3f4
extern "C" ARM void func_ov017_021aa3f4(Struct_ov017_021aa3f4* arg0) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)arg0);
    arg0->unknown_0_ = 0x19;
    arg0->unknown_8_ = 0;
    arg0->unknown_a_ = 0;
    arg0->unknown_c_ = 0;
}
