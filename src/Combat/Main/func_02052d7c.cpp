#include <globaldefs.h>


#if defined(jpn)
enum { Enum_02052d7c_336 = 0x144 };
#else
enum { Enum_02052d7c_336 = 0x150 };
#endif

extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);
extern "C" void* GetFlagManager_0205ec34(void);

struct Struct_02052d7c {
    unsigned char unknown_0_[Enum_02052d7c_336];
    char* pPartyMemberData_150_;
};

// USA: SetEquippedItem_02052d7c
extern "C" ARM void SetEquippedItem_02052d7c(struct Struct_02052d7c* gameObject, int slot, short itemId) {
    char* memberData = gameObject->pPartyMemberData_150_;
    if (memberData == 0) return;
    short currentItemId = *(short*)(memberData + slot * 2 + 0x400 + 0x88);
    if (itemId == currentItemId) return;

    if (slot != 7 && slot != 8) {
        void* flagManager = GetFlagManager_0205ec34();
        SetFlag_0206df6c(flagManager, (unsigned char*)flagManager + 0x8c, 0x113f, 1);
    }

    memberData = gameObject->pPartyMemberData_150_;
    *(short*)(memberData + slot * 2 + 0x400 + 0x88) = itemId;
    if (slot != 9) return;

    memberData = gameObject->pPartyMemberData_150_;
    if (memberData != 0) {
        memberData[0x56e] = 1;
    }
}
