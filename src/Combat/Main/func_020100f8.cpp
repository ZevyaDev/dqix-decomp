#include <globaldefs.h>
extern "C" int func_0202e09c(int);

// USA: GetFollowCamera_020100f8
extern "C" ARM int GetFollowCamera_020100f8(char* gameState) {
    int camera = *(int*)(gameState + 0x3b0);
    if (camera != 0) {
        if (func_0202e09c((int)(camera)) & 4) {
            return *(int*)(gameState + 0x3b0);
        }
    }
    return 0;
}
