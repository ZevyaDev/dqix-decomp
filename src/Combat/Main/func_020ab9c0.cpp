#include <globaldefs.h>
#include "Input/Input.h"

extern "C" int ReadSaveMemory_02075910(int offset, void* destination, int length, int isAsync);
extern "C" int func_01ff85b8(void* arg0, int arg1);

struct SaveHeader_020ab9c0 {
    int checksum_0_;
    unsigned char isQuickSave_4_;
    unsigned char hasSave_5_;
    char unknown_6_[14];
};

// USA: GetSaveHeaderStatus_020ab9c0
extern "C" ARM int GetSaveHeaderStatus_020ab9c0(int isSecondCopy) {
    int headerOffset = isSecondCopy ? 0x8010 : 0x10;
    if (g_keyManager.TestKeysHeld(0x2000)) {
        return 2;
    }

    struct SaveHeader_020ab9c0 header;
    if (!ReadSaveMemory_02075910(headerOffset, &header, 0x14, 0)) {
        return 1;
    }
    void* headerBytes = &header;
    if (func_01ff85b8((char*)headerBytes + 4, 0x10) != header.checksum_0_) {
        return 2;
    }
    if (header.hasSave_5_ == 0) {
        return 3;
    }
    return (header.isQuickSave_4_ == 1) ? 4 : 0;
}
