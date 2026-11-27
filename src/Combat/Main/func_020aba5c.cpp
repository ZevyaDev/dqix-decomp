#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" int ReadSaveMemory_02075910(int offset, void* destination, int length, int isAsync);
extern "C" int func_01ff85b8(void* arg0, int arg1);
extern "C" void func_02075acc(int arg0, void* arg1, int arg2, int arg3);
extern char data_020f1bf0;

struct SaveHeader_020aba5c {
    int checksum_0_;
    char unknown_4_[4];
    char formatVersion_8_[12];
};

// USA: ClearSaveHeader_020aba5c
extern "C" ARM int ClearSaveHeader_020aba5c(int isSecondCopy) {
    int testByte;
    if (!ReadSaveMemory_02075910(0, &testByte, 1, 0)) return 0;

    struct SaveHeader_020aba5c header;
    memset(&header, 0, 0x14);
    strcpy(header.formatVersion_8_, &data_020f1bf0);
    header.checksum_0_ = func_01ff85b8((char*)&header + 4, 0x10);
    func_02075acc(isSecondCopy ? 0x8010 : 0x10, &header, 0x14, 0);
    return 1;
}
