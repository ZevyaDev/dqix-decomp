#include <globaldefs.h>

// USA: LearnSkillEntry_02083acc
extern "C" ARM void LearnSkillEntry_02083acc(unsigned char* memberData, int skillEntryId) {
#if defined(jpn)
    unsigned char* learnedSkillEntries = memberData + 0x854;
#else
    unsigned char* learnedSkillEntries = memberData + 0x8ec;
#endif
    learnedSkillEntries[skillEntryId / 8] |= 1 << (skillEntryId % 8);
}
