#include <globaldefs.h>

extern "C" void* SetCurrentSoundArchive_020bd42c(void*);
extern "C" int func_020bec98(void* arg0);
extern "C" void func_020bec58(void* volatile* arg0, int arg1);

// USA: StopStream_0203ad88
extern "C" ARM int StopStream_0203ad88(void* manager, void* handle, int fadeDuration) {
    char* managerBytes = (char*)manager;
    int playbackPosition;
    if (*(void**)managerBytes == NULL) return 0;
    SetCurrentSoundArchive_020bd42c(managerBytes + 0x4);
    if (handle != NULL) {
        playbackPosition = func_020bec98(handle);
        func_020bec58((void* volatile*)handle, fadeDuration);
    } else {
        playbackPosition = func_020bec98(managerBytes + 0x9c);
        func_020bec58((void* volatile*)(managerBytes + 0x9c), fadeDuration);
    }
    *(short*)(managerBytes + 0xa4) = -1;
    return playbackPosition;
}
