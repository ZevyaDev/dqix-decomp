#include <globaldefs.h>
extern "C" void* memset(void*, int, unsigned int);

struct Struct_02082cdc_2 {
    unsigned int unknown_0_0_ : 10;
    unsigned int unknown_1_2_ : 10;
    unsigned int unknown_2_4_ : 10;
    unsigned int unknown_3_6_ : 2;
};
struct Struct_02082cdc { Struct_02082cdc_2 unknown_0_[3]; };
struct Struct_020827c4 { char unknown_0_[0x1c]; };
struct PattyMember_0201099c_20 {
    signed char unknown_0_0_ : 6;
    unsigned char unknown_0_6_ : 1;
    unsigned char unknown_0_7_ : 1;
    unsigned char unknown_1_0_ : 4;
    unsigned char unknown_1_4_ : 1;
    unsigned char unknown_1_5_ : 3;
    unsigned char unknown_2_[13];
    unsigned char unknown_f_[13];
    int unknown_1c_[13];
    int unknown_50_;
    unsigned short unknown_54_;
    char unknown_56_[2];
    Struct_02082cdc unknown_58_[13];
    unsigned short unknown_f4_;
    unsigned char unknown_f6_[27];
    unsigned char unknown_111_[9];
    unsigned char unknown_11a_[36];
    unsigned char unknown_13e_;
    unsigned char unknown_13f_0_ : 3;
    unsigned char unknown_13f_3_ : 5;
    unsigned char unknown_140_[12];
    Struct_02082cdc_2 unknown_14c_[4];
    unsigned int unknown_15c_0_ : 10;
    unsigned int unknown_15d_2_ : 10;
    unsigned int unknown_15e_4_ : 12;
    Struct_020827c4 unknown_160_;
    unsigned char unknown_17c_[0xc0];
};
extern "C" void func_02082cdc(Struct_02082cdc*);
extern "C" void func_020827c4(Struct_020827c4*);

// USA: InitPattyMember_02086404
extern "C" ARM void InitPattyMember_02086404(PattyMember_0201099c_20* pattyMember) {
    pattyMember->unknown_0_0_ = -1;
    pattyMember->unknown_0_6_ = 0;
    pattyMember->unknown_1_0_ = 0;
    pattyMember->unknown_1_4_ = 0;
    for (int i = 0; i < 13; ++i) {
        pattyMember->unknown_1c_[i] = 0;
        pattyMember->unknown_2_[i] = 1;
        pattyMember->unknown_f_[i] = 0;
        func_02082cdc(&pattyMember->unknown_58_[i]);
    }
    pattyMember->unknown_50_ = 0;
    pattyMember->unknown_54_ = 0;
    pattyMember->unknown_f4_ = 0;
    memset(pattyMember->unknown_f6_, 0, sizeof(pattyMember->unknown_f6_));
    memset(pattyMember->unknown_111_, 0, sizeof(pattyMember->unknown_111_));
    memset(pattyMember->unknown_11a_, 0, sizeof(pattyMember->unknown_11a_));
    pattyMember->unknown_13e_ = 0;
    memset(pattyMember->unknown_140_, 0, sizeof(pattyMember->unknown_140_));
    pattyMember->unknown_14c_[0].unknown_0_0_ = 0;
    pattyMember->unknown_14c_[0].unknown_1_2_ = 0;
    pattyMember->unknown_14c_[0].unknown_2_4_ = 0;
    pattyMember->unknown_14c_[1].unknown_0_0_ = 0;
    pattyMember->unknown_14c_[1].unknown_1_2_ = 0;
    pattyMember->unknown_14c_[1].unknown_2_4_ = 0;
    pattyMember->unknown_14c_[2].unknown_0_0_ = 0;
    pattyMember->unknown_14c_[2].unknown_1_2_ = 1;
    pattyMember->unknown_14c_[2].unknown_2_4_ = 0;
    pattyMember->unknown_14c_[3].unknown_0_0_ = 1;
    pattyMember->unknown_14c_[3].unknown_1_2_ = 0;
    pattyMember->unknown_14c_[3].unknown_2_4_ = 0;
    pattyMember->unknown_15c_0_ = 0;
    pattyMember->unknown_15d_2_ = 0;
    func_020827c4(&pattyMember->unknown_160_);
    memset(pattyMember->unknown_17c_, -1, sizeof(pattyMember->unknown_17c_));
    pattyMember->unknown_1_5_ = 0;
    pattyMember->unknown_13f_0_ = 0;
    pattyMember->unknown_13f_3_ = 5;
}
