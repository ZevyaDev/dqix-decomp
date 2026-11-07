#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

extern "C" void AppendBACTCommand_ov000_02169b78(void*);

struct BACTParseState_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* pAllocator_8_;
};
extern struct BACTParseState_ov000_02184264_2 gBACTParseState_ov000_02184264;

struct Struct_0201c1c8 { int unknown_0_; int unknown_4_; };

struct Struct_ov000_0216cec0 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
};

// USA: func_ov000_0216cec0
extern "C" ARM int func_ov000_0216cec0(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216cec0* var0 = (struct Struct_ov000_0216cec0*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(sizeof(struct Struct_ov000_0216cec0));
    var0->unknown_0_ = 0x80;
    var0->unknown_8_ = (short)((Script::Parameter*)arg0)->ToInt();
    AppendBACTCommand_ov000_02169b78(var0);
    return 1;
}
