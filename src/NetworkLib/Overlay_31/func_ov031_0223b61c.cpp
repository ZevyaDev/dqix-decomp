#include <globaldefs.h>
#include "NitroSDK/Filesystem/NitroVM.h"
#include "NitroSDK/Filesystem/FileAccessor.h"
#include "NitroSDK/Filesystem/LowNitroHandle.h"

#if defined(jpn)
#define func_020c9be0 func_020cb6ac
#endif


struct Struct_ov031_0223b61c { unsigned char unknown_0_[0x84]; void* unknown_84_; };
struct Struct_ov031_02290d24_3 { Struct_ov031_0223b61c* unknown_0_; };
extern struct Struct_ov031_02290d24_3 data_ov031_02290d24;

extern "C" void func_ov031_0223bfa0(void*);
extern "C" void func_020c9be0(void);
extern "C" int func_ov031_0223b744(char*, char*, int);
extern "C" void* AllocateZeroedMemory_ov031_0223cf4c(unsigned int size, int alignAndDir);
extern "C" void func_020ca7e8(void*, void*);
extern "C" unsigned int FreeAndClearPointer_ov031_0223cf70(void** pointer);
extern char data_ov031_0224c56c[];

// USA: LoadFile_ov031_0223b61c
extern "C" ARM void* LoadFile_ov031_0223b61c(char* path, unsigned int* outLength, int alignAndDir) {
    func_ov031_0223bfa0(data_ov031_02290d24.unknown_0_->unknown_84_);

    NitroVM reader;
    NitroVM_Initialize(&reader);
    if (!NitroVM_PrepareReadFileByPath(&reader, path))
        func_020c9be0();

    unsigned int fileSize = reader.fileInfo.endOffset - reader.fileInfo.startOffset;
    if (outLength) *outLength = fileSize;

    int readAlignAndDir = func_ov031_0223b744(path, data_ov031_0224c56c, 2) ? -4 : alignAndDir;

    void* fileData = AllocateZeroedMemory_ov031_0223cf4c(fileSize, readAlignAndDir);
    NitroVM_ReadSync(&reader, fileData, fileSize);
    NitroVM_FinishRead(&reader);

    if (readAlignAndDir > 0) {
        return fileData;
    }

    unsigned int decompressedSize = *(unsigned int*)fileData >> 8;
    if (outLength) *outLength = decompressedSize;
    void* decompressedData = AllocateZeroedMemory_ov031_0223cf4c(decompressedSize, alignAndDir);
    func_020ca7e8(fileData, decompressedData);
    FreeAndClearPointer_ov031_0223cf70(&fileData);
    return decompressedData;
}
