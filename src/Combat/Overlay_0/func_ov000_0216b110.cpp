#include <globaldefs.h>
#include "Memory/SafeAllocator.h"
#include "Resource/Script.h"

struct Struct_0201c1c8;

struct Struct_ov000_02184264_12 {
    char unknown_0_[8];
    SafeAllocator* unknown_8_;
};
extern struct Struct_ov000_02184264_12 gBACTParseState_ov000_02184264;

struct Struct_ov000_0216b110 {
    int unknown_0_;
    int unknown_4_;
    unsigned short unknown_8_;
    unsigned char unknown_a_;
};

extern "C" void AppendBACTCommand_ov000_02169b78(struct Struct_ov000_0216b110*);

// USA: AppendBACTSetMainBrightnessCommand_ov000_0216b110
extern "C" ARM int AppendBACTSetMainBrightnessCommand_ov000_0216b110(struct Struct_0201c1c8* params) {
    struct Struct_ov000_0216b110* command = (struct Struct_ov000_0216b110*)gBACTParseState_ov000_02184264.unknown_8_->Allocate(0xc);
    command->unknown_0_ = 0;
    command->unknown_4_ = 0;
    command->unknown_0_ = 0x2c;
    command->unknown_a_ = (unsigned char)((Script::Parameter*)params)->ToInt();
    command->unknown_8_ = (unsigned short)((Script::Parameter*)((struct Struct_0201c1c8*)((char*)params + 8)))->ToInt();
    AppendBACTCommand_ov000_02169b78(command);
    return 1;
}
