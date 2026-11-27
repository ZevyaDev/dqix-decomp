#include <globaldefs.h>
#include "Combat/ActorAction.h"

// USA: ResetLadderAction_02038508
extern "C" ARM void ResetLadderAction_02038508(struct LadderAction_02037d10* ladderAction) {
    ladderAction->unknown_0_ = 0;
    ladderAction->unknown_1_ = 0;
    ladderAction->unknown_2_ = 0;
    ladderAction->unknown_3_ = 0;
    ladderAction->unknown_4_ = 0;
    ladderAction->unknown_6_ = 0;
    ladderAction->unknown_8_ = 0;
    ladderAction->unknown_a_ = 0;
    ladderAction->unknown_48_ = 0;
    ladderAction->unknown_4c_ = 0;
    ladderAction->unknown_50_ = 0;
    ladderAction->isPartyOrderRebuildPending_52_ = 0;
    ladderAction->unknown_53_ = 1;
    ladderAction->unknown_54_ = 0x64;
    ladderAction->unknown_58_ = 0;
    ladderAction->unknown_5c_ = 0;
    ladderAction->unknown_60_ = 0;
    ladderAction->unknown_c_.unknown_0_[0] = 0; ladderAction->unknown_c_.unknown_0_[1] = 0; ladderAction->unknown_c_.unknown_0_[2] = 0;
    ladderAction->unknown_18_.unknown_0_[0] = 0; ladderAction->unknown_18_.unknown_0_[1] = 0; ladderAction->unknown_18_.unknown_0_[2] = 0;
    ladderAction->unknown_24_.unknown_0_[0] = 0; ladderAction->unknown_24_.unknown_0_[1] = 0; ladderAction->unknown_24_.unknown_0_[2] = 0;
    ladderAction->unknown_30_.unknown_0_[0] = 0; ladderAction->unknown_30_.unknown_0_[1] = 0; ladderAction->unknown_30_.unknown_0_[2] = 0;
    ladderAction->unknown_3c_.unknown_0_[0] = 0; ladderAction->unknown_3c_.unknown_0_[1] = 0; ladderAction->unknown_3c_.unknown_0_[2] = 0;
}
