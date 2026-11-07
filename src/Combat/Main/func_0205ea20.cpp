#include <globaldefs.h>
#if defined(jpn)
#define data_020f057c data_020f05e4
#define data_ov031_02257180 data_ov031_02257960
#define data_020f0594 data_020f05fc
#endif

extern int data_020f057c;
extern int data_020f0594;
extern int data_ov031_02257180;

extern "C" void func_0203a974(void* arg0, int arg1, void* arg2, int arg3, int arg4);

extern "C" int func_0203aa64(void* arg0);
extern "C" int func_0203aa98(void* arg0, int arg1);

// USA: LoadSoundEffectSet_0205ea20
extern "C" ARM void LoadSoundEffectSet_0205ea20(void* arg0, int soundSet) {
    char* manager = (char*)arg0;
    int path = 0;
    if (soundSet == 0x64) {
        path = (int)&data_020f057c;
    } else if (soundSet == 0x65) {
        path = (int)&data_020f0594;
    }
    if (path != 0) {
        func_0203a974(manager, path, &data_ov031_02257180, 0x4b000, 0);
    }
    *(int*)(manager + 0xb0) = func_0203aa64(manager);
    *(short*)(manager + 0xb4) = (short)soundSet;
    func_0203aa98(manager, soundSet);
    int heapState = func_0203aa64(manager);
    *(int*)(manager + 0xc0) = heapState;
    *(int*)(manager + 0xb8) = heapState;
}
