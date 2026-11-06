#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int func_020ddb20(unsigned int* arg0);
extern "C" void* GetParty_02010828(GameState* gameState);

struct Struct_02061c04_23;
extern "C" int func_020a0a08(struct Struct_02061c04_23* arg0, int arg1, int arg2);

extern "C" int GetBattleRecords_020ac4c0(void* records);

struct Struct_020a0504;
extern "C" void func_020a0504(struct Struct_020a0504* arg0, unsigned int arg1);

extern "C" int SetBattleRecords_020ac494(void* records);

// USA: func_020dddcc
extern "C" ARM int func_020dddcc(void* arg0) {
    char var0[0xb0];
    if (!func_020ddb20((unsigned int*)arg0)) {
        return 0;
    }
    GameState* var1 = GameState::GetInstance();
    void* var2 = GetParty_02010828(var1);
    short var3 = *(short*)((char*)arg0 + 0x18);
    if (!func_020a0a08((struct Struct_02061c04_23*)var2, var3, 1)) {
        return 0;
    }
    int var4 = *(int*)((char*)arg0 + 0x8);
    if ((unsigned int)var4 >> 31) {
        GetBattleRecords_020ac4c0(var0);
        func_020a0504((struct Struct_020a0504*)var0, 1);
        SetBattleRecords_020ac494(var0);
    }
    return 1;
}
