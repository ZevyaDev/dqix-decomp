#include <globaldefs.h>

extern "C" void ResetEffectSlot_02059cc8(unsigned char* slot);

// USA: func_02059cb4
extern "C" ARM unsigned char* func_02059cb4(unsigned char* arg0) {
    ResetEffectSlot_02059cc8(arg0);
    return arg0;
}
