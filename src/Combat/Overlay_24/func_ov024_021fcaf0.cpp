#include <globaldefs.h>

struct Struct_ov024_021fcaf0 { char unknown_0_[0x6f]; unsigned char unknown_6f_; };

extern "C" int TrySelectTacticOption_ov024_021fe698(void* tacticAI, int option);
extern "C" void EvaluatePartyStatusAction_ov024_021fd954(void* tacticAI, int statusEffect);

// USA: func_ov024_021fcaf0
extern "C" ARM void func_ov024_021fcaf0(struct Struct_ov024_021fcaf0* arg0) {
    if (arg0->unknown_6f_) {
        if (TrySelectTacticOption_ov024_021fe698(arg0, 11)) {
            EvaluatePartyStatusAction_ov024_021fd954(arg0, 14);
        }
    }
}
