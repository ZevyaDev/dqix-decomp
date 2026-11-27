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

struct Struct_ov000_0216bac8 {
    int unknown_0_;
    int unknown_4_;
    short unknown_8_;
};

// USA: AppendBACTPlayExtraSoundEffectCommand_ov000_0216bac8
extern "C" ARM int AppendBACTPlayExtraSoundEffectCommand_ov000_0216bac8(struct Struct_0201c1c8* params) {
    struct Struct_ov000_0216bac8* command = (struct Struct_ov000_0216bac8*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(sizeof(struct Struct_ov000_0216bac8));
    if (command == NULL) return 0;
    command->unknown_0_ = 0;
    command->unknown_4_ = 0;
    command->unknown_0_ = 0x46;
    command->unknown_8_ = (short)((Script::Parameter*)params)->ToInt();
    AppendBACTCommand_ov000_02169b78(command);
    return 1;
}
