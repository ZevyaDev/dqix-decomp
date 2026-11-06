#include <globaldefs.h>

struct QueueNode_0204693c {
    signed char type_0_;
    signed char isFinished_1_;
    signed char isQueued_2_;
    signed char isRunning_3_;
};

// USA: ResetQueueNode_0204693c
extern "C" ARM void ResetQueueNode_0204693c(struct QueueNode_0204693c* node) {
    node->type_0_ = -1;
    node->isFinished_1_ = 0;
    node->isQueued_2_ = 0;
    node->isRunning_3_ = 0;
}
