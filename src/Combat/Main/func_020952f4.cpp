#include <globaldefs.h>
#include "std_library_functions.h"
#include "GameState/GameState.h"

#if defined(jpn)
struct Struct_020952f4_2 {
    char unknown_0_[5];
    char unknown_5_[3];
};

struct Struct_020952f4 {
    char unknown_0_[8];
    Struct_020952f4_2* unknown_8_;
};

extern "C" Struct_020952f4* func_02012fe4();
extern "C" void __clear(void*, int);
extern "C" int func_0201079c(char* arg0);
extern "C" int func_ov017_0218d2c4(int arg0);
extern "C" int func_020d2ff0(const char* arg0);

// JPN: func_020952f4
extern "C" ARM int func_020952f4(char* arg0) {
    Struct_020952f4_2* var0 = func_02012fe4()->unknown_8_;
    if (var0 != NULL) {
        if (var0->unknown_5_[0] == 'F' || var0->unknown_5_[0] == 'f') {
            memcpy(arg0, var0->unknown_5_, 1);
        } else {
            GameState* var1 = GameState::GetInstance();
            char var2[2];
            __clear(var2, 2);
            var2[0] = func_ov017_0218d2c4(func_0201079c((char*)var1));
            memcpy(arg0, var0->unknown_5_, 3);
            strcat(arg0, var2);
        }
    }
    return func_020d2ff0(arg0);
}
#endif
