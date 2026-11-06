#include <globaldefs.h>

extern "C" int GetMessageWindow_020421a0();
extern "C" int GetMessageChoice_020457e0();
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_021609c0
extern "C" ARM int func_ov001_021609c0(void* arg0) {
    GetMessageWindow_020421a0();
    int var0 = GetMessageChoice_020457e0();
    SetScriptRefInt_ov017_021d6134(arg0, var0);
    return 1;
}
