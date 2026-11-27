#include <globaldefs.h>
#if defined(jpn)
#define IS_JPN 1
#else
#define IS_JPN 0
#endif

struct PartyMemberData_020839dc { unsigned char unknown_0_[IS_JPN ? 0x878 : 0x910]; unsigned char learnedSpells_910_[9]; };
// USA: CollectLearnedSpellIds_020839dc
extern "C" ARM int CollectLearnedSpellIds_020839dc(struct PartyMemberData_020839dc* memberData, unsigned char* spellIds, int maxCount) {
    int i;
    int j;
    int count;
    count = 0;
    for (i = 0; i < 9; i++) {
        if (memberData->learnedSpells_910_[i] == 0) {
            continue;
        }
        for (j = 0; j < 8; j++) {
            if (memberData->learnedSpells_910_[i] & (1 << j)) {
                spellIds[count] = (unsigned char)(j + i * 8);
                count++;
                if (count == maxCount) {
                    return count;
                }
            }
        }
    }
    return count;
}
