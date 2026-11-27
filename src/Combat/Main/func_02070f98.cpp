#include <globaldefs.h>

struct Struct_02070f98 {
    unsigned char unknown_0_[0x84];
};

struct Struct_02070f98_2 {
    unsigned int unknown_0_0_ : 12;
    unsigned int unknown_1_4_ : 20;
    struct Struct_02070f98* unknown_4_;
};

// USA: GetMonsterBattleDataByIndex_02070f98
extern "C" ARM struct Struct_02070f98* GetMonsterBattleDataByIndex_02070f98(struct Struct_02070f98_2* table, int index) {
    if (index < 0 || index >= (int)table->unknown_0_0_ || table->unknown_4_ == NULL) {
        return NULL;
    }
    return &table->unknown_4_[index];
}
