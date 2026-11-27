#include <globaldefs.h>

struct EventSyncEntry_020e3814 {
    int eventId_0_;
    unsigned char type_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

// USA: ResetEventSyncEntry_020e3840
extern "C" ARM void ResetEventSyncEntry_020e3840(struct EventSyncEntry_020e3814* entry) {
    entry->eventId_0_ = -1;
    entry->type_4_ = 0;
    entry->unknown_5_ = 0;
    entry->unknown_6_ = 0;
}
