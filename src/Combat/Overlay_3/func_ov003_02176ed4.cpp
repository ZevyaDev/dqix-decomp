#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02176ed4_4154 = 0xfb6 };
enum { Enum_ov003_02176ed4_2164 = 0x7f0 };
enum { Enum_ov003_02176ed4_2204 = 0x818 };
#else
enum { Enum_ov003_02176ed4_4154 = 0x103a };
enum { Enum_ov003_02176ed4_2164 = 0x874 };
enum { Enum_ov003_02176ed4_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState*);

struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void func_02080c04(struct MenuLayout_0207fdcc_2* arg0, int arg1);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);

struct ItemTable_0201099c_10;
struct ItemData_0201099c_9 {
    char unknown_0_[8];
    unsigned int unknown_8_0_ : 4;
};
extern "C" struct ItemData_0201099c_9* FindItemData_020dedd0(struct ItemTable_0201099c_10* itemTable, int itemId);

struct Struct_02053f7c;
extern "C" short func_02086aec(struct Struct_02053f7c* arg0, int arg1);

struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);

extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov003_02176ed4
extern "C" ARM void func_ov003_02176ed4(char* arg0) {
    struct MenuLayout_0207fdcc_2* var0 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02176ed4_2204);
    struct Struct_02053f7c* var1 = (struct Struct_02053f7c*)GetParty_02010828(GameState::GetInstance());
    ShowMenuLayoutWindow_02080c20(var0, 8);
    SetMenuLayoutWindowPalette_02080c68(var0, 8, 0);
    int var2 = 0;
    struct ItemData_0201099c_9* var3 = FindItemData_020dedd0((struct ItemTable_0201099c_10*)(arg0 + Enum_ov003_02176ed4_2164), *(short*)(arg0 + Enum_ov003_02176ed4_4154));
    if (var3 != NULL) {
        int var4 = (var3->unknown_8_0_ <= 7) ? 1 : var2;
        var2 = (var4 != 0);
    }
    if (var2 != 0) {
        short var5 = *(short*)(arg0 + Enum_ov003_02176ed4_4154);
        int var6 = func_02086aec(var1, var5);
        SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var0, 0x54, var6);
    } else {
        func_02080c04(var0, 8);
    }
    OpenMenuLayoutWindow_020813ec(var0, 8);
}
