#include <globaldefs.h>

extern "C" int func_ov017_021d4df8(void*, int);
extern "C" void StartScriptEntry_ov017_021d4ce4(void*, int);
extern "C" void ResumeScript_ov017_021d4ccc(void*);

struct Struct_0209fe18 {
    char unknown_0_[0x4c];
    int unknown_4c_;
    char unknown_50_[0x14];
    int unknown_64_;
    int unknown_68_;
};

// USA: UpdateQuestBattleScript_0209fe18
extern "C" ARM void UpdateQuestBattleScript_0209fe18(Struct_0209fe18* script) {
    if (script->unknown_64_ >= 0) {
        if (func_ov017_021d4df8((char*)script + 0x10, script->unknown_64_) == 0) {
            script->unknown_64_ = -1;
            return;
        }
        StartScriptEntry_ov017_021d4ce4((char*)script + 0x10, script->unknown_64_);
        script->unknown_68_ = script->unknown_64_;
        script->unknown_64_ = -1;
    } else {
        if (script->unknown_68_ < 0) return;
        ResumeScript_ov017_021d4ccc((char*)script + 0x10);
        if (script->unknown_4c_ != 0) {
            script->unknown_68_ = -1;
        }
    }
}
