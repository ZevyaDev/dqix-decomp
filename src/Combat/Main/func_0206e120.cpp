#include <globaldefs.h>

struct FlagManager_0205faf4_3 {
    unsigned char unknown_0_[0x2CC];
    unsigned char questStates_2cc_[1];
};

// USA: GetQuestState_0206e120
extern "C" ARM int GetQuestState_0206e120(struct FlagManager_0205faf4_3* flagManager, int questId) {
    int byteIndex;
    if (questId >= 0xCC || questId < 0) {
        return 0;
    }
    byteIndex = questId / 2;
    if (questId % 2) {
        return (flagManager->questStates_2cc_[byteIndex] >> 4) & 3;
    }
    return flagManager->questStates_2cc_[byteIndex] & 3;
}
