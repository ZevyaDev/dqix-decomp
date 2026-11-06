#include <globaldefs.h>


extern "C" void func_020d8654(void);
extern "C" void func_020d84e4(void);
extern "C" void func_020d84e8(void);
extern "C" void* GetLocalWireless_0202ae18(void);
extern "C" void func_020d8694(void);
extern "C" void HaltForever_020c9be0(void);
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
extern "C" struct Struct_0205e1e4_2* func_0205e1e4(struct Struct_0205e1e4* arg0);

struct Struct_0205e18c_2 {
    char unknown_0_[0x18];
    struct Struct_0205e18c_2* unknown_18_;
};
struct Struct_0205e18c {
    struct Struct_0205e18c_2* unknown_0_;
    struct Struct_0205e18c_2* unknown_4_;
    int unknown_8_;
};
extern "C" void func_0205e18c(struct Struct_0205e18c* arg0, struct Struct_0205e18c_2* arg1);

struct Struct_0205e3ec { unsigned int unknown_0_[4]; };
struct LocalWirelessPacket_0205e330_3 { unsigned char unknown_0_; unsigned char unknown_1_; unsigned char unknown_2_[2]; struct Struct_0205e3ec unknown_4_; };
extern "C" struct LocalWirelessPacket_0205e330_3* func_0205e3ec(struct LocalWirelessPacket_0205e330_3* arg0, struct LocalWirelessPacket_0205e330_3* arg1);

struct LocalWirelessPacketNode_0205e330 {
    char unknown_0_[0x16];
    short flags_16_;
};

struct Struct_0205e330_2 {
    char unknown_0_[0x508];
    volatile int freeCount_508_;
    char unknown_50c_[0x514 - 0x508 - 4];
    volatile int outgoingCount_514_;
    char unknown_518_[0x520 - 0x514 - 4];
    volatile int incomingCount_520_;
};

// USA: QueueOutgoingPacket_0205e330
extern "C" ARM void QueueOutgoingPacket_0205e330(unsigned char* packetQueue, struct LocalWirelessPacket_0205e330_3* packet, short flags) {
    struct Struct_0205e1e4_2* node;

    func_020d8654();
    func_020d84e4();

    if (IsLocalWirelessOn_0202b7d8((int*)GetLocalWireless_0202ae18())) {
        node = func_0205e1e4((struct Struct_0205e1e4*)(packetQueue + 0x1500));
        if (node != NULL) {
            func_0205e3ec((struct LocalWirelessPacket_0205e330_3*)node, packet);
            ((struct LocalWirelessPacketNode_0205e330*)node)->flags_16_ = flags;
            func_0205e18c((struct Struct_0205e18c*)(packetQueue + 0x150c), (struct Struct_0205e18c_2*)node);
        } else {
            for (int i = 0; i < ((struct Struct_0205e330_2*)(packetQueue + 0x1000))->freeCount_508_; i++);

            for (int i = 0; i < ((struct Struct_0205e330_2*)(packetQueue + 0x1000))->outgoingCount_514_; i++);

            for (int i = 0; i < ((struct Struct_0205e330_2*)(packetQueue + 0x1000))->incomingCount_520_; i++);

            HaltForever_020c9be0();
        }
    }

    func_020d84e8();
    func_020d8694();
}
