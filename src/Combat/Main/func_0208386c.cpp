#include <globaldefs.h>
struct PartyMemberData_02061c04_22 { unsigned char unknown_0_[0x454]; short heldItems_454_[8]; };
// USA: RemoveHeldItemByIndex_0208386c
extern "C" ARM void RemoveHeldItemByIndex_0208386c(struct PartyMemberData_02061c04_22* memberData, int index) {
    if (index < 0) return;
    if (index >= 8) return;
    memberData->heldItems_454_[index] = -1;
    for (; index < 7; index++) {
        memberData->heldItems_454_[index] = memberData->heldItems_454_[index + 1];
        memberData->heldItems_454_[index + 1] = -1;
    }
}
