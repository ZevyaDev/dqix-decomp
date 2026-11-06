#include <globaldefs.h>

struct Party_02048150 {
    char unknown_0_[0xf78];
    unsigned char memberObjectIndices_f78_[4];
    unsigned char memberCount_f7c_;
};

// USA: IsInParty_02086ef0
extern "C" ARM int IsInParty_02086ef0(struct Party_02048150* party, int objectIndex) {
    int i;
    for (i = 0; i < party->memberCount_f7c_; i++) {
        if (objectIndex == party->memberObjectIndices_f78_[i]) {
            return 1;
        }
    }
    return 0;
}
