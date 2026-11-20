#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

struct EventSyncEntry_020e385c {
    unsigned int eventId_0_;
    unsigned char type_4_;
};
struct Struct_020e3814 {
    int unknown_0_;
    unsigned char unknown_4_;
    unsigned char unknown_5_;
    unsigned char unknown_6_;
};

extern "C" struct EventSyncEntry_020e385c* FindEventSyncEntry_020e385c(struct EventSyncEntry_020e385c* entry, int type, int eventId);
extern "C" void func_020e3840(struct Struct_020e3814* arg0);
extern "C" void* func_0202ae18(void);
extern "C" int IsNotLocalWirelessGuest_0202c508(void*);
extern "C" void func_ov017_021cebcc(int, int, int);

// USA: func_020e3994
extern "C" ARM void func_020e3994(struct EventSyncEntry_020e385c* arg0, int arg1, int arg2) {
    struct EventSyncEntry_020e385c* var0 = FindEventSyncEntry_020e385c(arg0, arg1, arg2);
    if (var0 == NULL) return;
    func_020e3840((struct Struct_020e3814*)var0);
    if (!IsNotLocalWirelessGuest_0202c508(func_0202ae18())) return;
    func_ov017_021cebcc(3, arg1 & 0xff, arg2);
}
