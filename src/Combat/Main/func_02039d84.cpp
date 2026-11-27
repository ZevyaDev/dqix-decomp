#include <globaldefs.h>
#include "Combat/ActorAction.h"
#include "World/Object3D.h"

struct Struct_02010604;

extern "C" int SetMotion_02033b88(struct Struct_02010604* object, int motion);

struct Struct_02039d84 {
    unsigned char unknown_0_[0xe0];
    unsigned char unknown_e0_;
};

// USA: StopLadderAction_02039d84
extern "C" ARM void StopLadderAction_02039d84(struct Struct_02039d84* object) {
    object->unknown_e0_ &= ~1;
    ((Object3D*)((unsigned char*)object))->DisableFlag(0x1190);
#if defined(jpn)
    ResetLadderAction_02038508((struct LadderAction_02037d10*)((char*)object + 0x260));
#else
    ResetLadderAction_02038508((struct LadderAction_02037d10*)((char*)object + 0x26c));
#endif
    SetMotion_02033b88((struct Struct_02010604*)object, 0);
}
