#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

#include "std_library_functions.h"

struct Struct_02083cbc {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct LevelEntry_02083cbc_2 {
    unsigned char unknown_0_[8];
    Struct_02083cbc levelStats_8_[3];
};

struct PartyMemberData_02083cbc_3 {
    unsigned char unknown_0_[IS_JPN ? 0x884 : 0x91c];
    Struct_02083cbc levelStats_91c_[3];
    unsigned char unknown_928_[0xc];
    unsigned char unknown_934_[0x16];
};

// USA: SetLevelStats_02083cbc
extern "C" ARM void SetLevelStats_02083cbc(void* memberData, void* levelEntry, void* arg2) {
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[0].unknown_0_0_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[0].unknown_0_0_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[0].unknown_1_2_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[0].unknown_1_2_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[0].unknown_2_4_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[0].unknown_2_4_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[1].unknown_0_0_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[1].unknown_0_0_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[1].unknown_1_2_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[1].unknown_1_2_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[1].unknown_2_4_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[1].unknown_2_4_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[2].unknown_0_0_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[2].unknown_0_0_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[2].unknown_1_2_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[2].unknown_1_2_;
    ((PartyMemberData_02083cbc_3*)memberData)->levelStats_91c_[2].unknown_2_4_ = ((LevelEntry_02083cbc_2*)levelEntry)->levelStats_8_[2].unknown_2_4_;
    memset(((PartyMemberData_02083cbc_3*)memberData)->unknown_934_, 100, 0x16);
    if (arg2 != NULL) {
        for (int i = 0; i < 0x16; i++) {
            ((PartyMemberData_02083cbc_3*)memberData)->unknown_934_[i] = ((unsigned char*)arg2)[i];
        }
    }
}
