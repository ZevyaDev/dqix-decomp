#include <globaldefs.h>

typedef void (*Type_020bd444_4)(int, int, int, int);
extern "C" int func_020be09c(unsigned int arg0, Type_020bd444_4 arg1, void* arg2, unsigned int arg3, int arg4);

extern "C" void func_020be44c(int, int, int, int);
extern "C" void* GetCurrentSoundArchive_020bd444(void);
extern "C" int GetLoadedSoundFile_020bd8ac(unsigned int fileId);
extern "C" void SetLoadedSoundFile_020bd8d4(unsigned int fileId, int loadedAddress);

// USA: func_020be13c
extern "C" ARM int func_020be13c(unsigned int arg0, int arg1, int arg2) {
    int var0 = GetLoadedSoundFile_020bd8ac(arg0);
    if (var0 == 0) {
        void* var1 = arg2 ? GetCurrentSoundArchive_020bd444() : 0;
        var0 = func_020be09c(arg0, func_020be44c, var1, arg0, arg1);
        if (arg2 && var0 != 0) {
            SetLoadedSoundFile_020bd8d4(arg0, var0);
        }
    }
    return var0;
}
