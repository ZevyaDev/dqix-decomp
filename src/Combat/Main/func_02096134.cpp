#include <globaldefs.h>

struct Struct_0205faf4_8 { unsigned int unknown_0_0_ : 9; unsigned int unknown_1_1_ : 23; char unknown_4_[0xc]; };
struct QuestManager_0205faf4_7 { unsigned char acceptedQuestCount_0_; char unknown_1_[3]; struct Struct_0205faf4_8 acceptedQuests_4_[1]; };

// USA: FindAcceptedQuest_02096134
extern "C" ARM struct Struct_0205faf4_8* FindAcceptedQuest_02096134(struct QuestManager_0205faf4_7* questManager, int questId) {
    int i;
    if (questId > 0xcc || questId < 0) return NULL;
    for (i = 0; i < questManager->acceptedQuestCount_0_; i++) {
        if (questManager->acceptedQuests_4_[i].unknown_0_0_ == questId) return &questManager->acceptedQuests_4_[i];
    }
    return NULL;
}
