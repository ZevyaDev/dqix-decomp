#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" unsigned char GetPartyOrder_020114ec(char* gameState, void* outPartyOrder);
extern "C" void* FindPartyMemberPanel_ov000_02161318(void* battleUI, int memberIndex);

struct Struct_ov000_02183650 {
    signed char unknown_0_[4];
};

extern Struct_ov000_02183650 data_ov000_02183650;

// USA: func_ov000_0217edd4
extern "C" ARM void func_ov000_0217edd4(void* arg0, signed char* arg1, signed char* arg2) {
    Struct_ov000_02183650 var0 = data_ov000_02183650;
    signed char var1[4];
    int var2 = (signed char)GetPartyOrder_020114ec((char*)GameState::GetInstance(), var1);
    memcpy(&var0, var1, var2);
    *arg2 = 0;
    for (int var3 = 0; var3 < var2; var3++) {
        if (FindPartyMemberPanel_ov000_02161318(arg0, var0.unknown_0_[var3]) != NULL) {
            arg1[*arg2] = var0.unknown_0_[var3];
            (*arg2)++;
        }
    }
}
