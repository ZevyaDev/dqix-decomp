#include <globaldefs.h>

struct Struct_02070fe4 {
    unsigned int unknown_0_0_ : 12;
};

// USA: GetMonsterBattleDataCount_02070fe4
extern "C" ARM int GetMonsterBattleDataCount_02070fe4(struct Struct_02070fe4 *table) {
    return table->unknown_0_0_;
}
