#include <globaldefs.h>

extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" int func_0203aa98(void*, int);

// USA: LoadExtraSoundSet_0205ebc0
extern "C" ARM void LoadExtraSoundSet_0205ebc0(void* manager, int soundSetToLoad, int soundSet) {
    func_0203aa80(manager, *(int*)((char*)manager + 0xc0));
    func_0203aa98(manager, soundSetToLoad);
    *(short*)((char*)manager + 0xc4) = (short)soundSet;
}
