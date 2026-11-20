#include <globaldefs.h>

struct AccoladeEntry_020a15bc_2 {
    unsigned int id_0_0_ : 9;
    unsigned int unknown_1_1_ : 23;
    unsigned int unknown_4_;
    unsigned int unknown_8_;
};

struct AccoladeTable_020a15bc {
    struct AccoladeEntry_020a15bc_2* pEntries_0_;
    unsigned short unknown_4_;
    unsigned short count_6_;
};

// USA: FindAccolade_020a15bc
extern "C" ARM struct AccoladeEntry_020a15bc_2* FindAccolade_020a15bc(struct AccoladeTable_020a15bc* table, int accoladeId) {
    unsigned short searchId;
    int i;
    if (accoladeId <= 0) {
        return NULL;
    }
    searchId = (unsigned short)accoladeId;
    for (i = 0; i < table->count_6_; i++) {
        if (searchId == table->pEntries_0_[i].id_0_0_) {
            return &table->pEntries_0_[i];
        }
    }
    return NULL;
}
