#include <globaldefs.h>
#include "Memory/SafeAllocator.h"

struct BACTCommand_ov000_02169b2c { char unknown_0_[4]; struct BACTCommand_ov000_02169b2c* pNext_4_; };
extern "C" void func_ov000_02169b2c(struct BACTCommand_ov000_02169b2c* arg0, struct BACTCommand_ov000_02169b2c* arg1);

struct BACTEntry_ov000_02169b78 { char unknown_0_[8]; struct BACTCommand_ov000_02169b2c* pCommands_8_; };
struct BACTParseState_ov000_02184264 { char unknown_0_[4]; struct BACTEntry_ov000_02169b78* pLastEntry_4_; };
extern struct BACTParseState_ov000_02184264 gBACTParseState_ov000_02184264;

// USA: AppendBACTCommand_ov000_02169b78
extern "C" ARM void AppendBACTCommand_ov000_02169b78(struct BACTCommand_ov000_02169b2c* command) {
    struct BACTEntry_ov000_02169b78* entry = gBACTParseState_ov000_02184264.pLastEntry_4_;
    if (!entry) {
        return;
    }
    struct BACTCommand_ov000_02169b2c* firstCommand = entry->pCommands_8_;
    if (!firstCommand) {
        entry->pCommands_8_ = command;
        command->pNext_4_ = NULL;
        return;
    }
    func_ov000_02169b2c(firstCommand, command);
}
