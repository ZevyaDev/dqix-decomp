#include <globaldefs.h>

// USA: HasLearnedSkillEntry_02083b00
extern "C" ARM int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId) {
    unsigned char* bitByteBase = memberData + skillEntryId / 8;
#if defined(jpn)
    return (1 << (skillEntryId % 8)) & bitByteBase[0x854];
#else
    return (1 << (skillEntryId % 8)) & bitByteBase[0x8ec];
#endif
}
