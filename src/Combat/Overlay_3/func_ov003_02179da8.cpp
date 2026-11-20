#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" short CountItemInBags_02086bf4(char* party, int itemId);

// USA: func_ov003_02179da8
extern "C" ARM int func_ov003_02179da8(void* arg0, int arg1) {
    GameState* var0 = GameState::GetInstance();
    void* var1 = GetParty_02010828(var0);
    int var2 = 1;
    if (arg1 != 0) {
        short var3 = *(short*)((char*)arg0 + 0x18);
        var2 = CountItemInBags_02086bf4((char*)var1, var3);
    }
    unsigned short var4 = *(unsigned short*)((char*)arg0 + 0x1a);
    unsigned int var5 = *(unsigned int*)((char*)var1 + 0xf6c);
    if (var5 + var4 > 9999999) {
        return 2;
    }
    if (var2 == 1) {
        return 1;
    }
    return (var5 + var4 * 2 > 9999999) ? 1 : 0;
}
