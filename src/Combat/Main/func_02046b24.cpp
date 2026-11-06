#include <globaldefs.h>

struct QueueNode_02015438 {
    signed char type_0_;
};

// USA: GetQueueHeadType_02046b24
extern "C" ARM int GetQueueHeadType_02046b24(struct QueueNode_02015438** queue) {
    struct QueueNode_02015438* head = queue[0];
    if (head != 0) {
        return head->type_0_;
    }
    return -1;
}
