#include <globaldefs.h>
#include "Filesystem/BackgroundLoader.h"
#include "Filesystem/Overlay_33/Ov33BackgroundLoader.h"
#include "NitroSDK/OverlayId.h"

extern "C" void LoadOverlay_020a1940(unsigned int overlayId);
extern char gFileScratchSpace_0211e33c;

// USA: func_020d6c68
extern "C" ARM void func_020d6c68() {
    if (BackgroundLoader::GetInstance() != NULL) {
        return;
    }
    LoadOverlay_020a1940(OVERLAY_ID(34));
    PopulateOv33BackgroundLoader(&gFileScratchSpace_0211e33c, 0x30000, 0x14);
}
