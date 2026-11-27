#include <globaldefs.h>

struct QuestMessageList_0208bf78_5;

struct Struct_0208dadc {
    char unknown_0_[0x14];
    int unknown_14_;
};

extern "C" struct Struct_0208dadc* FindQuestMessage_0208d994(struct QuestMessageList_0208bf78_5* questMessages, int questNumber);

// USA: func_0208dadc
extern "C" ARM int func_0208dadc(struct QuestMessageList_0208bf78_5* arg0, int arg1) {
    struct Struct_0208dadc* var0 = FindQuestMessage_0208d994(arg0, arg1);
    return var0 ? var0->unknown_14_ : 0;
}
