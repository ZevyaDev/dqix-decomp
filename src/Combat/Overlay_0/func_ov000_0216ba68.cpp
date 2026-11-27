#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_17 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_17 gBACTParseState_ov000_02184264;

struct Struct_ov000_0216ba68 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned short unknown_a_;
};

extern "C" void AppendBACTCommand_ov000_02169b78(struct Struct_ov000_0216ba68*);

// USA: AppendBACTLoadExtraSoundSetCommand_ov000_0216ba68
extern "C" ARM int AppendBACTLoadExtraSoundSetCommand_ov000_0216ba68(struct Struct_0201c1c8* params) {
    struct Struct_ov000_0216ba68* command = (struct Struct_ov000_0216ba68*)gBACTParseState_ov000_02184264.unknown_8_->Allocate(0xc);
    if (command == 0) return 0;
    command->unknown_0_ = 0;
    command->unknown_4_ = 0;
    command->unknown_0_ = 0x45;
    command->unknown_8_ = (unsigned short)((Script::Parameter*)params)->ToInt();
    command->unknown_a_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)params + 8)))->ToInt();
    AppendBACTCommand_ov000_02169b78(command);
    return 1;
}
