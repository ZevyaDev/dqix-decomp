#include <globaldefs.h>

struct EventSyncEntry_020e3814 {
    int eventId_0_;
    unsigned char type_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

// USA: func_020e3840
extern "C" ARM void func_020e3840(struct EventSyncEntry_020e3814* arg0) {
    arg0->eventId_0_ = -1;
    arg0->type_4_ = 0;
    arg0->unknown_5_ = 0;
    arg0->unknown_6_ = 0;
}
