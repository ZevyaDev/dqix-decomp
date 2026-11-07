#include <globaldefs.h>

struct Task_ov031_0223e2b8 { unsigned char unknown_0_[8]; int callback_8_; };

// USA: SetTaskCallback_ov031_0223e2b8
extern "C" ARM void SetTaskCallback_ov031_0223e2b8(struct Task_ov031_0223e2b8* task, int callback) {
    task->callback_8_ = callback;
}
