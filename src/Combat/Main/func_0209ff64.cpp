#include <globaldefs.h>

struct SelectionScript_0209ff64 {
    char unknown_0_[0x60];
    int pendingScriptEntry_60_;
};

// USA: QueueSelectionScriptEntry_0209ff64
extern "C" ARM void QueueSelectionScriptEntry_0209ff64(struct SelectionScript_0209ff64* script, int entryId) {
    script->pendingScriptEntry_60_ = entryId;
}
