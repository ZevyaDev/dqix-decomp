#include <globaldefs.h>
struct BattleJoinRecord_0207d7f4 { unsigned short unknown_0_; unsigned short unknown_2_; unsigned int unknown_4_; unsigned int unknown_8_; };
// USA: FindBattleJoinRecord_0207d9bc
extern "C" ARM struct BattleJoinRecord_0207d7f4* FindBattleJoinRecord_0207d9bc(struct BattleJoinRecord_0207d7f4 *arg0, unsigned short monsterId) {
    int i;
    for (i = 0; i < 4; i++) {
        if (arg0[i].unknown_0_ == monsterId) return &arg0[i];
    }
    return NULL;
}
