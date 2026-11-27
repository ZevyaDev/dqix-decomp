#include <globaldefs.h>

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};

extern "C" void SaveAndDisableVCounterInterrupt_020d8654(void);
extern "C" void RestoreVCounterInterrupt_020d8694(void);

// USA: PopPacketNode_0205e1e4
extern "C" ARM struct Struct_0205e1e4_2* PopPacketNode_0205e1e4(struct Struct_0205e1e4* list) {
    struct Struct_0205e1e4_2* var0;
    SaveAndDisableVCounterInterrupt_020d8654();
    var0 = list->unknown_0_;
    if (var0 != NULL) {
        list->unknown_0_ = var0->unknown_18_;
        list->unknown_8_--;
    }
    RestoreVCounterInterrupt_020d8694();
    return var0;
}
