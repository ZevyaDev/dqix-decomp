#include <globaldefs.h>

extern void* gCurrentSoundArchive_02110370;

// USA: SetCurrentSoundArchive_020bd42c
extern "C" ARM void* SetCurrentSoundArchive_020bd42c(void* archive) {
    void* previousArchive = gCurrentSoundArchive_02110370;
    gCurrentSoundArchive_02110370 = archive;
    return previousArchive;
}
