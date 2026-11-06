#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
enum { Enum_ov012_0218a9ec_5108 = 0x144c, Enum_ov012_0218a9ec_4924 = 0x1314, Enum_ov012_0218a9ec_4984 = 0x1348, Enum_ov012_0218a9ec_22172 = 0x543c };
#else
enum { Enum_ov012_0218a9ec_5108 = 0x13f4, Enum_ov012_0218a9ec_4924 = 0x133c, Enum_ov012_0218a9ec_4984 = 0x1378, Enum_ov012_0218a9ec_22172 = 0x569c };
#endif

struct StringListEntry_02072a68 {
    short id_0_;
    void* pText_4_;
};

struct StringList_02072a68_2 {
    struct StringListEntry_02072a68* unknown_0_;
    short capacity_4_;
};

struct Struct_ov012_0218a9ec {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 4;
    unsigned int unknown_2_0_ : 5;
    unsigned int unknown_2_5_ : 4;
    unsigned int unknown_3_1_ : 1;
    unsigned int unknown_3_2_ : 1;
    unsigned int unknown_3_3_ : 1;
    unsigned int unknown_3_4_ : 1;
    unsigned int unknown_3_5_ : 1;
    unsigned int unknown_3_6_ : 1;
    unsigned int unknown_3_7_ : 1;
};

extern "C" int AppendFrameTag_02041c08(char* buffer, int entryIndex, int leftMargin, int topMargin, int rightMargin, int bottomMargin);
extern "C" int AppendCursorTag_02041ea4(char* buffer, int entryIndex);
extern "C" void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId);
extern "C" int AppendMenuEntry_02041b70(char* buffer, int entryIndex, const char* text);
extern "C" int AppendText_02042058(char* buffer, const char* text);

// USA: func_ov012_0218a9ec
extern "C" ARM void func_ov012_0218a9ec(unsigned char* arg0, char* arg1, int arg2) {
    if (arg1 == 0) return;

    int var0 = *(int*)(arg0 + Enum_ov012_0218a9ec_5108) & 7;
    Struct_ov012_0218a9ec* var1 =
        (Struct_ov012_0218a9ec*)((char*)GameState::GetInstance() + Enum_ov012_0218a9ec_22172);

    if (arg2 != 0) {
        AppendFrameTag_02041c08(arg1, var0, 8, 5, 5, 5);
    }
    AppendCursorTag_02041ea4(arg1, var0);

    int var2;
    for (var2 = 0; var2 < 8; var2++) {
        if (var2 != 0) {
            AppendText_02042058(arg1, *(char**)(arg0 + Enum_ov012_0218a9ec_4984));
        }
        void* var3 = FindStringInList_02072a68((struct StringList_02072a68_2*)(arg0 + Enum_ov012_0218a9ec_4924),
                                    (short)(((short)var1->unknown_3_1_) + var2 * 2 + 0x7530));
        AppendMenuEntry_02041b70(arg1, var2, (const char*)var3);
    }
}
