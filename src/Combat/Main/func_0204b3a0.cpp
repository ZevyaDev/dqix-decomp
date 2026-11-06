#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int CompareBytes_02001aec(void* left, void* right, int count);

typedef void (*Type_0204a984)(void*, int, int);
extern "C" void func_0204a984(int* arg0, Type_0204a984 arg1, char* arg2);

typedef void (*Type_0204abcc)(void*, int, int);
struct Struct_0204abcc;
struct Struct_0204abcc_2;
extern "C" void func_0204abcc(struct Struct_0204abcc* arg0, Type_0204abcc arg1, struct Struct_0204abcc_2* arg2);

typedef void (*Type_02020cb8)(void*, int, int);
extern "C" void func_0204adb4(unsigned char* arg0, Type_02020cb8 arg1, unsigned char* arg2);

struct BGScreenBlock_02020cb8_7 { int unknown_0_, unknown_4_, unknown_8_, unknown_c_; };
extern "C" void func_0204acb0(struct BGScreenBlock_02020cb8_7* arg0);

extern char data_020f0238;
extern char data_020f023d;
extern char data_020f0242;
extern int data_020f01f8[][4];
extern Type_0204abcc data_020f01b0[];
extern int data_020f0218[][4];

struct BGLayer_02020cb8_6 {
    unsigned char unknown_0_[0x1c];
    unsigned char isSubScreen_1c_0_ : 4;
    unsigned char bgIndex_1c_4_ : 4;
};

// USA: CopyBGBlockToVRAM_0204b3a0
extern "C" ARM void CopyBGBlockToVRAM_0204b3a0(struct BGLayer_02020cb8_6* layer, char* block) {
    char tag[5];

    if (block == 0) {
        return;
    }

    __clear(tag, 5);
    memcpy(tag, block, 5);

    if (CompareBytes_02001aec(tag, &data_020f0238, 4) == 0) {
        Type_0204a984 characterDataLoader = (Type_0204a984)data_020f01f8[layer->isSubScreen_1c_0_][layer->bgIndex_1c_4_];
        func_0204a984((int*)layer, characterDataLoader, block);
        return;
    }

    if (CompareBytes_02001aec(tag, &data_020f023d, 4) == 0) {
        Type_0204abcc paletteLoader = data_020f01b0[layer->isSubScreen_1c_0_];
        func_0204abcc((struct Struct_0204abcc*)((char*)layer + 0xc), paletteLoader, (struct Struct_0204abcc_2*)block);
        return;
    }

    if (CompareBytes_02001aec(tag, &data_020f0242, 4) == 0) {
        struct BGScreenBlock_02020cb8_7 screenBlock;
        func_0204acb0(&screenBlock);
        Type_02020cb8 screenDataLoader = (Type_02020cb8)data_020f0218[layer->isSubScreen_1c_0_][layer->bgIndex_1c_4_];
        func_0204adb4((unsigned char*)&screenBlock, screenDataLoader, (unsigned char*)block);
    }
}
