#include <globaldefs.h>

extern "C" void* GetWirelessDriver_020d41d8(void);
extern "C" int func_020d41e8(void);
extern "C" void InvalidateDataCacheRange(const void* addr, unsigned int size);

struct WirelessDriver_020d4ac8 {
    unsigned char unknown_0_[4];
    void* pStatus_4_;
};

// USA: GetWirelessSignalStrength_020d4ac8
extern "C" ARM int GetWirelessSignalStrength_020d4ac8(void) {
    struct WirelessDriver_020d4ac8* wirelessDriver = (struct WirelessDriver_020d4ac8*)GetWirelessDriver_020d41d8();
    if (func_020d41e8() != 0) return 0;

    InvalidateDataCacheRange((const void*)wirelessDriver->pStatus_4_, 2);
    unsigned short state = *(unsigned short*)wirelessDriver->pStatus_4_;

    if (state != 9) {
        if (state != 10 && state != 11) goto return_zero;
    } else {
        InvalidateDataCacheRange((const void*)((char*)wirelessDriver->pStatus_4_ + 0x182), 2);
        if (*(unsigned short*)((char*)wirelessDriver->pStatus_4_ + 0x182) == 0) return 0;
    }

    InvalidateDataCacheRange((const void*)((char*)wirelessDriver->pStatus_4_ + 0xbc), 2);
    return *(unsigned short*)((char*)wirelessDriver->pStatus_4_ + 0xbc);
return_zero:
    return 0;
}
