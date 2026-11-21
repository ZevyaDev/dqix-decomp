#include <globaldefs.h>

struct QueueNode_02046a3c {
    char unknown_0_[2];
    unsigned char isQueued_2_;
    char unknown_3_;
    struct QueueNode_02046a3c* pNext_4_;
};

struct Queue_02046a3c_2 {
    struct QueueNode_02046a3c* pHead_0_;
    struct QueueNode_02046a3c* pTail_4_;
};

// USA: InsertAfterQueueHead_02046a3c
extern "C" ARM void InsertAfterQueueHead_02046a3c(struct Queue_02046a3c_2* queue, struct QueueNode_02046a3c* node) {
    if (queue->pHead_0_ != NULL && queue->pTail_4_ != NULL) {
        node->pNext_4_ = queue->pHead_0_->pNext_4_;
        queue->pHead_0_->pNext_4_ = node;
        if (node->pNext_4_ == NULL)
            queue->pTail_4_ = node;
    } else {
        queue->pHead_0_ = node;
        queue->pTail_4_ = node;
        node->pNext_4_ = NULL;
    }
    node->isQueued_2_ = 1;
}
