#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02176798_2204 = 0x818 };
#else
enum { Enum_ov003_02176798_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState*);
struct MenuLayout_0207fdcc_2;
extern "C" void ShowMenuLayoutWindow_02080c20(struct MenuLayout_0207fdcc_2* menuLayout, int windowId);
extern "C" void SetMenuLayoutWindowPalette_02080c68(void* menuLayout, int windowId, int palette);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);
extern "C" void OpenMenuLayoutWindow_020813ec(void* menuLayout, int windowId);

// USA: func_ov003_02176798
extern "C" ARM void func_ov003_02176798(char* arg0) {
    void* var0 = GetParty_02010828(GameState::GetInstance());
    struct MenuLayout_0207fdcc_2* var1 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02176798_2204);
    ShowMenuLayoutWindow_02080c20(var1, 0);
    SetMenuLayoutWindowPalette_02080c68(var1, 0, 0);
    int var2 = *(int*)((char*)var0 + 0xf6c);
    SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var1, 0, var2);
    OpenMenuLayoutWindow_020813ec(var1, 0);
}
