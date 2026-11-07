#include <globaldefs.h>

#include "NitroSDK/Cache.h"


extern "C" int CheckWirelessState_020d424c(int, int, int);
extern "C" int Memcpy16Bit_020ca3b8(int, void*, int);
extern "C" void SetWirelessCommandCallback_020d404c(int command, int callback);
extern "C" int func_020d40bc(int, int, void*, int, int, int, int);

extern char data_02114d80;


// USA: func_020d69cc
extern "C" ARM int func_020d69cc(int arg0, int arg1, int arg2, int arg3, unsigned short arg4, unsigned char arg5) {
    int var0 = CheckWirelessState_020d424c(2, 7, 9);
    if (var0 != 0) {
        return var0;
    }
    if (arg1 == 0) {
        return 6;
    }
    if ((unsigned int)arg2 > 0x70) {
        return 6;
    }
    Memcpy16Bit_020ca3b8(arg1, &data_02114d80, arg2);
    CleanCacheRange(&data_02114d80, arg2);
    SetWirelessCommandCallback_020d404c(0x18, arg0);
    var0 = func_020d40bc(0x18, 5, &data_02114d80, arg2, arg3, arg4, arg5);
    if (var0 == 0) {
        var0 = 2;
    }
    return var0;
}
