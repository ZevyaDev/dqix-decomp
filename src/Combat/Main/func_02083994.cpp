#include <globaldefs.h>
struct PartyMemberData_02083994 { unsigned char unknown_0_[0x454]; short heldItems_454_[8]; };
// USA: GetHeldItemCount_02083994
extern "C" ARM int GetHeldItemCount_02083994(struct PartyMemberData_02083994* memberData, int itemId) {
    int count;
    int i;
    if (itemId < 0) {
        return 0;
    }
    count = 0;
    for (i = 0; i < 8; i++) {
        short heldItemId = memberData->heldItems_454_[i];
        if (heldItemId < 0) {
            break;
        }
        if (heldItemId == itemId) {
            count++;
        }
    }
    return count;
}
