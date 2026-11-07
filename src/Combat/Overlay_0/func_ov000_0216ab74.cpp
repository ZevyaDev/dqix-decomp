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

struct Struct_ov000_0216ab74 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
};

// USA: func_ov000_0216ab74
extern "C" ARM int func_ov000_0216ab74(struct Struct_0201c1c8* arg0) {
    struct Struct_ov000_0216ab74* var0 = (struct Struct_ov000_0216ab74*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(sizeof(struct Struct_ov000_0216ab74));
    var0->unknown_0_ = 0;
    var0->unknown_4_ = 0;
    var0->unknown_0_ = 0x1d;
    var0->unknown_8_ = ((Script::Parameter*)arg0)->ToInt();
    AppendBACTCommand_ov000_02169b78(var0);
    return 1;
}
