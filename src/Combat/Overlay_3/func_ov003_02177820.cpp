#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02177820_4144 = 0xfac };
enum { Enum_ov003_02177820_4124 = 0xf98 };
enum { Enum_ov003_02177820_2204 = 0x818 };
#else
enum { Enum_ov003_02177820_4144 = 0x1030 };
enum { Enum_ov003_02177820_4124 = 0x101c };
enum { Enum_ov003_02177820_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
extern "C" void func_02080bac(void* arg0, int arg1);
struct MenuLayout_02080f8c;
extern "C" void SetMenuLayoutTextString_02080f8c(struct MenuLayout_02080f8c* menuLayout, int textId, int text);
struct Struct_02080cc0;
extern "C" void func_02080cc0(struct Struct_02080cc0* arg0, int arg1, int arg2);
extern "C" int func_020dcc98(int arg0);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);
extern "C" void* GetParty_02010828(GameState* gameState);

// USA: func_ov003_02177820
#pragma opt_common_subs off
extern "C" ARM void func_ov003_02177820(char* arg0) {
    struct MenuLayout_0207fdcc_2* var0 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02177820_2204);
    GameState* var1 = GameState::GetInstance();
    GetParty_02010828(var1);

    int var2 = *(int*)(arg0 + Enum_ov003_02177820_4144);
    int var3 = 0x11, var4 = 0x79;
    switch (var2) {
    case 2: var3 = 0x12; var4 = 0x7c; break;
    case 3: var3 = 0x13; var4 = 0x80; break;
    case 4: var3 = 0x14; var4 = 0x85; break;
    }

    ShowMenuLayoutWindow_02080c20(var0, var3);
    SetMenuLayoutWindowPalette_02080c68(var0, var3, 0);
    func_02080bac(var0, var3);

    int var5;
    unsigned char var6;
    for (var6 = 0; var6 < *(int*)(arg0 + Enum_ov003_02177820_4144); var6++) {
        var5 = 0;
        GameObject* var7 = var1->GetPartyMemberByIndex(*(int*)(arg0 + Enum_ov003_02177820_4124 + var6 * 4));
        if (var7 != 0) {
            var5 = *(int*)((char*)var7 + 0x134);
        }
        SetMenuLayoutTextString_02080f8c((struct MenuLayout_02080f8c*)var0, var4, var5);

        int var8 = func_020dcc98((signed char)*(int*)(arg0 + Enum_ov003_02177820_4124 + var6 * 4));
        func_02080cc0((struct Struct_02080cc0*)var0, var4, var8);

        var4 = (short)(var4 + 1);
    }

    OpenMenuLayoutWindow_020813ec(var0, var3);
}
