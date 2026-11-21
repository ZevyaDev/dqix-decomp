#include <globaldefs.h>

struct QueueNode_02046b38_2 {
    char unknown_0_[4];
    struct QueueNode_02046b38_2* pNext_4_;
};

struct Queue_02046b38 {
    struct QueueNode_02046b38_2* pHead_0_;
};

// USA: IsNodeInQueue_02046b38
extern "C" ARM int IsNodeInQueue_02046b38(struct Queue_02046b38* queue, struct QueueNode_02046b38_2* node) {
    struct QueueNode_02046b38_2* current = queue->pHead_0_;
    while (current != 0) {
        if (current == node) {
            return 1;
        }
        current = current->pNext_4_;
    }
    return 0;
}
