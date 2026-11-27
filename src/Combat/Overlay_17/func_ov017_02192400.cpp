#if defined(jpn)
enum { Enum_ov017_02192400_17500 = 0x41ac };
#else
enum { Enum_ov017_02192400_17500 = 0x445c };
#endif

#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void func_ov017_021923e0(void* arg0, unsigned int arg1);

struct Struct_ov017_021d619e {
    short objectIndices_0_[8];
};
struct Struct_ov017_021d6186 {
    signed char polygonIDs_0_[8];
};
extern Struct_ov017_021d619e data_ov017_021d619e;
extern Struct_ov017_021d6186 data_ov017_021d6186;

// USA: RestorePartyMemberPolygonIDs_ov017_02192400
extern "C" ARM void RestorePartyMemberPolygonIDs_ov017_02192400(unsigned char* gameResources, int memberIndex) {
    int isPartyMember;
    if (memberIndex >= 0 && memberIndex <= 3) {
        isPartyMember = 1;
    } else {
        isPartyMember = 0;
    }
    if (!isPartyMember) {
        return;
    }

    GameState* gameState = GameState::GetInstance();
    Struct_ov017_021d619e partObjectIndices = data_ov017_021d619e;
    partObjectIndices.objectIndices_0_[0] = memberIndex;
    partObjectIndices.objectIndices_0_[1] = memberIndex * 0xc + 0x13;
    partObjectIndices.objectIndices_0_[2] = memberIndex * 0xc + 0x14;
    partObjectIndices.objectIndices_0_[3] = memberIndex * 0xc + 0x15;
    partObjectIndices.objectIndices_0_[4] = memberIndex * 0xc + 0x1b;
    partObjectIndices.objectIndices_0_[5] = memberIndex * 0xc + 0x1c;
    partObjectIndices.objectIndices_0_[6] = memberIndex * 0xc + 0x1d;
    signed char* savedPolygonIDs = (signed char*)(gameResources + Enum_ov017_02192400_17500) + memberIndex * 11;

    Struct_ov017_021d6186 polygonIDs = data_ov017_021d6186;
    polygonIDs.polygonIDs_0_[0] = savedPolygonIDs[0];
    polygonIDs.polygonIDs_0_[1] = savedPolygonIDs[1];
    polygonIDs.polygonIDs_0_[2] = savedPolygonIDs[2];
    polygonIDs.polygonIDs_0_[3] = savedPolygonIDs[3];
    polygonIDs.polygonIDs_0_[4] = savedPolygonIDs[7];
    polygonIDs.polygonIDs_0_[5] = savedPolygonIDs[8];
    polygonIDs.polygonIDs_0_[6] = savedPolygonIDs[9];

    int i;
    for (i = 0; partObjectIndices.objectIndices_0_[i] > -1; i++) {
        GameObject* part = gameState->GetGameObjectByIndex(partObjectIndices.objectIndices_0_[i]);
        if (part && polygonIDs.polygonIDs_0_[i] >= 0) {
            func_ov017_021923e0(part, polygonIDs.polygonIDs_0_[i]);
        }
    }
}
