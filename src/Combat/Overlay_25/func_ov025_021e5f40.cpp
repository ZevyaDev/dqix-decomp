#include <globaldefs.h>

extern "C" void* GetMessageWindow_020421a0();
extern "C" void func_02043124(void* arg0);

// USA: func_ov025_021e5f40
extern "C" ARM int func_ov025_021e5f40() {
    func_02043124(GetMessageWindow_020421a0());
    return 1;
}
