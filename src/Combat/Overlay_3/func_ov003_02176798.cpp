#include <globaldefs.h>
#if defined(jpn)
enum { Enum_ov003_02176798_2204 = 0x818 };
#else
enum { Enum_ov003_02176798_2204 = 0x89c };
#endif

#include "GameState/GameState.h"

extern "C" void* GetParty_02010828(GameState*);
struct MenuLayout_0207fdcc_2;
extern "C" void func_02080c20(struct MenuLayout_0207fdcc_2* arg0, int arg1);
extern "C" void func_02080c68(void* arg0, int arg1, int arg2);
struct MenuLayout_02080fa8;
extern "C" void SetMenuLayoutTextValue_02080fa8(struct MenuLayout_02080fa8* menuLayout, int textId, int value);
extern "C" void func_020813ec(void* arg0, int arg1);

// USA: func_ov003_02176798
extern "C" ARM void func_ov003_02176798(char* arg0) {
    void* var0 = GetParty_02010828(GameState::GetInstance());
    struct MenuLayout_0207fdcc_2* var1 = *(struct MenuLayout_0207fdcc_2**)(arg0 + Enum_ov003_02176798_2204);
    func_02080c20(var1, 0);
    func_02080c68(var1, 0, 0);
    int var2 = *(int*)((char*)var0 + 0xf6c);
    SetMenuLayoutTextValue_02080fa8((struct MenuLayout_02080fa8*)var1, 0, var2);
    func_020813ec(var1, 0);
}
