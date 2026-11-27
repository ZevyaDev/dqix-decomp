#include <globaldefs.h>
#include "NitroSDK/Cache.h"

extern "C" int func_ov031_02223478(int);
extern "C" int LoadFile_ov031_0223b61c(int, int*, int);

extern "C" void FreeLoadedFile_ov031_0223b710(int fileData);

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);

// USA: LoadFileToVRAM_ov031_022234d8
extern "C" ARM void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM) {
    int localizedPath = func_ov031_02223478(path);
    int length;
    int fileData = LoadFile_ov031_0223b61c(localizedPath, &length, 4);
    CleanInvalidateCacheRange((const void*)((void*)fileData), length);
    loadToVRAM((void*)fileData, 0, length);
    FreeLoadedFile_ov031_0223b710(fileData);
}
