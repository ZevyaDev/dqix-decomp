#include <globaldefs.h>

struct Struct_0202c7bc_2;
extern "C" ARM void ResetPacketNodeList_0205e16c(struct Struct_0202c7bc_2* list);
extern "C" void ResetLocalWirelessPacketQueue_0205e22c(void* packetQueue);

struct Struct_0202c7bc {
    unsigned char unknown_0_[0x14];
    unsigned short unknown_14_;
    unsigned short unknown_16_;
    unsigned int unknown_18_;
};

// USA: func_0202c7bc
extern "C" ARM void* func_0202c7bc(void* arg0) {
    struct Struct_0202c7bc* var0 = (struct Struct_0202c7bc*)arg0;
    struct Struct_0202c7bc* var1 = (struct Struct_0202c7bc*)((char*)arg0 + 0x1500);
    do {
        var0->unknown_14_ = 0;
        var0->unknown_16_ = 0;
        var0->unknown_18_ = 0;
        var0++;
    } while (var0 < var1);
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x1500));
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x150c));
    ResetPacketNodeList_0205e16c((struct Struct_0202c7bc_2*)((char*)arg0 + 0x1518));
    ResetLocalWirelessPacketQueue_0205e22c(arg0);
    return arg0;
}
