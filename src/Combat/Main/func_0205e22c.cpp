#include <globaldefs.h>
#include "Combat/SearchEntry.h"

#if defined(jpn)
#define func_0202ae18 func_0202a9d0
#endif

extern "C" void* memset(void* arg0, int arg1, unsigned int arg2);

struct Struct_0202c7bc_2;
extern "C" ARM void ResetPacketNodeList_0205e16c(struct Struct_0202c7bc_2* list);

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

extern "C" void* func_0202ae18(void);
extern "C" void UpdateLocalWirelessPlayerCount_0202c288(void);
extern "C" void* func_0202c19c(void* arg0);

struct LocalWireless_0202b2f0;

struct Struct_0205e22c {
    unsigned char unknown_0_[0x10];
    unsigned char slotKind_10_;
    unsigned char unknown_11_[0x14 - 0x11];
};

// USA: ResetLocalWirelessPacketQueue_0205e22c
extern "C" ARM void ResetLocalWirelessPacketQueue_0205e22c(void* packetQueue) {
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)packetQueue + 0x1500));
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)packetQueue + 0x150c));
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)packetQueue + 0x1518));

    memset(packetQueue, 0, 0x1500);

    struct Struct_0205e18c_2* nodes = (struct Struct_0205e18c_2*)packetQueue;
    for (int i = 0; i < 0xc0; i++) {
        AppendPacketNode_0205e18c((struct Struct_0205e18c*)((char*)packetQueue + 0x1500), &nodes[i]);
    }

    void* wireless = func_0202ae18();
    UpdateLocalWirelessPlayerCount_0202c288();

    struct Struct_0205e22c* ownRecord = (struct Struct_0205e22c*)func_0202c19c(wireless);
    memset(ownRecord, 0, 0x74);

    for (int i = 0; i < 5; i++) {
        ownRecord[i].slotKind_10_ = 0xff;
    }

    int protagonistObjectIndex = 0;
    int fillByte = 0;
    int recordSize = 0x74;
    for (; protagonistObjectIndex < 4; protagonistObjectIndex++) {
        void* playerRecord = GetLocalWirelessPlayerRecord_0202c178((struct LocalWireless_0202b2f0*)wireless, protagonistObjectIndex);
        if (playerRecord != NULL) {
            memset(playerRecord, fillByte, recordSize);
        }
    }

    memset((char*)packetQueue + 0x1524, 0xff, 0x20);
}
