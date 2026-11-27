#include <globaldefs.h>

#include "std_library_functions.h"

#if defined(jpn)
enum { Enum_020830cc_2128 = 0x7b8 };
#else
enum { Enum_020830cc_2128 = 0x850 };
#endif

struct Struct_02082fa8 { unsigned int unknown_0_, unknown_4_, unknown_8_; };

struct Struct_02082cdc_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};

struct PattyMember_020830cc_2 {
    unsigned char unknown_0_;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 1;
    unsigned char unknown_1_5_ : 3;
    unsigned char levels_2_[13];
    unsigned char revocationCounts_f_[13];
    unsigned int experience_1c_[13];
    unsigned int vocation_50_;
    unsigned short unknown_54_;
    unsigned char unknown_56_[2];
    struct Struct_02082fa8 seedBonuses_58_[13];
    unsigned short unknown_f4_;
    unsigned char unknown_f6_[27];
    unsigned char learnedSpells_111_[9];
    unsigned char learnedSkillEntries_11a_[0x24];
    unsigned char unknown_13e_;
    unsigned char unknown_13f_0_ : 3;
    unsigned char unknown_13f_3_ : 5;
    unsigned char name_140_[0xc];
    struct Struct_02082cdc_2 unknown_14c_[5];
    unsigned char unknown_160_[0x1c];
    unsigned char unknown_17c_[0xc0];
};

struct PartyMemberData_020830cc {
    struct Struct_02082cdc_2 unknown_0_[4];
    unsigned char unknown_10_[0x8];
    unsigned int unknown_18_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned char unknown_20_[0x1c];
    char name_3c_[0x30];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
    unsigned short unknown_70_;
    unsigned short unknown_72_;
    unsigned char unknown_74_[4];
    unsigned int unknown_78_0_ : 30;
    unsigned int unknown_7b_6_ : 1;
    unsigned int unknown_7b_7_ : 1;
    unsigned char unknown_7c_[0x0c];
    unsigned char unknown_88_[0xb0];
    unsigned int experience_138_[13];
    unsigned short levels_16c_[13];
    unsigned char revocationCounts_186_[13];
    unsigned char unknown_193_[0x2d1];
    unsigned char unknown_464_[27];
    unsigned char unknown_47f_[9];
    unsigned char unknown_488_[0x1c];
    unsigned char unknown_4a4_[0xc0];
    unsigned short unknown_564_;
    unsigned char unknown_566_[4];
    unsigned char unknown_56a_;
    unsigned char unknown_56b_0_ : 4;
    unsigned char unknown_56b_4_ : 4;
    unsigned char unknown_56c_[Enum_020830cc_2128 - 0x56c];
    struct Struct_02082fa8 seedBonuses_850_[13];
    unsigned char learnedSkillEntries_8ec_[0x24];
    unsigned char learnedSpells_910_[9];
    unsigned char unknown_919_[0x94c - 0x919];
    unsigned int unknown_94c_;
    unsigned int vocation_950_;
    unsigned short unknown_954_;
};

extern "C" void func_02082fa8(struct Struct_02082fa8*, struct Struct_02082fa8*);
extern "C" void __clear(void*, unsigned int);
extern "C" void func_020426bc(void*, char*, int);

// USA: BuildPattyMember_020830cc
extern "C" ARM void BuildPattyMember_020830cc(struct PartyMemberData_020830cc* memberData, struct PattyMember_020830cc_2* pattyMember) {
    pattyMember->unknown_1_0_ = memberData->unknown_56a_;
    unsigned int vocation = memberData->vocation_950_;
    pattyMember->unknown_54_ |= 1 << vocation;
    pattyMember->vocation_50_ = vocation;
    pattyMember->unknown_54_ = memberData->unknown_954_;
    for (int i = 0; i < 13; i++) {
        pattyMember->levels_2_[i] = memberData->levels_16c_[i];
        pattyMember->revocationCounts_f_[i] = memberData->revocationCounts_186_[i];
        pattyMember->experience_1c_[i] = memberData->experience_138_[i];
    }
    for (int i = 0; i < 13; i++) {
        func_02082fa8(&pattyMember->seedBonuses_58_[i], &memberData->seedBonuses_850_[i]);
    }
    pattyMember->unknown_f4_ = memberData->unknown_564_;
    for (int i = 0; i < 27; i++) {
        pattyMember->unknown_f6_[i] = memberData->unknown_464_[i];
    }
    memcpy(pattyMember->learnedSpells_111_, memberData->learnedSpells_910_, 9);
    memcpy(pattyMember->learnedSkillEntries_11a_, memberData->learnedSkillEntries_8ec_, 0x24);
    unsigned int memberFlags = memberData->unknown_18_;
    unsigned char* pattyMemberFlags = &pattyMember->unknown_13e_;
    if (memberFlags & 1) {
        *pattyMemberFlags |= 1;
    }
    if (memberFlags & 2) {
        *pattyMemberFlags |= 2;
    }
    if (memberFlags & 4) {
        *pattyMemberFlags |= 4;
    }
#if defined(jpn)
    memcpy(pattyMember->name_140_, memberData->name_3c_, 0xc);
#else
    char nameGlyphs[0xc];
    __clear(nameGlyphs, 0xc);
    func_020426bc(memberData->name_3c_, nameGlyphs, 1);
    memcpy(pattyMember->name_140_, nameGlyphs, 0xc);
#endif
    pattyMember->unknown_1_4_ = (unsigned short)memberData->unknown_7b_6_;
    struct Struct_02082cdc_2* packedStats = pattyMember->unknown_14c_;
    packedStats[0].unknown_0_0_ = memberData->unknown_0_[0].unknown_0_0_;
    packedStats[0].unknown_1_2_ = memberData->unknown_0_[0].unknown_1_2_;
    packedStats[0].unknown_2_4_ = memberData->unknown_0_[0].unknown_2_4_;
    packedStats[1].unknown_0_0_ = memberData->unknown_0_[1].unknown_0_0_;
    packedStats[1].unknown_1_2_ = memberData->unknown_0_[1].unknown_1_2_;
    packedStats[1].unknown_2_4_ = memberData->unknown_0_[1].unknown_2_4_;
    packedStats[2].unknown_0_0_ = memberData->unknown_0_[2].unknown_0_0_;
    packedStats[2].unknown_1_2_ = memberData->unknown_1c_;
    packedStats[2].unknown_2_4_ = memberData->unknown_1e_;
    packedStats[3].unknown_0_0_ = memberData->unknown_6c_;
    packedStats[3].unknown_1_2_ = memberData->unknown_6e_;
    packedStats[3].unknown_2_4_ = memberData->unknown_70_;
    packedStats[4].unknown_0_0_ = memberData->unknown_72_;
    packedStats[4].unknown_1_2_ = memberData->unknown_0_[3].unknown_0_0_;
    memcpy(pattyMember->unknown_160_, memberData->unknown_488_, 0x1c);
    pattyMember->unknown_1_5_ = memberData->unknown_56b_0_;
    pattyMember->unknown_13f_0_ = memberData->unknown_56b_4_;
    memcpy(pattyMember->unknown_17c_, memberData->unknown_4a4_, 0xc0);
    pattyMember->unknown_13f_3_ = memberData->unknown_94c_;
}
