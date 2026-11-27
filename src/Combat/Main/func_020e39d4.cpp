#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
};
struct EventSyncEntry_020e39d4 {
    unsigned int unknown_0_;
    unsigned char unknown_4_;
    unsigned char playerMask_5_;
    unsigned char unknown_6_;
};
struct LocalWireless_0202b2f0;

extern "C" struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId);
extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(struct LocalWireless_0202b2f0* wireless);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: AddEventSyncPlayer_020e39d4
extern "C" ARM void AddEventSyncPlayer_020e39d4(struct EventSyncEntry_020e385c* entry, int protagonistObjectIndex, int type, int eventId) {
    if (IsLocalWirelessGuest_0202c540((struct LocalWireless_0202b2f0*)func_0202ae18())) {
        func_ov017_021cebcc(0, type & 0xff, eventId);
        return;
    }
    struct EventSyncEntry_020e39d4* foundEntry = (struct EventSyncEntry_020e39d4*)FindEventSyncEntry_020e385c(entry, type, eventId);
    if (foundEntry == NULL) return;
    if (foundEntry->playerMask_5_ != 0 && foundEntry->playerMask_5_ == foundEntry->unknown_6_) return;
    foundEntry->playerMask_5_ |= (1 << protagonistObjectIndex);
}
