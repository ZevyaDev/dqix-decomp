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

extern "C" struct QuestMessage_0208d994* FindQuestMessage_0208d994(struct QuestMessageList_0208bf78_5* questMessages, int questNumber);

// USA: func_0208da18
extern "C" ARM int func_0208da18(struct QuestMessageList_0208bf78_5* arg0, int arg1, int arg2) {
    int var0;
    struct QuestMessage_0208d994* var1;
    int* var2;
    var0 = 0;
    var1 = FindQuestMessage_0208d994(arg0, arg1);
    if (var1 != NULL) {
    switch (arg2) {
        case 1:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[0];
            break;
        case 2:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[1];
            break;
        case 3:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[2];
            break;
        case 4:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[3];
            break;
        case 5:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[4];
            break;
        case 6:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[5];
            break;
        case 7:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[6];
            break;
        case 8:
            var2 = (int*)var1->unknown_c_;
            var0 = var2[7];
            break;
        default:
            break;
    }
    }
    return var0;
}
