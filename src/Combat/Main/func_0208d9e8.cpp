#include <globaldefs.h>

struct Struct_0208d9e8 {
    short unknown_0_;
    int unknown_4_;
    int unknown_8_;
    int unknown_c_;
    int unknown_10_;
    int unknown_14_;
};

struct QuestMessageList_0208bf78_5 {
    struct Struct_0208d9e8* unknown_0_;
    short unknown_4_;
};

extern "C" struct Struct_0208d9e8* FindQuestMessage_0208d994(struct QuestMessageList_0208bf78_5* questMessages, int questNumber);

// USA: func_0208d9e8
extern "C" ARM int func_0208d9e8(struct QuestMessageList_0208bf78_5* arg0, int arg1) {
    struct Struct_0208d9e8* var0 = FindQuestMessage_0208d994(arg0, arg1);
    return var0 ? var0->unknown_4_ : 0;
}
