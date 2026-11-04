#include <globaldefs.h>
#include <std_library_functions.h>
#include "Resource/CharacterCreationUI.h"

#if defined(jpn)
extern "C" void* __clear(void* arg0, int arg1);
extern "C" int func_02001aec(const void* arg0, const void* arg1, unsigned int arg2);
extern char data_ov009_0218bc59[];

// JPN: func_ov009_0218b200
extern "C" ARM void func_ov009_0218b200(Struct_ov009_021842a0* arg0) {
    char var0[3];
    __clear(var0, 3);
    for (int var1 = 4; var1 >= 0; var1--) {
        memcpy(var0, &arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], 2);
        if (func_02001aec(var0, data_ov009_0218bc59, 2) != 0) {
            char var2[3];
            __clear(var2, 3);
            memcpy(var2, &arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], 2);
            memcpy(&arg0->unknown_d74_[arg0->unknown_da3_][var1 * 2], data_ov009_0218bc59, 2);
            arg0->unknown_d8a_[arg0->unknown_da3_] = var1;
            return;
        }
    }
}
#endif
