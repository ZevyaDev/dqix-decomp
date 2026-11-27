#include <globaldefs.h>

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void SaveAndDisableVCounterInterrupt_020d8654(void);
extern "C" void func_020d84e4(void);
extern "C" void func_020d84e8(void);
extern "C" void* func_0202ae18(void);
extern "C" void RestoreVCounterInterrupt_020d8694(void);
extern "C" int IsLocalWirelessOn_0202b7d8(int* wireless);

struct Struct_0205e1e4_2 {
    char unknown_0_[0x18];
    struct Struct_0205e1e4_2* unknown_18_;
};
struct Struct_0205e1e4 {
    struct Struct_0205e1e4_2* unknown_0_;
    struct Struct_0205e1e4_2* unknown_4_;
    int unknown_8_;
};
extern "C" struct Struct_0205e1e4_2* PopPacketNode_0205e1e4(struct Struct_0205e1e4* list);

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};
extern "C" void AppendPacketNode_0205e18c(struct Struct_0205e18c* list, struct Struct_0205e18c_2* node);

// USA: PopReceivedPacket_0205e41c
extern "C" ARM struct Struct_0205e1e4_2* PopReceivedPacket_0205e41c(void* packetQueue, int* senderIndex) {
    struct Struct_0205e1e4_2* var0;
    SaveAndDisableVCounterInterrupt_020d8654();
    func_020d84e4();
    var0 = NULL;
    if (IsLocalWirelessOn_0202b7d8((int*)func_0202ae18())) {
        var0 = PopPacketNode_0205e1e4((struct Struct_0205e1e4*)((char*)packetQueue + 0x1518));
        if (var0 == NULL) {
            *senderIndex = -1;
            var0 = NULL;
        } else {
            AppendPacketNode_0205e18c((struct Struct_0205e18c*)((char*)packetQueue + 0x1500), (struct Struct_0205e18c_2*)var0);
            *senderIndex = *(short*)((char*)var0 + 0x14);
        }
    }
    func_020d84e8();
    RestoreVCounterInterrupt_020d8694();
    return var0;
}
