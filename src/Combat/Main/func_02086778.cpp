#include <globaldefs.h>

extern "C" void* func_02086868(void*, void*);

struct PattyMember_02086778_2 {
    signed char id_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
    char unknown_1_[0x23c - 1];
};

struct Party_02086778 {
    char unknown_0_[0xf80];
    struct PattyMember_02086778_2 pattyMembers_f80_[13];
    unsigned char pattyMemberCount_2c8c_;
};

// USA: AddPattyMember_02086778
extern "C" ARM int AddPattyMember_02086778(void* party, struct PattyMember_02086778_2* pattyMember, unsigned char arg2, unsigned char arg3) {
    struct Party_02086778* roster = (struct Party_02086778*)party;
    signed char freeId = -1;
    signed char id = 0;
    int firstIndex = 0;
    for (id = 0; id < 16; id++) {
        bool isTaken = firstIndex;
        unsigned char i = firstIndex;
        for (; i < roster->pattyMemberCount_2c8c_; i++) {
            if (id == roster->pattyMembers_f80_[i].id_0_0_) {
                isTaken = true;
                break;
            }
        }
        if (!isTaken) {
            freeId = id;
            break;
        }
    }
    if (freeId < 0) {
        return 0;
    }
    pattyMember->id_0_0_ = freeId;
    pattyMember->unknown_0_6_ = arg2;
    pattyMember->unknown_0_7_ = arg3;
    func_02086868(&roster->pattyMembers_f80_[roster->pattyMemberCount_2c8c_], pattyMember);
    roster->pattyMemberCount_2c8c_++;
    return 1;
}