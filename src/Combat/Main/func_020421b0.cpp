#include <globaldefs.h>

extern char data_02107800;

// USA: GetWindowTile_020421b0
extern "C" ARM void* GetWindowTile_020421b0(int tileIndex) {
    return (void*)(*(int*)(&data_02107800 + 0x4) + (tileIndex << 5));
}
