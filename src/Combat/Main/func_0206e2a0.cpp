#include <globaldefs.h>

struct Struct_0206e2a0 {
    unsigned char unknown_0_[0x2CC];
    unsigned char questStates_2cc_[1];
};

// USA: UnlockQuest_0206e2a0
extern "C" ARM void UnlockQuest_0206e2a0(struct Struct_0206e2a0* flagManager, int questId) {
    int byteIndex;
    if (questId >= 0xCC || questId < 0) {
        return;
    }
    byteIndex = questId / 2;
    flagManager->questStates_2cc_[byteIndex] |= (questId % 2) ? 0x80 : 0x8;
}
