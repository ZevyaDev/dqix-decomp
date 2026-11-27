#include <globaldefs.h>

struct QuestMessage_0208d994 {
    short questNumber_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct QuestMessageList_0208bf78_5 {
    struct QuestMessage_0208d994* unknown_0_;
    short unknown_4_;
};

// USA: FindQuestMessage_0208d994
extern "C" ARM struct QuestMessage_0208d994* FindQuestMessage_0208d994(struct QuestMessageList_0208bf78_5 *questMessages, int questNumber) {
    short i;
    if (questNumber < 0) return NULL;
    for (i = 0; i < questMessages->unknown_4_; i++) {
        if (questNumber == questMessages->unknown_0_[i].questNumber_0_) return &questMessages->unknown_0_[i];
    }
    return NULL;
}
