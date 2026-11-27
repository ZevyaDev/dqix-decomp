#include <globaldefs.h>

#if defined(jpn)
enum { Enum_02083b28_2284 = 0x854 };
#else
enum { Enum_02083b28_2284 = 0x8ec };
#endif

// USA: ClearLearnedSkillEntry_02083b28
extern "C" ARM void ClearLearnedSkillEntry_02083b28(unsigned char* memberData, int skillEntryId) {
    unsigned char* learnedSkillEntries = memberData + Enum_02083b28_2284;
    learnedSkillEntries[skillEntryId / 8] &= ~(1 << (skillEntryId % 8));
}
