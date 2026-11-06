#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int GetMessageWindow_020421a0();
extern "C" int GetScriptValueAsInt_ov017_021d60f4(void*);

// USA: func_ov001_0215e938
extern "C" ARM int func_ov001_0215e938(void* arg0) {
    MessageWindow_02021b84* var0 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
    var0->unknown_19ae_ = GetScriptValueAsInt_ov017_021d60f4(arg0);
    return 1;
}
