#include <globaldefs.h>

extern int data_01ffd348;
extern signed char data_01ffd364;

struct Struct_020e8f20 {
    int unknown_0_;
    int unknown_4_;
};
extern struct Struct_020e8f20 data_020e8f20[];

// USA: IsOverlayLoaded_020a18f4
extern "C" ARM int IsOverlayLoaded_020a18f4(unsigned int overlayId) {
    int var0 = 0;
    if (overlayId < 0x23) {
        signed char* var1 = &data_01ffd364 + data_01ffd348 * 6;
        var0 = ((int)overlayId == var1[data_020e8f20[overlayId].unknown_0_]);
    }
    return var0;
}
