#include <globaldefs.h>

extern "C" unsigned short GetMainBGVRAMBanks(void);

// USA: SaveMainBGVRAMBanks_ov011_02184c00
extern "C" ARM void SaveMainBGVRAMBanks_ov011_02184c00(void* menu) {
    *(unsigned int*)((char*)menu + 0x1d4) = GetMainBGVRAMBanks();
}
