#include <globaldefs.h>
#include "Input/Input.h"

unsigned long long GetCurrentTimestamp(void);

struct InputLock_02153628_2 { void* durationMs_0_; unsigned int startTimestampLow_4_; unsigned int startTimestampHigh_8_; };
extern InputLock_02153628_2 data_02153628;

// USA: DisableInputForDuration_020e1154
extern "C" ARM void DisableInputForDuration_020e1154(void* durationMs) {
    unsigned long long timestamp = GetCurrentTimestamp();
    data_02153628.startTimestampLow_4_ = (unsigned int)timestamp;
    data_02153628.startTimestampHigh_8_ = (unsigned int)(timestamp >> 32);
    data_02153628.durationMs_0_ = durationMs;
    g_keyManager.SetInputEnabled(false);
    g_keyManager.Clear();
    g_touchInput.SetInputEnabled(false);
    g_touchInput.ClearCurrentInput();
}
