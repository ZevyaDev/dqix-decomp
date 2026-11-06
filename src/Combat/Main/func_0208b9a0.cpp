#include <globaldefs.h>

struct StringTable_0201099c_14;
extern "C" ARM void InitStringTable_020dfc40(struct StringTable_0201099c_14*);

struct Struct_0208b9a0;
extern "C" ARM void func_0208d82c(struct Struct_0208b9a0*);

struct BGLayer_02020cb8;
extern "C" ARM void InitBGLayer_0204af64(struct BGLayer_02020cb8*);

extern "C" ARM void InitSpriteSet_0205a444(char*);

// USA: func_0208b9a0
extern "C" ARM void func_0208b9a0(char* arg0, unsigned char arg1) {
    *(int*)(arg0 + 0x0) = 0;
    InitStringTable_020dfc40((struct StringTable_0201099c_14*)(arg0 + 0x4));
    func_0208d82c((struct Struct_0208b9a0*)(arg0 + 0x1c));
    *(unsigned char*)(arg0 + 0x3c) = 0;
    *(unsigned char*)(arg0 + 0x3d) = 0;
    InitBGLayer_0204af64((struct BGLayer_02020cb8*)(arg0 + 0x40));
    InitSpriteSet_0205a444(arg0 + 0x60);
    *(int*)(arg0 + 0xb4) = 0;
    *(int*)(arg0 + 0xb8) = (*(volatile unsigned int*)0x04001000 & 0x1f00) >> 8;
    *(int*)(arg0 + 0xbc) = -1;
    *(int*)(arg0 + 0xc0) = -1;
    *(float*)(arg0 + 0xcc) = 1.0f;
    *(int*)(arg0 + 0xc8) = 0;
    *(short*)(arg0 + 0xd2) = -1;
    *(unsigned char*)(arg0 + 0xd4) = 0;
    *(unsigned char*)(arg0 + 0xd5) = 0;
    *(unsigned char*)(arg0 + 0xd6) = 0;
    *(unsigned char*)(arg0 + 0xd7) = 0;
    *(unsigned char*)(arg0 + 0xd8) = 1;
    *(unsigned char*)(arg0 + 0xd9) = 0;
    *(short*)(arg0 + 0xda) = 0;
    *(unsigned char*)(arg0 + 0xdc) = 1;
    *(unsigned char*)(arg0 + 0xdd) = 0;
    *(unsigned char*)(arg0 + 0xde) = 0;
    *(unsigned char*)(arg0 + 0xdf) = arg1;
    *(unsigned char*)(arg0 + 0xe0) = 0;
}
