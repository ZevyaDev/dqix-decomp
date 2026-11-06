#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201d530;

struct Struct_ov000_02184264_19 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_19 gBACTParseState_ov000_02184264;

struct Struct_ov000_0216be00 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
};

extern "C" void AppendBACTCommand_ov000_02169b78(struct Struct_ov000_0216be00*);

// USA: func_ov000_0216be00
extern "C" ARM int func_ov000_0216be00(struct Struct_0201d530* arg0) {
    struct Struct_ov000_0216be00* var0 = (struct Struct_ov000_0216be00*)gBACTParseState_ov000_02184264.unknown_8_->Allocate(0xc);
    var0->unknown_0_ = 0x54;
    var0->unknown_8_ = (short)(int)(4096.0f * ((Script::Parameter*)arg0)->ToFloat());
    AppendBACTCommand_ov000_02169b78(var0);
    return 1;
}
