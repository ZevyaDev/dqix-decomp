#include <globaldefs.h>

// USA: IsPanelMemberIncapacitated_ov000_021719f8
extern "C" ARM int IsPanelMemberIncapacitated_ov000_021719f8(int* panel) {
    int statusFlags = panel[0xa];
    int isDead = (statusFlags & 1) != 0;
    int isIncapacitated = isDead != 0;
    isIncapacitated = isIncapacitated | ((statusFlags & 0x10) != 0);
    isIncapacitated = isIncapacitated != 0;
    isIncapacitated = isIncapacitated | ((statusFlags & 0x80000) != 0);
    isIncapacitated = isIncapacitated != 0;
    isIncapacitated = isIncapacitated | ((statusFlags & 8) != 0);
    isIncapacitated = isIncapacitated != 0;
    return isIncapacitated;
}
