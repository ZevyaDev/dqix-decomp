#include <globaldefs.h>

struct Layout_ov023_021db4e4 {
    char unknown_0_[8];
    char* pGroups_8_;
    char unknown_c_[0x14 - 0xc];
    unsigned short groupCount_14_;
};

// USA: FindLayoutGroup_ov023_021db4e4
extern "C" ARM void* FindLayoutGroup_ov023_021db4e4(struct Layout_ov023_021db4e4* layout, short groupId) {
    char* groups = layout->pGroups_8_;
    if (!groups) return 0;
    unsigned short groupCount = layout->groupCount_14_;
    if (groupCount == 0) return 0;
    for (unsigned short i = 0; i < groupCount; i++) {
        char* group = groups + i * 0x18;
        if (*(short*)group == groupId) return group;
    }
    return 0;
}
