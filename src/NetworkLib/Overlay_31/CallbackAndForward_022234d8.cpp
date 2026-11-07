#include <globaldefs.h>

extern "C" int func_ov031_02223478(int);
extern "C" int func_ov031_0223b61c(int, int*, int);
extern "C" void DC_FlushRange(const void* addr, unsigned int size);

extern "C" void func_ov031_0223b710(int arg0);

typedef void (*VRAMLoader_ov031_022234d8)(void*, int, int);

// USA: LoadFileToVRAM_ov031_022234d8
extern "C" ARM void LoadFileToVRAM_ov031_022234d8(int path, VRAMLoader_ov031_022234d8 loadToVRAM) {
    int localizedPath = func_ov031_02223478(path);
    int length;
    int fileData = func_ov031_0223b61c(localizedPath, &length, 4);
    DC_FlushRange((void*)fileData, length);
    loadToVRAM((void*)fileData, 0, length);
    func_ov031_0223b710(fileData);
}
