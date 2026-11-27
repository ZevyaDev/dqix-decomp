#include <globaldefs.h>

extern void* gCurrentSoundArchive_02110370;

// USA: GetCurrentSoundArchive_020bd444
extern "C" ARM void* GetCurrentSoundArchive_020bd444(void) {
    return gCurrentSoundArchive_02110370;
}
