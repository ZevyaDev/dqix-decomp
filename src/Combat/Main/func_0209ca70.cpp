#include <globaldefs.h>

extern "C" void SetMusicVolume_0209c2e0(void* manager, int volume, int fadeDuration);

// USA: SetMusicVolumeLevel_0209ca70
extern "C" ARM void SetMusicVolumeLevel_0209ca70(void* manager, int volumeLevel) {
    if (volumeLevel < 1) return;
    if (volumeLevel > 5) return;
    *(unsigned char*)((char*)manager + 0xcc) = volumeLevel;
    SetMusicVolume_0209c2e0(manager, *(unsigned char*)((char*)manager + 0xcd), 0);
}
