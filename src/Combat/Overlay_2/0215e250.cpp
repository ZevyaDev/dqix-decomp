#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define RG(u, j) (j)
extern "C" int func_02042638(char* arg0, int arg1, int arg2);
#define func_02041fac func_02042638
#else
#define RG(u, j) (u)
#endif

extern "C" void func_020dc4d0(signed char* arg0, signed char* arg1);
struct PartyMember_0205faf4_11;
extern "C" int IsNPCCompanion_02061bd8(struct PartyMember_0205faf4_11* partyMember);

struct Struct_0201099c_3;
extern "C" int FindStringInTable_020e0434(struct Struct_0201099c_3* stringTable, int stringId);
extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" int func_02041fac(char* arg0, int arg1, int arg2);
extern "C" int AppendTextColorTag_02041e70(char* buffer, int colorIndex);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);
extern "C" int GetStandardString_020e51cc(int stringId);
extern "C" int func_ov002_02159774(void* arg0, int arg1, int arg2, int arg3, int arg4);

// USA: func_ov002_0215e250
extern "C" ARM void func_ov002_0215e250(unsigned char* arg0, char* arg1, int arg2) {
    if (arg1 == NULL) return;

    GameState* var0 = GameState::GetInstance();
    int var1 = *(short*)(arg0 + RG(0x1bf6, 0x1abe));

    signed char var2[7];
    signed char var3;
    func_020dc4d0(var2, &var3);

    signed char var4 = 0;
    for (int var5 = 0; var5 < var3; var5++) {
        GameObject* var6 = GetPartyMemberBaseByIndex_0200ff1c(var0, var2[var5]);
        if (var6 != NULL) {
            if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)var6) != 0) {
                var4++;
            }
        }
    }
    var3 = var3 - var4;

    int var7 = 0;
    if (arg2) {
        AppendFrameTag_02041c08(arg1, var1, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var1);

    int var8 = FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + RG(0x20, 0x8)), 2);
    func_02041fac(arg1, var8, 0x16);

    for (int var9 = 0; var9 < var3; var9++) {
        GameObject* var10 = var0->GetPartyMemberByIndex(var2[var7]);
        if (var10 != NULL) {
            GameObject* var11 = GetPartyMemberBaseByIndex_0200ff1c(var0, var2[var7]);
            if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)var11) != 0) {
                for (int var12 = 0; var12 < 4; var12++) {
                    var7 = (var7 + 1) % 4;
                    if (var7 == 0) break;
                    GameObject* var13 = GetPartyMemberBaseByIndex_0200ff1c(var0, var2[var7]);
                    if (var13 == NULL) continue;
                    if (IsNPCCompanion_02061bd8((struct PartyMember_0205faf4_11*)var13) != 0) continue;
                    var0->GetPartyMemberByIndex(var2[var7]);
                    break;
                }
            }

            int var14 = func_ov002_02159774(arg0, var2[var7], 0, 1, 1);
            AppendTextColorTag_02041e70(arg1, var14);
            AppendMenuEntry_02041b70(arg1, var9, (const char*)(arg0 + RG(0x1ab0, 0x1a08) + var2[var7] * RG(0x3c, 0x18)));
            AppendTextColorTag_02041e70(arg1, 0xf);
            AppendText_02042058(arg1, *(const char**)(arg0 + 0x1000 + RG(0xbdc, 0xaa4)));

            var7++;
        }
    }

#if defined(jpn)
    AppendMenuEntry_02041b70(arg1, var3, (const char*)FindStringInTable_020e0434((struct Struct_0201099c_3*)(arg0 + 0x8), 0x76d));
#else
    AppendMenuEntry_02041b70(arg1, var3, (const char*)GetStandardString_020e51cc(0x1a));
#endif
}
