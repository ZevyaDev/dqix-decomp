#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
};
struct EventSyncEntry_020e3814 {
    int eventId_0_;
    unsigned char type_4_, unknown_5_, unknown_6_;
};
struct LocalWireless_0202b2f0;

extern "C" struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId);
extern "C" struct EventSyncEntry_020e3814* func_020e38a0(struct EventSyncEntry_020e3814* arg0);
extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(struct LocalWireless_0202b2f0* wireless);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: AddEventSyncEntry_020e392c
extern "C" ARM void AddEventSyncEntry_020e392c(struct EventSyncEntry_020e385c* entry, int type, int eventId) {
    if (IsLocalWirelessGuest_0202c540((struct LocalWireless_0202b2f0*)func_0202ae18())) return;
    if (FindEventSyncEntry_020e385c(entry, type, eventId) != NULL) return;
    struct EventSyncEntry_020e3814* freeEntry = func_020e38a0((struct EventSyncEntry_020e3814*)entry);
    if (freeEntry == NULL) return;
    GameState::GetInstance();
    freeEntry->type_4_ = type & 0xff;
    freeEntry->eventId_0_ = eventId;
    func_ov017_021cebcc(3, type & 0xff, eventId);
}
