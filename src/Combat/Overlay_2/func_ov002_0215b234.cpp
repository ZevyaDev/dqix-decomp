#include <globaldefs.h>

extern unsigned char gSoundEffectManager_02108760;
extern char gMusicManager_02109bf4;
extern "C" unsigned char GetSoundEffectVolumeLevel_0205ea18(unsigned char*);
extern "C" unsigned char GetMusicVolumeLevel_0209ca98(char*);

#if defined(jpn)
#define FIELDS_0215b234 0x1af4
#else
#define FIELDS_0215b234 0x1c2c
#endif

// USA: CopyVolumeLevelsToMenu_ov002_0215b234
extern "C" ARM void CopyVolumeLevelsToMenu_ov002_0215b234(unsigned char* menu) {
    menu[FIELDS_0215b234] = GetMusicVolumeLevel_0209ca98(&gMusicManager_02109bf4);
    menu[FIELDS_0215b234 + 1] = GetSoundEffectVolumeLevel_0205ea18(&gSoundEffectManager_02108760);
}
