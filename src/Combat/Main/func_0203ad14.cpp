#include <globaldefs.h>

extern "C" void* SetCurrentSoundArchive_020bd42c(void*);
extern "C" int func_020bec30(void* arg0, int arg1, int arg2);
extern "C" void UpdateSound_020bbd9c(void);

// USA: PlayStream_0203ad14
extern "C" ARM int PlayStream_0203ad14(void* manager, int streamIndex, void* handle, int startPosition) {
    char* managerBytes = (char*)manager;
    int isStarted;
    if (*(void**)managerBytes == NULL) return 0;
    SetCurrentSoundArchive_020bd42c(managerBytes + 0x4);
    *(unsigned short*)(managerBytes + 0xa4) = streamIndex;
    *(int*)(managerBytes + 0xa8) = 0;
    if (handle != NULL) {
        isStarted = func_020bec30(handle, streamIndex, startPosition);
    } else {
        isStarted = func_020bec30(managerBytes + 0x9c, streamIndex, startPosition);
    }
    UpdateSound_020bbd9c();
    return isStarted;
}
