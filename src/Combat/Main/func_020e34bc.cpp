#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* func_0202ae18(void);

extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct WirelessLock_0208ab34_2 {
    unsigned char ownerObjectIndex_0_;
    unsigned char unknown_1_;
    unsigned char state_2_;
    unsigned char unknown_3_;
};
extern "C" struct WirelessLock_0208ab34_2* func_020e3054(struct WirelessLock_0208ab34_2* arg0, int arg1);

struct LocalWireless_0202c1a4 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};
extern "C" signed char GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4* wireless);

struct WirelessLockTable_0208ab34 {
    struct WirelessLock_0208ab34_2 locks_0_[8];
    unsigned char requestedLockIds_20_[8];
};

#pragma optimize_for_size off
// USA: GetWirelessLockStatus_020e34bc
extern "C" ARM int GetWirelessLockStatus_020e34bc(struct WirelessLockTable_0208ab34* lockTable, int lockId) {
    unsigned char* requestSlot;
    int i;
    void* wireless;
    struct WirelessLock_0208ab34_2* lock;
    signed char protagonistObjectIndex;

    wireless = func_0202ae18();
    if (!IsLocalWirelessOn_0202b7d8((int*)wireless)) return 1;

    i = 0;
    for (requestSlot = lockTable->requestedLockIds_20_; i < 8; requestSlot++) {
        if (*requestSlot == lockId) return 2;
        i++;
    }

    lock = func_020e3054(lockTable->locks_0_, lockId);
    if (lock != NULL) {
        protagonistObjectIndex = GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)wireless);
        if (lock->ownerObjectIndex_0_ == protagonistObjectIndex) return lock->state_2_;
        return 3;
    }
    return 0;
}
