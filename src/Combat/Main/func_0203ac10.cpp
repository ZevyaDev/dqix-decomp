#include <globaldefs.h>

extern "C" void* SetCurrentSoundArchive_020bd42c(void*);
extern "C" void* func_020bc018(void* arg0, int arg1);

// USA: StopSequence_0203ac10
extern "C" ARM void StopSequence_0203ac10(void* manager, void* handle, int fadeDuration) {
    char* managerBytes = (char*)manager;
    if (*(void**)managerBytes == NULL) return;
    SetCurrentSoundArchive_020bd42c(managerBytes + 0x4);
    func_020bc018(handle, fadeDuration);
}
