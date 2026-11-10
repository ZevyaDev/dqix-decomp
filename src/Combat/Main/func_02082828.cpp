#include <globaldefs.h>
#include <std_library_functions.h>

struct Struct_02082828_5 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_02082cdc {
    Struct_02082828_5 unknown_0_[3];
};
struct Struct_02082828 {
    unsigned char unknown_0_[0x16];
    unsigned char unknown_16_;
    unsigned char unknown_17_;
};
struct Struct_020827c4 {
    unsigned char unknown_0_[0x1c];
};
struct Struct_02082828_2;
struct Struct_02082828_3 {
    unsigned int unknown_0_[10];
    short unknown_28_;
    unsigned short unknown_2a_;
};
struct PartyMemberData_02082828_4 {
    Struct_02082828_5 unknown_0_[6];
    unsigned int unknown_18_;
    unsigned short unknown_1c_;
    unsigned short unknown_1e_;
    unsigned char unknown_20_;
    Struct_02082828 unknown_21_;
    unsigned char unknown_39_[3];
    char name_3c_[48];
    unsigned short unknown_6c_;
    unsigned short unknown_6e_;
    unsigned short unknown_70_;
    unsigned short unknown_72_;
    unsigned short unknown_74_;
    unsigned short unknown_76_;
    unsigned int unknown_78_;
    Struct_02082828 unknown_7c_;
    unsigned char unknown_94_[0xa4];
    unsigned int experience_138_[13];
    unsigned short levels_16c_[13];
    unsigned char revocationCounts_186_[13];
    unsigned char unknown_193_[0x161];
    Struct_02082828_3 unknown_2f4_[8];
    unsigned char heldItems_454_[16];
    unsigned char unknown_464_[27];
    unsigned char unknown_47f_[9];
    Struct_020827c4 unknown_488_;
    unsigned char unknown_4a4_[0xc0];
    unsigned short unknown_564_;
    unsigned short unknown_566_;
    short unknown_568_;
    unsigned char unknown_56a_;
    unsigned char unknown_56b_;
    unsigned char unknown_56c_;
    unsigned char unknown_56d_;
    unsigned char unknown_56e_;
#if defined(jpn)
    unsigned char unknown_56f_[0x7b8 - 0x56f];
#else
    unsigned char unknown1_56f_[0x850 - 0x56f];
#endif
    Struct_02082cdc unknown_850_[13];
    unsigned char learnedSkillEntries_8ec_[36];
    unsigned char learnedSpells_910_[9];
    unsigned char unknown_919_[3];
    Struct_02082828_5 unknown_91c_[6];
    unsigned char unknown_934_[22];
    unsigned short unknown_94a_;
    unsigned int unknown_94c_;
    unsigned int vocation_950_;
    unsigned short unknown_954_;
    unsigned short unknown_956_;
    short unknown_958_;
    unsigned short unknown_95a_;
    unsigned short unknown_95c_;
    short unknown_95e_;
    unsigned short unknown_960_;
    unsigned short unknown_962_;
};
extern "C" void func_020891cc(void*);
extern "C" void func_02082cdc(Struct_02082cdc*);
extern "C" void func_020827c4(Struct_020827c4*);
extern "C" void func_02082d38(Struct_02082828*, Struct_02082828*);
extern "C" void func_02083508(Struct_02082828_2*);
extern "C" void GetMACAddress_020c99ac(void*);
extern char data_020f1010[];
extern char data_020ef078[];

#if defined(jpn)
extern char data_020f1130[];
#endif

