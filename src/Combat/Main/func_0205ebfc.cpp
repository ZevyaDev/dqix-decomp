#include <globaldefs.h>

#if defined(jpn)
#endif

extern "C" void func_0203ac40(void*, int, int, int);

// USA: PlayExtraSoundEffect_0205ebfc
extern "C" ARM void PlayExtraSoundEffect_0205ebfc(void* manager, int soundEffectIndex, int handle) {
    short soundSet = *(short*)((char*)manager + 0xc4);
    if (soundSet >= 0) {
        func_0203ac40(manager, soundSet, soundEffectIndex, handle);
    }
}
