#include <globaldefs.h>

extern "C" int func_ov017_021d4df8(void*, int);
extern "C" void StartScriptEntry_ov017_021d4ce4(void*, int);
extern "C" void ResumeScript_ov017_021d4ccc(void*);

struct SelectionScript_0209ff6c {
    char unknown_0_[0x48];
    int isScriptEnded_48_;
    char unknown_4c_[0x14];
    int pendingScriptEntry_60_;
    int runningScriptEntry_64_;
};

// USA: UpdateSelectionScript_0209ff6c
extern "C" ARM void UpdateSelectionScript_0209ff6c(SelectionScript_0209ff6c* script) {
    if (script->pendingScriptEntry_60_ >= 0) {
        if (func_ov017_021d4df8((char*)script + 0xc, script->pendingScriptEntry_60_) == 0) {
            script->pendingScriptEntry_60_ = -1;
            return;
        }
        StartScriptEntry_ov017_021d4ce4((char*)script + 0xc, script->pendingScriptEntry_60_);
        script->runningScriptEntry_64_ = script->pendingScriptEntry_60_;
        script->pendingScriptEntry_60_ = -1;
    } else {
        if (script->runningScriptEntry_64_ < 0) return;
        ResumeScript_ov017_021d4ccc((char*)script + 0xc);
        if (script->isScriptEnded_48_ != 0) {
            script->runningScriptEntry_64_ = -1;
        }
    }
}
