#include <globaldefs.h>

struct Struct_ov001_02165880_6 { char unknown_0_[0x1c]; char* pActorStates_1c_; };
extern struct Struct_ov001_02165880_6 data_ov001_02165880;

// USA: GetEventActorState_ov001_0215ab20
extern "C" ARM int GetEventActorState_ov001_0215ab20(int actorIndex) {
    if (actorIndex < 0 || actorIndex >= 0x18) return 0;
    return (int)(data_ov001_02165880.pActorStates_1c_ + actorIndex * 0x588);
}
