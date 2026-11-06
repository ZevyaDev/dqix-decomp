#include <globaldefs.h>
#include "NitroSDK/Filesystem/OverlayFSManagement.h"
#include "Resource/ResourceMutex.h"
#include "NitroSDK/Mutex.h"

extern "C" int func_020a1bb4(unsigned int arg0);
extern "C" void func_020d9834(int arg0);
bool LoadCompressedOverlay(const OverlayMetadata& overlay);
void DecompressAndStaticInitializeOverlay(const OverlayMetadata& overlay);

extern volatile int data_01ffd348;
struct Struct_01ffd364 {
    volatile signed char overlayIds_0_[6];
};
extern Struct_01ffd364 data_01ffd364[8];
extern volatile unsigned char data_01ffd340;
extern volatile unsigned char data_01ffd344;
extern Mutex data_01ffd34c;
extern OverlayMetadata data_01ffd394[35];

struct Struct_020e8f20_2 {
    int slot_0_;
    int unknown_4_;
};
extern Struct_020e8f20_2 data_020e8f20[35];

// USA: LoadOverlay_020a1940
extern "C" ARM int LoadOverlay_020a1940(int overlayId) {
    int isLoaded = 0;
    if ((unsigned int)overlayId < 35) {
        Struct_020e8f20_2* overlaySlots;
        int slotSetIndex = data_01ffd348;
        overlaySlots = data_020e8f20;
        Struct_01ffd364* const loadedOverlays = &data_01ffd364[slotSetIndex];
        int slot = overlaySlots[overlayId].slot_0_;
        signed char loadedOverlayId = loadedOverlays->overlayIds_0_[slot];
        if (loadedOverlayId != overlayId) {
            func_020a1bb4(loadedOverlayId);
            while (data_01ffd340 != 0) {
                func_020d9834(0);
            }
            data_01ffd340 = 1;
            LockResourceMutex();
            OverlayMetadata* const overlayMetadata = data_01ffd394;
            LoadCompressedOverlay(overlayMetadata[overlayId]);
            DecompressAndStaticInitializeOverlay(overlayMetadata[overlayId]);
            UnlockResourceMutex();
            data_01ffd340 = 0;
            if (data_01ffd344 != 0) {
                LockMutex(&data_01ffd34c);
            }
            loadedOverlays->overlayIds_0_[overlaySlots[overlayId].slot_0_] = (signed char)overlayId;
            if (data_01ffd344 != 0) {
                UnlockMutex(&data_01ffd34c);
            }
            isLoaded = 1;
        } else {
            isLoaded = 1;
        }
    }
    return isLoaded;
}
