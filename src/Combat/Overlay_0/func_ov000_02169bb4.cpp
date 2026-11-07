#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

extern "C" void AppendBACTCommand_ov000_02169b78(void* command);

struct BACTParseState_ov000_02184264_2 {
    unsigned char unknown_0_[8];
    SafeAllocator* pAllocator_8_;
};
extern struct BACTParseState_ov000_02184264_2 gBACTParseState_ov000_02184264;

struct BACTCommand_ov000_02169bb4 {
    int opcode_0_;
    int unknown_4_;
};

// USA: AppendNewBACTCommand_ov000_02169bb4
extern "C" ARM void AppendNewBACTCommand_ov000_02169bb4(int opcode) {
    struct BACTCommand_ov000_02169bb4* command = (struct BACTCommand_ov000_02169bb4*)gBACTParseState_ov000_02184264.pAllocator_8_->Allocate(8);
    if (command == NULL) return;
    command->opcode_0_ = 0;
    command->unknown_4_ = 0;
    command->opcode_0_ = opcode;
    AppendBACTCommand_ov000_02169b78(command);
}
