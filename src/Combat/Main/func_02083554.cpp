#include <globaldefs.h>
struct ItemData_0206f81c_8 { unsigned char unknown_0_[0x18]; short itemId_18_; unsigned char unknown_1a_[6]; };
struct PartyMemberData_0206f81c { unsigned char unknown_0_[0x194]; struct ItemData_0206f81c_8 equipment_194_[11]; };
// USA: FindEquippedItem_02083554
extern "C" ARM struct ItemData_0206f81c_8* FindEquippedItem_02083554(struct PartyMemberData_0206f81c* memberData, int itemId) {
    int i;
    for (i = 0; i < 0xb; i++) {
        if (itemId == memberData->equipment_194_[i].itemId_18_) {
            return &memberData->equipment_194_[i];
        }
    }
    return 0;
}
