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
    struct QueueNode_02046b38_2* var0 = queue->pHead_0_;
    while (var0 != 0) {
        if (var0 == node) {
            return 1;
        }
        var0 = var0->pNext_4_;
    }
    return 0;
}
