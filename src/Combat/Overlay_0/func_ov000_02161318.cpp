#include <globaldefs.h>

#if defined(jpn)
enum { Enum_ov000_02161318_1096 = 0x488 };
#else
enum { Enum_ov000_02161318_1096 = 0x448 };
#endif

// USA: FindPartyMemberPanel_ov000_02161318
extern "C" ARM void* FindPartyMemberPanel_ov000_02161318(void* battleUI, int memberIndex) {
    int isPartyMemberIndex = (memberIndex >= 0 && memberIndex <= 3) ? 1 : 0;
    if (isPartyMemberIndex) {
        for (int i = 0; i < 4; i++) {
            int panelMemberIndex = *(int*)((char*)battleUI + i * Enum_ov000_02161318_1096 + 0x9a4);
            if (memberIndex == panelMemberIndex) {
                return (char*)battleUI + 0x958 + i * Enum_ov000_02161318_1096;
            }
        }
    }
    return 0;
}
