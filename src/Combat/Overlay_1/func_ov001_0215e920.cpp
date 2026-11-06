#include <globaldefs.h>
#include <Resource/MessageSystem.h>

extern "C" int GetMessageWindow_020421a0();

// USA: func_ov001_0215e920
extern "C" ARM int func_ov001_0215e920() {
    ((MessageWindow_02021b84*)GetMessageWindow_020421a0())->unknown_19c1_ = 1;
    return 1;
}
