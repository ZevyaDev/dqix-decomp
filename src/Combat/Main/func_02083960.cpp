#include <globaldefs.h>
struct PartyMemberData_0207d300 { unsigned char unknown_0_[0x454]; short heldItems_454_[8]; };
// USA: CountHeldItems_02083960
extern "C" ARM int CountHeldItems_02083960(struct PartyMemberData_0207d300* memberData) {
    int count = 0;
    int i;
    for (i = 0; i < 8; i++) {
        if (memberData->heldItems_454_[i] > 0) {
            count++;
        }
    }
    return count;
}
