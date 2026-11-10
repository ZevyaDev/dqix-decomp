#include <globaldefs.h>

struct QueueNode_020469f8_2 {
    char unknown_0_[2];
    unsigned char isQueued_2_;
    unsigned char unknown_3_;
    struct QueueNode_020469f8_2* pNext_4_;
};

struct Queue_020469f8 {
    struct QueueNode_020469f8_2* pHead_0_;
    struct QueueNode_020469f8_2* pTail_4_;
};

// USA: PrependToQueue_020469f8
extern "C" ARM void PrependToQueue_020469f8(struct Queue_020469f8* queue, struct QueueNode_020469f8_2* node) {
    if (queue->pHead_0_ != NULL && queue->pTail_4_ != NULL) {
        queue->pHead_0_->unknown_3_ = 0;
        node->pNext_4_ = queue->pHead_0_;
        queue->pHead_0_ = node;
    } else {
        queue->pHead_0_ = node;
        queue->pTail_4_ = node;
        node->pNext_4_ = NULL;
    }
    node->isQueued_2_ = 1;
}
