#include <globaldefs.h>

extern "C" void func_ov017_021b2f64(unsigned char* arg0);

// USA: GetPartyMemberModelLoadTask_ov017_021a4658
extern "C" ARM unsigned char* GetPartyMemberModelLoadTask_ov017_021a4658(unsigned char* gameResources, int memberIndex) {
    int i;
    for (i = 0; i < 0xc; i++) {
        unsigned char* pendingSlotBase = gameResources + i * 0x48;
#if defined(jpn)
        if (pendingSlotBase[0x352e] != 0) {
            if (pendingSlotBase[0x352f] == 0 && memberIndex == *(short*)(pendingSlotBase + 0x3534)) {
                return gameResources + 0x352c + i * 0x48;
#else
        if (pendingSlotBase[0x373e] != 0) {
            if (pendingSlotBase[0x373f] == 0 && memberIndex == *(short*)(pendingSlotBase + 0x3744)) {
                return gameResources + 0x373c + i * 0x48;
#endif
            }
        }
    }

    int slot;
    for (slot = 0; slot < 0xc; slot++) {
        unsigned char* freeSlotBase = gameResources + slot * 0x48;
#if defined(jpn)
        if (freeSlotBase[0x352e] == 0) {
            unsigned char* loadTask = gameResources + 0x352c + slot * 0x48;
#else
        if (freeSlotBase[0x373e] == 0) {
            unsigned char* loadTask = gameResources + 0x373c + slot * 0x48;
#endif
            func_ov017_021b2f64(loadTask);
#if defined(jpn)
            return gameResources + 0x352c + slot * 0x48;
#else
            return gameResources + 0x373c + slot * 0x48;
#endif
        }
    }

    for (;;) {}
}
