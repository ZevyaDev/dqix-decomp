#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int func_020e11e4(void);

struct InputLock_02153628_2 { void* durationMs_0_; unsigned int startTimestampLow_4_; unsigned int startTimestampHigh_8_; };
extern InputLock_02153628_2 data_02153628;

// USA: func_020e123c
extern "C" ARM void func_020e123c(void) {
    if (func_020e11e4()) {
        return;
    }
    data_02153628.startTimestampLow_4_ = 0;
    data_02153628.startTimestampHigh_8_ = 0;
    data_02153628.durationMs_0_ = 0;
    g_keyManager.SetInputEnabled(true);
    g_touchInput.SetInputEnabled(true);
}
