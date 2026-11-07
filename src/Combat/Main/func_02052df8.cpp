#include <globaldefs.h>

struct Struct_02052df8_2 {
    char unknown_0_[0x488];
    short equippedItems_488_[1];
};
struct Struct_02052df8 {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_02052df8_2* pPartyMemberData_150_;
};

// USA: GetEquippedItem_02052df8
extern "C" ARM int GetEquippedItem_02052df8(struct Struct_02052df8* gameObject, int slot) {
    struct Struct_02052df8_2* memberData = gameObject->pPartyMemberData_150_;
    return memberData ? memberData->equippedItems_488_[slot] : -1;
}
