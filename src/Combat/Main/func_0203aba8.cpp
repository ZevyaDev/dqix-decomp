#include <globaldefs.h>

extern "C" void* SetCurrentSoundArchive_020bd42c(void* archive);
extern "C" int func_020be760(void* arg0, void* arg1);

struct MusicManager_0203aba8 {
    void* pHeap_0_;
};

// USA: PlaySequence_0203aba8
extern "C" ARM int PlaySequence_0203aba8(struct MusicManager_0203aba8* manager, void* sequenceIndex, void* handle) {
    int isStarted;
    if (manager->pHeap_0_ == 0) {
        return 0;
    }
    SetCurrentSoundArchive_020bd42c((char*)manager + 4);
    isStarted = 1;
    if (handle != 0) {
        if (func_020be760(handle, sequenceIndex) == 0) {
            isStarted = 0;
        }
    } else {
        if (func_020be760((char*)manager + 0x98, sequenceIndex) == 0) {
            isStarted = 0;
        }
    }
    return isStarted != 0;
}
