#include <globaldefs.h>
typedef int (*Type_020439b0_2)();
typedef void (*Type_020439b0_3)(int);
extern Type_020439b0_2 data_020f2bdc[];
extern Type_020439b0_3 data_020f2bec[];
struct DisplayWindow_020439b0 {
    unsigned char unknown_0_;
    unsigned char unknown_1_;
    unsigned char unknown_2_;
};
// USA: SetDisplayWindowEnabled_020e2cc4
extern "C" ARM void SetDisplayWindowEnabled_020e2cc4(struct DisplayWindow_020439b0* displayWindow, int isEnabled) {
    int enabledWindows;
    if (displayWindow->unknown_0_ == isEnabled) return;
    displayWindow->unknown_0_ = isEnabled;
    enabledWindows = data_020f2bdc[displayWindow->unknown_1_]();
    if (isEnabled) enabledWindows |= 1 << displayWindow->unknown_2_;
    else enabledWindows &= ~(1 << displayWindow->unknown_2_);
    data_020f2bec[displayWindow->unknown_1_](enabledWindows);
}
