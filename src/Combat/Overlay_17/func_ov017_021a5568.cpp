#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

struct Struct_ov017_021a5568 {
    unsigned char type_0_;
    unsigned char unknown_1_[7];
    int step_8_;
    unsigned char unknown_c_[0x14];
    unsigned char unknown_20_;
    unsigned char unknown_21_;
    short unknown_22_;
};

extern int data_ov017_021d83ac;

// USA: ResetFieldMenuTask_ov017_021a5568
extern "C" ARM void ResetFieldMenuTask_ov017_021a5568(Struct_ov017_021a5568* fieldMenuTask) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)fieldMenuTask);
    fieldMenuTask->type_0_ = 0xc;
    fieldMenuTask->step_8_ = 0;
    data_ov017_021d83ac = 0;
    fieldMenuTask->unknown_20_ = 0;
    fieldMenuTask->unknown_21_ = 0;
    fieldMenuTask->unknown_22_ = -1;
}
