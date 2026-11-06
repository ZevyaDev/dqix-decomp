#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int GetMessageWindow_020421a0();

// USA: func_ov001_0215e900
extern "C" ARM int func_ov001_0215e900(void) {
    MessageWindow_02021b84* var0 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
    var0->unknown_19c0_ = 1;
    var0->unknown_195d_ = 30;
    return 1;
}
