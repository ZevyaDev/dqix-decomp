#include <globaldefs.h>

struct SkillEntry_0201137c { int unknown_0_; unsigned int unknown_4_; };
extern "C" struct SkillEntry_0201137c* FindSkillEntry_0209a594(void* table, int skillEntryId);

// USA: GetSkillEntryBonus_0201137c
extern "C" ARM int GetSkillEntryBonus_0201137c(char* gameState, int skillEntryId) {
    struct SkillEntry_0201137c* entry;
    unsigned int bonus = 0;
#if defined(jpn)
    entry = FindSkillEntry_0209a594(gameState + 0x54cc, skillEntryId);
#else
    entry = FindSkillEntry_0209a594(gameState + 0x572c, skillEntryId);
#endif
    if (entry != NULL) {
#if defined(jpn)
        bonus = entry->unknown_4_ >> 24;
#else
        bonus = (entry->unknown_4_ << 12) >> 24;
#endif
    }
    return bonus;
}
