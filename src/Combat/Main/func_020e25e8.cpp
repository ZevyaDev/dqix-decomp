#include <globaldefs.h>

struct Struct_020e1cb8;

extern "C" void func_020e1cb8(struct Struct_020e1cb8* arg0);
extern "C" void ResetYesNoWindowCursor_020e25cc(signed char* yesNoWindow);

struct YesNoWindow_020e25e8 {
    char unknown_0_[0x10];
    struct Struct_020e1cb8* pWindow_10_;
};

// USA: CloseYesNoWindow_020e25e8
extern "C" ARM void CloseYesNoWindow_020e25e8(struct YesNoWindow_020e25e8* yesNoWindow) {
    func_020e1cb8(yesNoWindow->pWindow_10_);
    ResetYesNoWindowCursor_020e25cc((signed char*)yesNoWindow);
}
