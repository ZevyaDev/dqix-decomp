#include <globaldefs.h>
#include "Combat/Main/BattleList.h"
#include "std_library_functions.h"

extern "C" int GetEarnedAccoladeBits_020ac460(void* earnedBits);
extern "C" int GetBattleRecords_020ac4c0(void* records);
extern "C" int func_020ac3c8(unsigned int* arg0, short* arg1, int arg2);
extern "C" int SetBattleRecords_020ac494(void* records);

struct BattleRecords_020a03c4 {
    char unknown_0_[0x10];
    unsigned int accoladeCount_10_0_ : 9;
    unsigned int unknown_11_1_ : 23;
};
extern "C" void func_020a03c4(struct BattleRecords_020a03c4* arg0, unsigned int arg1);

// USA: AwardAccolades_ov023_021ed724
extern "C" ARM int AwardAccolades_ov023_021ed724(void* table, short* accoladeIds, int idCount) {
    if (table == 0) return 0;
    if (accoladeIds == 0) return 0;
    if (idCount == 0) return 0;

    short idCopy[50];
    char records[0xb0];
    unsigned int earnedBits[15];

    int resultFlags = 0;
    GetEarnedAccoladeBits_020ac460(earnedBits);
    memset(idCopy, 0, 0x64);
    for (int i = 0; i < idCount; i++) {
        idCopy[i] = accoladeIds[i];
    }
    func_020ac3c8(earnedBits, idCopy, idCount);
    GetBattleRecords_020ac4c0(records);
    if (((struct BattleRecords_020a03c4*)records)->accoladeCount_10_0_ == 0) {
        resultFlags |= 1;
    }
    func_020a03c4((struct BattleRecords_020a03c4*)records, idCount);
    SetBattleRecords_020ac494(records);
    return resultFlags;
}
