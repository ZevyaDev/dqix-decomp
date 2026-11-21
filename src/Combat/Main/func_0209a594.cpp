#include <globaldefs.h>

struct SkillEntry_0209a594_2 {
    #if defined(jpn)
    unsigned short id_0_0_ : 12;
    unsigned short unknown_1_4_ : 4;
#else
    unsigned short id_0_0_ : 11;
    unsigned short unknown_1_3_ : 5;
#endif
    char unknown_2_[10];
};

struct SkillTable_0209a594 {
    struct SkillEntry_0209a594_2* pEntries_0_;
    int count_4_;
};

// USA: FindSkillEntry_0209a594
extern "C" ARM struct SkillEntry_0209a594_2* FindSkillEntry_0209a594(struct SkillTable_0209a594* table, int skillEntryId) {
    int i;
    struct SkillEntry_0209a594_2* entries = table->pEntries_0_;
    if (entries == 0) return 0;
    if (skillEntryId >= 0x11f) return 0;
    if (entries[skillEntryId].id_0_0_ == skillEntryId) {
        return &entries[skillEntryId];
    }
    for (i = 0; i < table->count_4_; i++) {
        if (entries[i].id_0_0_ == skillEntryId) {
            return &entries[i];
        }
    }
    return 0;
}
