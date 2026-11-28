#include <globaldefs.h>

// USA: GetMusicState_0209ca68
extern "C" ARM int GetMusicState_0209ca68(char* manager) {
    return *(int*)(manager + 0xb0);
}
