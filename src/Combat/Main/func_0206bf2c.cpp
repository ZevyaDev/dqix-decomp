#include <globaldefs.h>

#include "Combat/WorkRecord.h"
#include "std_library_functions.h"


// USA: InitNPCPlacement_0206bf2c
extern "C" ARM void InitNPCPlacement_0206bf2c(struct NPCPlacement_0206bf2c* placement) {
    placement->npcId_0_ = 0;
    placement->unknown_2_ = 0;
    placement->unknown_4_ = 0;
    placement->unknown_5_ = 0;
    placement->unknown_7_ = 0;
    placement->unknown_8_ = 0;
    placement->unknown_a_0_ = 0;
    placement->unknown_a_2_ = 0;
    placement->unknown_a_3_ = 0;
    placement->unknown_a_6_ = 0;
    placement->unknown_a_7_ = 0;
    placement->unknown_c_ = 0;
    placement->unknown_b_ = 0;
    placement->unknown_1e_ = 0;
    memset(placement->unknown_24_, 0, sizeof(placement->unknown_24_));
    placement->unknown_1f_ = 0;
    placement->unknown_34_ = 0;
    placement->unknown_38_ = 0x7a;
    unsigned int noQuestId = placement->unknown_38_ - 0x7b;
    placement->unknown_3c_ = 0;
    placement->unknown_40_ = 0;
    placement->unknown_44_ = 0;
    placement->unknown_46_ = (unsigned short)noQuestId;
    memset(placement->unknown_10_, 0, sizeof(placement->unknown_10_));
    placement->unknown_1c_ = 0;
    memset(placement->unknown_48_, 0, sizeof(placement->unknown_48_));
    placement->unknown_54_ = 0;
    placement->unknown_58_ = 0;
    placement->unknown_5c_ = 0;
    placement->unknown_60_ = 0;
    placement->unknown_20_ = 0;
    placement->pPrevious_64_ = 0;
    placement->pNext_68_ = 0;
    placement->unknown_6c_ = 0;
    placement->unknown_70_ = 0;
}
