#include <globaldefs.h>
#include "GameState/GameState.h"


struct FieldGroup4e4_0218d854 {
    char pad[0x4e4];
    int f4e4;
};

// USA: func_ov020_0218d854  (semantic: DecrementFieldGroup4e4_0218d854)
extern "C" ARM void func_ov020_0218d854(struct FieldGroup4e4_0218d854* obj) {
    int delta = GameState::GetInstance()->GetEffectiveDeltaTime();
    int active = obj->f4e4 > 0;
    if (!active) {
        return;
    }
    obj->f4e4 -= delta;
    if (obj->f4e4 <= 0) {
        obj->f4e4 = 0;
    }
}
