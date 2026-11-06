#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);
extern "C" int func_ov004_02164738(void* arg0);

// USA: func_ov004_02165be4
extern "C" ARM int func_ov004_02165be4(void* arg0) {
    ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
    func_ov004_02164738(arg0);
    return 0;
}
