#include <globaldefs.h>

struct Struct_02064490_3 {
    char unknown_0_[0xc];
    struct Struct_02064490_3* unknown_c_;  // 0xc
};

extern "C" int IsConditionMet_0205faf4(void*, struct Struct_02064490_3*, void*);

// USA: AreConditionsMet_02064704
extern "C" ARM int AreConditionsMet_02064704(void* flagManager, struct Struct_02064490_3* conditions, void* arg2) {
    while (conditions != NULL) {
        if (IsConditionMet_0205faf4(flagManager, conditions, arg2) == 0) break;
        conditions = conditions->unknown_c_;
    }
    return conditions == NULL;
}
