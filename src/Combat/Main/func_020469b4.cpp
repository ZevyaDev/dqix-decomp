#include <globaldefs.h>

struct QueueNode_0201bdac {
    char unknown_0_[2];
    unsigned char isQueued_2_;
    char unknown_3_;
    struct QueueNode_0201bdac* pNext_4_;
};

struct Queue_0201bdac_2 {
    struct QueueNode_0201bdac* pHead_0_;
    struct QueueNode_0201bdac* pTail_4_;
};

// USA: AppendToQueue_020469b4
extern "C" ARM void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node) {
    if (queue->pHead_0_ != NULL && queue->pTail_4_ != NULL) {
        queue->pTail_4_->pNext_4_ = node;
        queue->pTail_4_ = node;
        node->pNext_4_ = NULL;
    } else {
        queue->pHead_0_ = node;
        queue->pTail_4_ = node;
        node->pNext_4_ = NULL;
    }
    node->pNext_4_ = NULL;
    node->isQueued_2_ = 1;
}
