#include <globaldefs.h>

extern "C" void* GetMessageWindow_020421a0();
extern "C" void CloseMessageWindow_02043124(void* window);

// USA: func_ov025_021e5f40
extern "C" ARM int func_ov025_021e5f40() {
    CloseMessageWindow_02043124(GetMessageWindow_020421a0());
    return 1;
}
