#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void* GetBattleScene_ov000_02160130(void);

struct Struct_ov025_021ef9a8 { int unknown_0_; int unknown_4_; int unknown_8_; int unknown_c_; int unknown_10_; int unknown_14_; };
extern "C" void ResetBACTCommandState_ov025_021e3158(struct Struct_ov025_021ef9a8* state);

extern int data_ov025_021ef988;
extern struct Struct_ov025_021ef9a8 data_ov025_021ef9a8;

struct Struct_ov025_021e30e8 { char unknown_0_[8]; unsigned int unknown_8_; unsigned char unknown_c_; };

// USA: RunBACTWaitCommand_ov025_021e30e8
extern "C" ARM int RunBACTWaitCommand_ov025_021e30e8(struct Struct_ov025_021e30e8* command) {
#if defined(jpn)
 enum {Enum_ov025_021e30e8_28624=0x71c0};
#else
 enum {Enum_ov025_021e30e8_28624=0x6fd0};
#endif
    GameState* var0 = GameState::GetInstance();
    if (command->unknown_8_ <= *(unsigned int*)((char*)&data_ov025_021ef988 + 0x34)) {
        if (command->unknown_c_ != 0) {
            void* var1 = GetBattleScene_ov000_02160130();
            *(int*)((char*)var1 + Enum_ov025_021e30e8_28624) = command->unknown_8_;
        }
        ResetBACTCommandState_ov025_021e3158(&data_ov025_021ef9a8);
        return 1;
    }
    int* var2 = &data_ov025_021ef988 + 13;
    *var2 += var0->GetEffectiveDeltaTime();
    return 0;
}
