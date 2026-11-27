#include <globaldefs.h>

#if defined(jpn)
#define func_02053c6c func_02054fe4
#endif

extern "C" int func_02053c6c(unsigned char* gameObject);
extern "C" int HasLearnedSkillEntry_02083b00(unsigned char* memberData, int skillEntryId);

// USA: GetSkillAdjustedMPCost_020dd290
extern "C" ARM unsigned int GetSkillAdjustedMPCost_020dd290(void* member, unsigned int mpCost) {
    if (member == 0) {
        return 0;
    }
    if (mpCost == 0) {
        return 0;
    }
    int memberData = func_02053c6c((unsigned char*)member);
    if (memberData != 0) {
        if (HasLearnedSkillEntry_02083b00((unsigned char*)memberData, 0x106)) {
            mpCost = (unsigned int)(0.75f * (float)mpCost + 0.75f);
        }
    }
    return mpCost;
}
