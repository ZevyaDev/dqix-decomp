#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0();
extern "C" void UpdateMessageWindowGraphics_020439b0(int window, int arg1);

// USA: func_ov017_021adc44
extern "C" ARM void func_ov017_021adc44(void*) {
    UpdateMessageWindowGraphics_020439b0(GetMessageWindow_020421a0(), 0);
}
