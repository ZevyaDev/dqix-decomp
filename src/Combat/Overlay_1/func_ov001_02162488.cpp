#include <globaldefs.h>

extern "C" int GetScriptValueAsInt_ov017_021d60f4(int value);
extern "C" void func_020daf9c(int arg0, int arg1, int arg2, int arg3);

// USA: func_ov001_02162488
extern "C" ARM int func_ov001_02162488(int arg0) {
    func_020daf9c(GetScriptValueAsInt_ov017_021d60f4(arg0), 0, 1, 0);
    return 1;
}
