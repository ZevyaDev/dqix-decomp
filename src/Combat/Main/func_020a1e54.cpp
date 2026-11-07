#include <globaldefs.h>

extern "C" void LoadOverlay_020a1940(int);
extern volatile unsigned char data_02109da4;
extern signed char data_02109dae[];
extern signed char data_020f1962[];

// USA: PopOverlay_020a1e54
extern "C" ARM void PopOverlay_020a1e54(int isPreviousReloaded) {
    if (data_02109da4 == 0) return;
    data_02109da4--;
    if (isPreviousReloaded == 0 || data_02109da4 == 0) return;
    signed char overlayEntry = data_02109dae[data_02109da4 - 1];
    LoadOverlay_020a1940(data_020f1962[overlayEntry]);
}
