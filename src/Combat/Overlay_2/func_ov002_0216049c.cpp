#include "GameState/GameState.h"
#include <globaldefs.h>

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" GameObject *GetPartyMemberBaseByIndex_0200ff1c(GameState *gameState, int index);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void func_ov002_02157480(void *arg0, int *arg1);

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *arg0, const char *arg1, int arg2);
extern "C" char data_ov002_0216da1d[];
#else
#define RG(u, j) (u)
#endif

static inline int inline_ov002_0216049c(int arg0) {
    return (arg0 >= 0 && arg0 <= 3) ? 1 : 0;
}

// USA: func_ov002_0216049c
extern "C" ARM void func_ov002_0216049c(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    GameState *var0 = GameState::GetInstance();
    GameObject *var1;
    int var2;
    int var3 = *(short *) (arg0 + RG(0x1c08, 0x1ad0));
    int var4[4];
    func_ov002_02157480(arg0, var4);

    if (arg2) {
        AppendFrameTag_02041c08(arg1, var3, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var3);

#if defined(jpn)
    func_02042638(arg1, data_ov002_0216da1d, 0x10);
#else
    int var5 = FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + 0x20), 0x1004);
    func_02041fac(arg1, var5, 0x10);
#endif

    for (int var6 = 0; var6 < 4; var6++) {
        var2 = var4[var6];
        if (!inline_ov002_0216049c(var2)) continue;
        var1 = GetPartyMemberBaseByIndex_0200ff1c(var0, var2);
        if (var1 == NULL) return;
        if (var6 != 0) {
            AppendText_02042058(arg1, *(const char **) (arg0 + 0x1000 + RG(0xbdc, 0xaa4)));
        }
        int var7 = func_ov002_02159774(arg0, var2, 0, 1, 1);
        func_02041e70(arg1, var7);
        AppendMenuEntry_02041b70(arg1, var6, *(const char **) ((char *) var1 + 0x134));
        func_02041e70(arg1, 0xf);
    }
}
