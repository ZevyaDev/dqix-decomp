#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct QueueNode_0204693c;
extern "C" void ResetQueueNode_0204693c(QueueNode_0204693c* node);

// USA: ResetZoneLoadTask_ov017_0219e310
extern "C" ARM void ResetZoneLoadTask_ov017_0219e310(unsigned char* task, int arg1) {
    ResetQueueNode_0204693c((QueueNode_0204693c*)task);
    task[0x0] = 3;
    task[0x8] = 0;
    task[0x9] = 0;
    task[0xa] = 1;
    task[0xb] = 0;
    task[0xc] = 0;
    *(short*)(task + 0xe) = 0;
    *(short*)(task + 0x10) = 0;
    task[0x20] = 0;
    *(short*)(task + 0x22) = 0;
    *(short*)(task + 0x24) = 0;
#if !defined(jpn)
    *(int*)(task + 0x28) = 0;
#endif
    short pendingZoneUpdate = *(short*)(task + 0x12);
    if (pendingZoneUpdate != 0) {
        if (arg1 == 0) return;
    }
    VectorizedMemset(task + 0x12, 0, 0xe);
}
