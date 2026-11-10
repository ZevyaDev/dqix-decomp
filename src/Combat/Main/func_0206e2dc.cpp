#include <globaldefs.h>

struct FlagManager_0205faf4_13 {
    unsigned char unknown_0_[0x2CC];
    unsigned char questStates_2cc_[1];
};

// USA: IsQuestUnlocked_0206e2dc
extern "C" ARM int IsQuestUnlocked_0206e2dc(struct FlagManager_0205faf4_13* flagManager, int questId) {
    int mask;
    if (questId >= 0xCC || questId < 0) {
        return 0;
    }
    mask = (questId % 2) ? 0x80 : 0x8;
    return mask & flagManager->questStates_2cc_[questId / 2];
}
