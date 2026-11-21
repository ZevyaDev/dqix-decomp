#include <globaldefs.h>
#if defined(jpn)
enum { Enum_02010834_10756 = 0x27a4 };
#else
enum { Enum_02010834_10756 = 0x2a04 };
#endif


struct Party_02010834_2 {
    unsigned char unknown_0_[0xf78];
    unsigned char memberObjectIndices_f78_[4];
    unsigned char memberCount_f7c_;
};

struct GameState_02010834 {
    unsigned char unknown_0_[Enum_02010834_10756];
    struct Party_02010834_2 party_2a04_;
};

// USA: func_02010834
extern "C" ARM void func_02010834(struct GameState_02010834* arg0, int arg1, int* arg2, int* arg3) {
    int var0;
    unsigned char var1;
    struct Party_02010834_2* var2;
    if (arg1 >= 0 && arg1 <= 3) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    if (var0 == 0) {
        return;
    }
    var2 = &arg0->party_2a04_;
    for (var1 = 0; var1 < var2->memberCount_f7c_; var1++) {
        arg2[var1] = var2->memberObjectIndices_f78_[var1];
    }
    *arg3 = var2->memberCount_f7c_;
}
