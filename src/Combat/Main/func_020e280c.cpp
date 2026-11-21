#include <globaldefs.h>

#if defined(jpn)
#define func_020e1cdc func_020e38d4
#endif

extern "C" void func_020e25cc(signed char* arg0);
extern "C" void func_020e1cdc(void* arg0, void* arg1);
struct Struct_020e2604;
extern "C" void func_020e2604(struct Struct_020e2604* arg0);

struct YesNoWindow_020e280c {
    unsigned char unknown_0_[0x10];
    void* pWindow_10_;   // 0x10
};

// USA: OpenYesNoWindow_020e280c
extern "C" ARM void OpenYesNoWindow_020e280c(struct YesNoWindow_020e280c* yesNoWindow, void* objVRAMEnd) {
    func_020e25cc((signed char*)yesNoWindow);
    func_020e1cdc(yesNoWindow->pWindow_10_, objVRAMEnd);
    func_020e2604((struct Struct_020e2604*)yesNoWindow);
}
