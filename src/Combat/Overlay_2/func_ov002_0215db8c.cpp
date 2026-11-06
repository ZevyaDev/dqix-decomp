#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
extern "C" void func_02042638(char *arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;

extern "C" void func_ov002_02157424(void *arg0, int *arg1);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);
extern "C" void AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" void AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" const char *FindStringInTable_020e0434(Struct_0201099c_3 *stringTable, int stringId);
extern "C" void func_02041fac(char *arg0, int arg1, int arg2);
extern "C" void func_02041e70(char *arg0, int arg1);
extern "C" void AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);
extern "C" void AppendText_02042058(char *buffer, const char *text);

// USA: func_ov002_0215db8c
extern "C" ARM void func_ov002_0215db8c(char *arg0, char *arg1, int arg2) {
    int var0[7];
    if (arg1 == 0) return;
    void *var1  = GameState::GetInstance();
    short var2   = *(short *) (arg0 + RG(0x1bf0, 0x1ab8));
    short var3 = 0x76d;
    func_ov002_02157424(arg0, var0);
    if (arg2) AppendFrameTag_02041c08(arg1, var2, 8, 5, 5, 5);
    AppendCursorTag_02041ea4(arg1, var2);
    func_02041fac(
        arg1, (int) FindStringInTable_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x76c), 0x10);
    int var4;
    int var5 = *(int *) (arg0 + RG(0x1c38, 0x1afc)) + 1;
    int var6;
    for (var6 = 0; var6 < var5; var6++) {
        var4   = var0[var6];
        int var7 = (var4 >= 0 && var4 <= 3);
        if (var7) {
            unsigned char *var8 = (unsigned char *)((GameState*)var1)->GetPartyMemberByIndex(var4);
            if (var8 != 0) {
                func_02041e70(arg1, func_ov002_02159774(arg0, var4, 0, 1, 1));
                AppendMenuEntry_02041b70(arg1, var6, *(const char **) (var8 + 0x134));
                func_02041e70(arg1, 0xf);
            }
        } else {
            AppendMenuEntry_02041b70(arg1, var6, FindStringInTable_020e0434((Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), var3++));
        }
        if (var6 != var5 - 1) AppendText_02042058(arg1, *(const char **) (arg0 + RG(0x1bdc, 0x1aa4)));
    }
}