// USA: InitPartyMemberData_02082828
extern "C" ARM void InitPartyMemberData_02082828(PartyMemberData_02082828_4* memberData) {
    unsigned char i = 0;
    memberData->unknown_568_ = -1;
    for (i = 0; i < 13; i++) {
        memberData->levels_16c_[i] = 1;
        memberData->revocationCounts_186_[i] = 0;
        memberData->experience_138_[i] = 0;
    }
    memberData->unknown_94c_ = 5;
    memberData->vocation_950_ = 0;
    memberData->unknown_954_ = 0;
    memset(memberData->name_3c_, 0, 48);
    memberData->unknown_6c_ = 1;
    memberData->unknown_6e_ = 0;
    memberData->unknown_70_ = 0;
    memberData->unknown_72_ = 0;
    memberData->unknown_74_ = 0;
    memberData->unknown_78_ &= ~0x3ff;
    memberData->unknown_78_ &= ~0x40000000;
    memset(memberData->unknown_7c_.unknown_0_, 100, 22);
    memset(memberData->unknown_0_, 0, 24);
    memberData->unknown_0_[2].unknown_1_2_ = 1;
    memset(memberData->unknown_91c_, 0, 24);
    memberData->unknown_91c_[2].unknown_1_2_ = 1;
    memset(memberData->unknown_934_, 100, 22);
    func_020891cc(memberData->unknown_94_);
    for (int i = 0; i < 13; i++) func_02082cdc(&memberData->unknown_850_[i]);
    func_020827c4(&memberData->unknown_488_);
    memset(memberData->unknown_4a4_, -1, 192);
    memberData->unknown_91c_[0].unknown_0_0_ = 0;
    memberData->unknown_0_[0].unknown_0_0_ = memberData->unknown_91c_[0].unknown_0_0_;
    memberData->unknown_91c_[0].unknown_2_4_ = 0;
    memberData->unknown_0_[0].unknown_2_4_ = memberData->unknown_91c_[0].unknown_2_4_;
    memberData->unknown_91c_[0].unknown_1_2_ = 0;
    memberData->unknown_0_[0].unknown_1_2_ = memberData->unknown_91c_[0].unknown_1_2_;
    memberData->unknown_91c_[1].unknown_0_0_ = 0;
    memberData->unknown_0_[1].unknown_0_0_ = memberData->unknown_91c_[1].unknown_0_0_;
    memberData->unknown_91c_[1].unknown_1_2_ = 0;
    memberData->unknown_0_[1].unknown_1_2_ = memberData->unknown_91c_[1].unknown_1_2_;
    memberData->unknown_91c_[1].unknown_2_4_ = 0;
    memberData->unknown_0_[1].unknown_2_4_ = memberData->unknown_91c_[1].unknown_2_4_;
    memberData->unknown_91c_[2].unknown_0_0_ = 0;
    memberData->unknown_0_[2].unknown_0_0_ = memberData->unknown_91c_[2].unknown_0_0_;
    memberData->unknown_91c_[2].unknown_1_2_ = 1;
    memberData->unknown_0_[2].unknown_1_2_ = memberData->unknown_91c_[2].unknown_1_2_;
    memberData->unknown_91c_[2].unknown_2_4_ = 0;
    memberData->unknown_0_[2].unknown_2_4_ = memberData->unknown_91c_[2].unknown_2_4_;
    memberData->unknown_6c_ = memberData->unknown_0_[2].unknown_1_2_;
    memberData->unknown_6e_ = memberData->unknown_0_[2].unknown_2_4_;
    memberData->unknown_564_ = 0;
    memberData->unknown_56c_ = 0;
    memberData->unknown_56d_ = 0;
    memberData->unknown_56e_ = 0;
    memberData->unknown_1c_ = memberData->unknown_6c_;
    memberData->unknown_1e_ = memberData->unknown_6e_;
    func_02082d38(&memberData->unknown_21_, &memberData->unknown_7c_);
    memberData->unknown_18_ = 0;
    memberData->unknown_20_ = 0;
    memset(memberData->heldItems_454_, -1, 16);
    memset(memberData->unknown_464_, 0, 27);
    func_02083508((Struct_02082828_2*)memberData);
    memset(memberData->learnedSkillEntries_8ec_, 0, 36);
    memset(memberData->learnedSpells_910_, 0, 9);
    for (unsigned char i = 0; i < 8; i++) {
        memberData->unknown_2f4_[i].unknown_0_[0] = 0;
        memberData->unknown_2f4_[i].unknown_0_[1] = 0;
        memberData->unknown_2f4_[i].unknown_0_[2] = 0;
        memberData->unknown_2f4_[i].unknown_0_[3] = 0;
        memberData->unknown_2f4_[i].unknown_0_[4] = 0;
        memberData->unknown_2f4_[i].unknown_0_[5] = 0;
        memberData->unknown_2f4_[i].unknown_0_[6] = 0;
        memberData->unknown_2f4_[i].unknown_0_[7] = 0;
        memberData->unknown_2f4_[i].unknown_0_[8] = 0;
        memberData->unknown_2f4_[i].unknown_0_[9] = 0;
        memberData->unknown_2f4_[i].unknown_28_ = -1;
    }
    unsigned char var3[6];
#if defined(jpn)
    char defaultName[11];
    GetMACAddress_020c99ac(var3);
    char firstLetter[] = "\x82\x60";
    char secondLetter[] = "\x82\x60";
    signed char firstLetterIndex = (var3[0] + var3[1] + var3[2]) % 26;
    firstLetter[1] += firstLetterIndex;
    signed char secondLetterIndex = (var3[3] + var3[4] + var3[5]) % 26;
    secondLetter[1] += secondLetterIndex;
    sprintf(defaultName, data_020f1130, firstLetter, secondLetter);
#else
    char defaultName[18];
    GetMACAddress_020c99ac(var3);
    int firstLetterIndex = (var3[0] + var3[2] + var3[4]) % 26;
    int secondLetterIndex = (var3[1] + var3[3] + var3[5]) % 26;
    sprintf(defaultName, data_020f1010, (signed char)(firstLetterIndex + 65), (signed char)(secondLetterIndex + 65));
#endif
    sprintf(memberData->name_3c_, data_020ef078, defaultName);
    memberData->unknown_956_ = 0;
    memberData->unknown_958_ = -1;
    memberData->unknown_95a_ = 0;
    memberData->unknown_95c_ = 0;
    memberData->unknown_95e_ = -1;
    memberData->unknown_960_ = 0;
    memberData->unknown_962_ = 0;
    memberData->unknown_56b_ &= ~15;
    memberData->unknown_56b_ &= ~240;
}
