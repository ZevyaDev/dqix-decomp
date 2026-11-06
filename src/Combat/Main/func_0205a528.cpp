#include <globaldefs.h>
#include "std_library_functions.h"

extern "C" void __clear(void* arg0, int arg1);
extern "C" int CompareBytes_02001aec(const void* left, const void* right, unsigned int count);
extern "C" int func_0205a658(void* arg0, void* arg1, int arg2, int arg3);
extern "C" int func_0205a984(void* arg0, void* arg1, int arg2, int arg3);
struct Struct_0205a528;
extern "C" int func_0205aaf8(Struct_0205a528*, void*, int);
extern "C" int func_0205ab78(void* arg0, void* arg1, int arg2);

extern char data_020f0504[];
extern char data_020f0509[];
extern char data_020f050e[];
extern char data_020f0513[];

// USA: LoadSpriteSetFile_0205a528
extern "C" ARM int LoadSpriteSetFile_0205a528(void* spriteSet, void* fileData, int size, int allocator) {
    char magic[5];

    __clear(magic, 5);
    memcpy(magic, fileData, 4);

    if (CompareBytes_02001aec(magic, data_020f0504, 4) == 0 && func_0205a658(spriteSet, fileData, size, allocator)) {
        return 1;
    } else if (CompareBytes_02001aec(magic, data_020f0509, 4) == 0) {
        if (func_0205a984(spriteSet, fileData, size, allocator)) {
            return 1;
        }
    } else if (CompareBytes_02001aec(magic, data_020f050e, 4) == 0) {
        if (func_0205aaf8((Struct_0205a528*)spriteSet, fileData, size)) {
            return 1;
        }
    } else if (CompareBytes_02001aec(magic, data_020f0513, 4) == 0) {
        if (func_0205ab78(spriteSet, fileData, size)) {
            return 1;
        }
    }
    return 0;
}
