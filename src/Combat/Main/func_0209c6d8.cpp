#include <globaldefs.h>
extern "C" void func_0203aaf8(void*, void*, int*);
extern "C" void func_0203aba8(struct Struct_0203aba8*, void*, void*);

struct MusicManager_02109bf4_4;
extern "C" void StopMusic_0209c678(struct MusicManager_02109bf4_4* manager, int fadeDuration);
extern "C" void func_0203aa80(void* arg0, int arg1);
extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);
extern "C" void UpdateSound_020bbd9c(void);

// USA: PlayJingle_0209c6d8
extern "C" ARM void PlayJingle_0209c6d8(void* manager, int jingleIndex) {
    StopMusic_0209c678((struct MusicManager_02109bf4_4*)manager, 0);
    {
        int heapState = *(int*)((char*)manager + 0xb4);
        if (heapState > 0) {
            func_0203aa80(manager, heapState);
        }
    }
    *(short*)((char*)manager + 0xce) = jingleIndex;
    func_0203aaf8((void*)(manager), (void*)(jingleIndex), (int*)(0));
    func_0203aba8((struct Struct_0203aba8*)(manager), (void*)(jingleIndex), (void*)((char*)manager + 0xc4));
    SetMusicVolume_0209c2e0(manager, *(unsigned char*)((char*)manager + 0xcd), 0);
    UpdateSound_020bbd9c();
}
