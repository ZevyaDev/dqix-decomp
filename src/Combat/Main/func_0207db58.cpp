#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct BattleJoinRecord_0207d7f4;
extern "C" struct BattleJoinRecord_0207d7f4* FindBattleJoinRecord_0207d9bc(struct BattleJoinRecord_0207d7f4* battleJoinTable, unsigned short monsterId);

extern "C" void func_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void);
extern "C" void func_ov017_021c9b90(int arg0, int arg1);

// USA: func_0207db58
extern "C" ARM int func_0207db58(struct BattleJoinRecord_0207d7f4* arg0, unsigned short arg1, char arg2) {
    char* var0 = (char*)FindBattleJoinRecord_0207d9bc(arg0, arg1);
    if (var0 == NULL) return -1;
    if (var0[4] < 0) {
        var0[4] = arg2;
        func_0202ae18();
        if (IsNotLocalWirelessGuest_0202c508()) {
            func_ov017_021c9b90(arg1, var0[4]);
        }
    }
    return var0[4];
}
