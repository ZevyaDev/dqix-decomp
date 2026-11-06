#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int GetMessageWindow_020421a0();

// USA: func_ov001_0215e960
extern "C" ARM int func_ov001_0215e960(void) {
    ((MessageWindow_02021b84*)GetMessageWindow_020421a0())->unknown_19ca_ = 0;
    return 1;
}
