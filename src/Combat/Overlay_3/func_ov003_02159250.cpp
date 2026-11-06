#include <globaldefs.h>
#include "Resource/MessageSystem.h"

extern "C" int GetMessageWindow_020421a0();
struct Struct_ov003_02159250 {
    char unknown_0_[0x5b1];
    unsigned char unknown_5b1_;
    unsigned char unknown_5b2_;
};

// USA: func_ov003_02159250
extern "C" ARM void func_ov003_02159250(Struct_ov003_02159250* arg0, const char* arg1) {
    if (arg1 == 0) return;
    MessageWindow_02021b84* var0 = (MessageWindow_02021b84*)GetMessageWindow_020421a0();
#if defined(jpn)
    StartMessage_0204500c(var0, arg1, 0);
#else
    StartMessage_0204500c(var0, arg1, 0, 0xe3);
#endif
    var0->unknown_19b2_ = arg0->unknown_5b2_;
    var0->unknown_99c_ = arg0->unknown_5b1_;
}
