#include <globaldefs.h>

// USA: GetMusicVolumeLevel_0209ca98
extern "C" ARM unsigned char GetMusicVolumeLevel_0209ca98(char* manager) {
    return *(unsigned char*)(manager + 0xcc);
}
