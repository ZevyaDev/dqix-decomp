#include "GameState/GameState.h"
#include <globaldefs.h>

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char *arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3 *stringTable, int stringId);
extern "C" int AppendFrameTag_02041c08(char *buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char *buffer, int entryIndex);
extern "C" int func_02041fac(char *arg0, int arg1, int arg2);
extern "C" int func_02041e70(char *arg0, int arg1);
extern "C" int AppendMenuEntry_02041b70(char *buffer, int entryIndex, const char *text);
extern "C" int AppendText_02042058(char *buffer, const char *text);
extern "C" int func_ov002_02159774(void *arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov002_0215d72c
extern "C" ARM void func_ov002_0215d72c(unsigned char *arg0, char *arg1, int arg2) {
    if (arg1 == NULL) return;

    GameState::GetInstance();
    int var0 = *(short *) (arg0 + RG(0x1bee, 0x1ab6));

    if (arg2) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    int var1 = FindStringInTable_020e0434((struct Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x514);
    func_02041fac(arg1, var1, 0x10);

    for (int var2 = 0; var2 < *(arg0 + RG(0x1c6d, 0x1b31)) + 1; var2++) {
        int var3;
        if (var2 < *(arg0 + RG(0x1c6d, 0x1b31))) {
            var3 = *(arg0 + RG(0x1c68, 0x1b2c) + var2);
        } else {
            var3 = 4;
        }
        if (var3 == 4) {
            AppendMenuEntry_02041b70(arg1, var2,
                          (const char *) FindStringInTable_020e0434(
                              (struct Struct_0201099c_3 *) (arg0 + RG(0x20, 0x8)), 0x515));
            return;
        }
        int var4 = func_ov002_02159774(arg0, var3, 1, 0, 0);
        func_02041e70(arg1, var4);
        AppendMenuEntry_02041b70(arg1, var2, (const char *) (arg0 + RG(0x1ab0, 0x1a08) + var3 * RG(0x3c, 0x18)));
        func_02041e70(arg1, 0xf);
        AppendText_02042058(arg1, *(const char **) (arg0 + RG(0x1000 + 0xbdc, 0x1000 + 0xaa4)));
    }
}
