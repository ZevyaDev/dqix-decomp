#include <globaldefs.h>



struct LocalWireless_0202c1a4;
extern "C" int GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4*);
extern "C" void* GetFlagManager_0205ec34(void);
extern "C" void func_02010774(char* arg0, int arg1);
extern "C" void func_020107a8(char* arg0, int arg1);
extern "C" void func_020107dc(char* arg0, int arg1);
extern "C" void func_0206e080(char* arg0, int arg1);
extern "C" void func_0206e0d0(char* arg0, int arg1);
extern "C" void SetFlag_0206df6c(void* flagManager, unsigned char* flags, int flagIndex, int isSet);

struct Struct_ov017_021ce174 {
    char unknown_0_[4];
    unsigned char unknown_4_0_ : 7;
    unsigned char unknown_4_7_ : 1;
    short unknown_6_;
    unsigned short unknown_8_;
};

// USA: func_ov017_021ce174
extern "C" ARM void func_ov017_021ce174(void* arg0, struct Struct_ov017_021ce174* arg1, char* arg2, int arg3, struct LocalWireless_0202c1a4* arg4) {
    if (!arg1->unknown_4_7_) {
        if (GetOwnProtagonistObjectIndex_0202c1a4(arg4) == 0) {
            return;
        }
    }

    unsigned char* var0 = (unsigned char*)GetFlagManager_0205ec34();

    switch (arg1->unknown_4_0_) {
    case 0:
        func_02010774(arg2, arg1->unknown_6_);
        func_020107a8(arg2, 1);
        func_020107dc(arg2, 1);
        func_0206e080((char*)var0, var0[0x332]);
        break;
    case 1:
        func_020107a8(arg2, arg1->unknown_6_);
        func_020107dc(arg2, 1);
        func_0206e0d0((char*)var0, var0[0x332]);
        break;
    case 2:
        func_020107dc(arg2, arg1->unknown_6_);
        break;
    case 3:
        SetFlag_0206df6c(var0, var0 + 0x8c, arg1->unknown_8_, arg1->unknown_6_);
        break;
    case 4:
        SetFlag_0206df6c(var0, var0 + var0[0x332] * 0x1c + 0x3, arg1->unknown_8_, arg1->unknown_6_);
        break;
    case 5:
        SetFlag_0206df6c(var0, var0 + var0[0x332] * 0x1c + 0x10, arg1->unknown_8_, arg1->unknown_6_);
        break;
    default:
        break;
    }
}
