#include <globaldefs.h>

struct QueueNode_02046b60 {
    signed char type_0_;
    char unknown_1_[3];
    struct QueueNode_02046b60* pNext_4_;
};

struct Queue_02038598_5 {
    struct QueueNode_02046b60* pHead_0_;
};

// USA: IsTypeInQueue_02046b60
extern "C" ARM int IsTypeInQueue_02046b60(struct Queue_02038598_5* queue, int type) {
    struct QueueNode_02046b60* node = queue->pHead_0_;
    while (node != 0) {
        if (node->type_0_ == type) {
            return 1;
        }
        node = node->pNext_4_;
    }
    return 0;
}
