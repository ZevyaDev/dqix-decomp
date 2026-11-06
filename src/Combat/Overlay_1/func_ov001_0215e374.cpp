#include <globaldefs.h>
#include "Resource/MessageSystem.h"

extern "C" int GetMessageWindow_020421a0();
extern "C" void SetScriptRefInt_ov017_021d6134(void*, unsigned int);

// USA: func_ov001_0215e374
extern "C" ARM int func_ov001_0215e374(void* arg0) {
    MessageWindow_02021b84* var0 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
    SetScriptRefInt_ov017_021d6134(arg0, var0->unknown_19bd_);
    return 1;
}
