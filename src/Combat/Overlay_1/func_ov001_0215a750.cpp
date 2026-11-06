#if defined(jpn)
#define R(j,u) (j)
#else
#define R(j,u) (u)
#endif
#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"

void* LoadFileIntoMemory(const char*, void*, unsigned int*);

extern char gFileScratchSpace_0211e33c[];

// USA: func_ov001_0215a750
extern "C" ARM unsigned int func_ov001_0215a750(const char* arg0, void** arg1) {
    BackgroundLoader::AddLockGlobal();
    unsigned int var0 = 0;
    void* var1 = LoadFileIntoMemory(arg0, gFileScratchSpace_0211e33c, &var0);
    if (var1 == NULL) return 0;
    BackgroundLoader::RemoveLockGlobal();
    *arg1 = gFileScratchSpace_0211e33c;
    return var0;
}
