#include <globaldefs.h>

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
    unsigned char unknown_7_;
};

extern "C" struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId);

// USA: func_020e3ad0
extern "C" ARM int func_020e3ad0(struct EventSyncEntry_020e385c* arg0, int arg1, int arg2) {
    struct EventSyncEntry_020e385c* var0 = FindEventSyncEntry_020e385c(arg0, arg1, arg2);
    if (var0 == NULL) {
        return 1;
    }
    if (var0->unknown_5_ != 0) {
        if (var0->unknown_5_ == var0->unknown_6_) {
            return 1;
        }
    }
    return 0;
}
