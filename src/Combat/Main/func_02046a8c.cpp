#include <globaldefs.h>

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(struct QueueNode_0204693c* node);

struct QueueNode_02046a8c {
    char unknown_0_[2];
    unsigned char unknown_2_;
    char unknown_3_;
    struct QueueNode_02046a8c* pNext_4_;
};

struct Queue_02046a8c_2 {
    struct QueueNode_02046a8c* pHead_0_;
    struct QueueNode_02046a8c* pTail_4_;
};

// USA: RemoveFromQueue_02046a8c
extern "C" ARM void RemoveFromQueue_02046a8c(struct Queue_02046a8c_2* queue, struct QueueNode_02046a8c* node) {
    struct QueueNode_02046a8c* current = queue->pHead_0_;
    if (current == 0) return;
    if (current == node) {
        queue->pHead_0_ = node->pNext_4_;
    } else {
        struct QueueNode_02046a8c* next = current->pNext_4_;
        if (next == 0) return;
        while (next != node) {
            if (next == 0) return;
            current = next;
            next = next->pNext_4_;
        }
        current->pNext_4_ = next->pNext_4_;
    }
    current = queue->pHead_0_;
    queue->pTail_4_ = 0;
    while (current != 0) {
        queue->pTail_4_ = current;
        current = current->pNext_4_;
    }
    ResetQueueNode_0204693c((struct QueueNode_0204693c*)node);
}
