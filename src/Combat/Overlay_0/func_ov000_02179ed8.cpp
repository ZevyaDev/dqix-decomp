#include <globaldefs.h>
#include "GameState/GameState.h"

struct MenuCursor_0205c508;
extern "C" void GetMenuCursorPageRange_0205c508(struct MenuCursor_0205c508* cursor, int* outPageStartIndex, int* outPageEndIndex);

extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int GetPartyMemberData_02053c6c(unsigned char* gameObject);

extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);

struct Struct_ov000_02179ed8 {
    char unknown_0_[0x23];
    signed char unknown_23_;
    char unknown_24_[0x4c - 0x24];
    int unknown_4c_;
};

// USA: func_ov000_02179ed8
extern "C" ARM void func_ov000_02179ed8(char* arg0, struct Struct_ov000_02179ed8* arg1, char* arg2) {
    if (arg1 != NULL && arg2 != NULL) {
        int var0, var1;
        GetMenuCursorPageRange_0205c508((struct MenuCursor_0205c508*)(arg0 + 0x1dc), &var0, &var1);
        int var2 = var0 << 24;
        GameObject* var3 = GameState::GetInstance()->GetPartyMemberByIndex(arg1->unknown_4c_);
        if (var3 != NULL) {
#if defined(jpn)
            int var4 = *(int*)((char*)GetPartyMemberData_02053c6c((unsigned char*)var3) + 0x8b8);
#else
            int var4 = *(int*)((char*)GetPartyMemberData_02053c6c((unsigned char*)var3) + 0x950);
#endif
            signed char var5 = arg1->unknown_23_;
            if (func_ov000_0217542c(arg0)) {
                AppendFrameTag_02041c08(arg2, var5 - (var2 >> 24), 8, 5, 5, 5);
            }
            AppendCursorTag_02041ea4(arg2, var5 - (var2 >> 24));
            AppendMenuEntry_02041b70(arg2, var5 - (var2 >> 24), (const char*)FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), (short)(var4 + 0x63)));
        }
    }
}
