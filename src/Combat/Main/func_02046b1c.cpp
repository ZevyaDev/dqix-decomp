#include <globaldefs.h>

struct Queue_02046b1c {
    int pHead_0_;
};

// USA: GetQueueHead_02046b1c
extern "C" ARM int GetQueueHead_02046b1c(struct Queue_02046b1c* queue) {
    return queue->pHead_0_;
}
