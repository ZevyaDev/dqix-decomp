#include <globaldefs.h>

struct Struct_02052e2c_2 {
    char unknown_0_[0x488];
    short appearance_488_[1];
};
struct Struct_02052e2c {
#if defined(jpn)
    char unknown_0_[0x144];
#else
    char unknown1_0_[0x150];
#endif
    struct Struct_02052e2c_2* pPartyMemberData_150_;
};

// USA: GetAppearance_02052e2c
extern "C" ARM short* GetAppearance_02052e2c(struct Struct_02052e2c* gameObject) {
    struct Struct_02052e2c_2* memberData = gameObject->pPartyMemberData_150_;
    return memberData ? &memberData->appearance_488_[0] : NULL;
}
