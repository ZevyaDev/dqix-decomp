#include <globaldefs.h>
#include "GameState/GameState.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
};
struct Struct_020e3814 {
    int unknown_0_;
    unsigned char unknown_4_, unknown_5_, unknown_6_;
};
struct LocalWireless_0202b2f0;

extern "C" struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId);
extern "C" struct Struct_020e3814* func_020e38a0(struct Struct_020e3814* arg0);
extern "C" void* func_0202ae18(void);
extern "C" int IsLocalWirelessGuest_0202c540(struct LocalWireless_0202b2f0* wireless);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: func_020e392c
extern "C" ARM void func_020e392c(struct EventSyncEntry_020e385c* arg0, int arg1, int arg2) {
    if (IsLocalWirelessGuest_0202c540((struct LocalWireless_0202b2f0*)func_0202ae18())) return;
    if (FindEventSyncEntry_020e385c(arg0, arg1, arg2) != NULL) return;
    struct Struct_020e3814* var0 = func_020e38a0((struct Struct_020e3814*)arg0);
    if (var0 == NULL) return;
    GameState::GetInstance();
    var0->unknown_4_ = arg1 & 0xff;
    var0->unknown_0_ = arg2;
    func_ov017_021cebcc(3, arg1 & 0xff, arg2);
}
