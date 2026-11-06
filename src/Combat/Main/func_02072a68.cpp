#include <globaldefs.h>

struct StringListEntry_02072a68 {
    short id_0_;
    void* pText_4_;
};

struct StringList_02072a68_2 {
    struct StringListEntry_02072a68* unknown_0_;
    short capacity_4_;
};

// USA: FindStringInList_02072a68
extern "C" ARM void* FindStringInList_02072a68(struct StringList_02072a68_2* stringList, int stringId) {
    int i;
    for (i = 0; i < stringList->capacity_4_; i++) {
        if (stringId == stringList->unknown_0_[i].id_0_) {
            return stringList->unknown_0_[i].pText_4_;
        }
    }
    return 0;
}
