#include <globaldefs.h>

struct Struct_0209fe10 {
    char unknown_0_[0x64];
    int unknown_64_;
};

// USA: QueueQuestBattleScriptEntry_0209fe10
extern "C" ARM void QueueQuestBattleScriptEntry_0209fe10(struct Struct_0209fe10* script, int entryId) {
    script->unknown_64_ = entryId;
}
