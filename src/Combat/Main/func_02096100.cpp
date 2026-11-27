#include <globaldefs.h>

// USA: IsQuestBitSet_02096100
extern "C" ARM int IsQuestBitSet_02096100(int questManager, unsigned char *questBits, int questId) {
    unsigned char mask;
    if (questId > 0xcc || questId < 0) {
        return 0;
    }
    mask = 1 << (questId & 7);
    return mask & questBits[questId >> 3];
}
