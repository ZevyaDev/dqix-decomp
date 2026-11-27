#include <globaldefs.h>

#if defined(jpn)
#define func_0203ac40 func_0203a698
#endif

#if defined(jpn)
#endif

extern "C" void func_0203ac40(void* arg0, int arg1, int arg2, int arg3);

// USA: PlayPendingSound_0203aa08
extern "C" ARM void PlayPendingSound_0203aa08(void* manager) {
    short soundSet;
    if (*(void**)manager == NULL) return;
    soundSet = *(short*)((char*)manager + 0xac);
    if (soundSet < 0) return;
    func_0203ac40(manager, soundSet, *(short*)((char*)manager + 0xae), 0);
    *(short*)((char*)manager + 0xac) = -1;
    *(short*)((char*)manager + 0xae) = -1;
}
