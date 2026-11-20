#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif
extern "C" int GetOwnProtagonistObjectIndex_0202c1a4(struct LocalWireless_0202c1a4*);

extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);
extern "C" void func_020e33b4(void*, int, int);

// USA: ReleaseWirelessLock_020e3428
extern "C" ARM void ReleaseWirelessLock_020e3428(void* lockTable, int lockId) {
    void* wireless = func_0202ae18();
    if (IsLocalWirelessOn_0202b7d8((int*)wireless)) {
        int protagonistObjectIndex = GetOwnProtagonistObjectIndex_0202c1a4((struct LocalWireless_0202c1a4*)(wireless));
        func_020e33b4(lockTable, lockId, protagonistObjectIndex & 0xff);
    }
}
