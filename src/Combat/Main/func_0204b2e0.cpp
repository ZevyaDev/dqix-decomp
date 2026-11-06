#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int CompareBytes_02001aec(void* left, void* right, int count);

extern "C" void func_0204a8f4(char* arg0, char* arg1);

struct Struct_0204ab4c;
struct Struct_0204ab4c_2;
extern "C" void func_0204ab4c(struct Struct_0204ab4c* arg0, struct Struct_0204ab4c_2* arg1);

struct BGScreenBlock_02020cb8_7 {
    int unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
};
extern "C" void func_0204acb0(struct BGScreenBlock_02020cb8_7* arg0);
extern "C" void func_0204ad88(void* arg0, void* arg1);

extern char data_020f0238;
extern char data_020f023d;
extern char data_020f0242;

// USA: FlushBGBlock_0204b2e0
extern "C" ARM void FlushBGBlock_0204b2e0(void* layer, char* block) {
    char tag[5];

    if (block == 0) {
        return;
    }

    __clear(tag, 5);
    memcpy(tag, block, 5);

    if (CompareBytes_02001aec(tag, &data_020f0238, 4) == 0) {
        func_0204a8f4((char*)layer, block);
        return;
    }

    if (CompareBytes_02001aec(tag, &data_020f023d, 4) == 0) {
        func_0204ab4c((struct Struct_0204ab4c*)((char*)layer + 0xc), (struct Struct_0204ab4c_2*)block);
        return;
    }

    if (CompareBytes_02001aec(tag, &data_020f0242, 4) == 0) {
        struct BGScreenBlock_02020cb8_7 screenBlock;
        func_0204acb0(&screenBlock);
        func_0204ad88(&screenBlock, block);
    }
}
