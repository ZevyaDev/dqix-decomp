#include <globaldefs.h>

struct EventSyncEntry_020e3814 {
    int eventId_0_;
    unsigned char type_4_, unknown_5_, unknown_6_;
};
extern "C" void ResetEventSyncEntry_020e3840(struct EventSyncEntry_020e3814* entry);

// USA: func_020e38a0
extern "C" ARM struct EventSyncEntry_020e3814* func_020e38a0(struct EventSyncEntry_020e3814 *arg0) {
    int var0;
    for (var0 = 0; var0 < 4; ) {
        if (arg0->type_4_ == 0) {
            ResetEventSyncEntry_020e3840(arg0);
            return arg0;
        }
        var0++;
        arg0++;
    }
    return NULL;
}
