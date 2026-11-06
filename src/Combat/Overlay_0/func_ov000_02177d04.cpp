#include <globaldefs.h>
#include "GameState/GameState.h"

struct Struct_0201099c_3;
struct Struct_02054000;

struct Struct_ov000_02177d04 {
    int unknown_0_;
    const char* unknown_4_;
};

extern "C" void* GetParty_02010828(GameState* gameState);
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int func_ov000_0217542c(void* arg0);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* FindPartyMemberPanel_ov000_02161318(void* battleUI, int memberIndex);
extern "C" GameObject* GetPartyMemberBaseByIndex_0200ff1c(GameState* gameState, int index);
extern "C" int func_ov000_02170c7c(void* arg0);
extern "C" int func_02041dd0(char* arg0, int arg1);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendXPositionTag_02041a28(char* buffer, int x);
extern "C" Struct_ov000_02177d04* func_02054000(struct Struct_02054000* arg0);
extern "C" void* __clear(void* arg0, int arg1);
extern "C" void CopyCapitalizedText_0206819c(const char* text, char* outText, int font);
extern "C" int AppendText_02042058(char* buffer, const char* text);

// USA: func_ov000_02177d04
extern "C" ARM void func_ov000_02177d04(char* arg0, char* arg1) {
    GameState* var0 = GameState::GetInstance();
    unsigned char var1 = *((unsigned char*)GetParty_02010828(var0) + 0xf7c);
    const char* var2 = (const char*)FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0xb8), 0);
#if defined(jpn)
    signed char var3 = *(signed char*)(arg0 + 0x1f00 + 0xa3);
#else
    signed char var3 = *(signed char*)(arg0 + 0x1d00 + 0x6b);
#endif

    if (func_ov000_0217542c(arg0)) {
        AppendFrameTag_02041c08(arg1, var3, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var3);

    for (unsigned char var4 = 0; var4 < var1; var4++) {
        signed char var5 = *(signed char*)(arg0 + 0x70 + var4);
        void* var6 = FindPartyMemberPanel_ov000_02161318(arg0, var5);
        if (var6 == 0) {
            continue;
        }
        GameObject* var7 = GetPartyMemberBaseByIndex_0200ff1c(var0, var5);
        if (var7 == 0) {
            continue;
        }
        func_02041dd0(arg1, func_ov000_02170c7c(var6));
        AppendMenuEntry_02041b70(arg1, var4, var7->baseStats_->unk);
        AppendXPositionTag_02041a28(arg1, 0x46);
        func_02041dd0(arg1, 0);
        Struct_ov000_02177d04* var8 = func_02054000((struct Struct_02054000*)var7);
        if (var8 != 0) {
#if defined(jpn)
            AppendText_02042058(arg1, var8->unknown_4_);
#else
            char var9[0x100];
            __clear(var9, 0x100);
            CopyCapitalizedText_0206819c(var8->unknown_4_, var9, 0);
            AppendText_02042058(arg1, var9);
#endif
        }
        if (var4 != var1 - 1) {
            AppendText_02042058(arg1, var2);
        }
    }
}
