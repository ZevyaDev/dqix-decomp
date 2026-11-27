#include <globaldefs.h>

struct BattleJoinRecord_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
struct Struct_0207d798;
extern "C" struct BattleJoinRecord_0207d7f4* FindBattleJoinRecord_0207d9bc(struct BattleJoinRecord_0207d7f4* battleJoinTable, unsigned short monsterId);
extern "C" void ResetBattleJoinRecord_0207d7c0(struct Struct_0207d798* record);

// USA: RemoveBattleJoinRecord_0207da7c
extern "C" ARM void RemoveBattleJoinRecord_0207da7c(struct BattleJoinRecord_0207d7f4* battleJoinTable, unsigned short monsterId) {
    struct BattleJoinRecord_0207d7f4* var0 = FindBattleJoinRecord_0207d9bc(battleJoinTable, monsterId);
    if (var0 != NULL) {
        ResetBattleJoinRecord_0207d7c0((struct Struct_0207d798*)var0);
    }
}
