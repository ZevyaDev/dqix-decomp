#include <globaldefs.h>
#if defined(jpn)
enum { Enum_0203bdb0_1312 = 0x620 };
enum { Enum_0203bdb0_4 = 0 };
#else
enum { Enum_0203bdb0_1312 = 0x520 };
enum { Enum_0203bdb0_4 = 4 };
#endif

#include "NitroSDK/DMA.h"

extern "C" int LoadToMainOAM(int arg0, int arg1, unsigned int arg2);
extern "C" int LoadToSubOAM(int arg0, int arg1, unsigned int arg2);

extern int data_021052b4;
extern int data_021056b4;

struct OAMManager_0203bdb0 {
    char unknown_0_[0xc];
    unsigned char isMainOAMUploadEnabled_c_;
    unsigned char isSubOAMUploadEnabled_d_;
};

// USA: UploadOAMBuffers_0203bdb0
extern "C" ARM void UploadOAMBuffers_0203bdb0(struct OAMManager_0203bdb0* oamManager) {
    if (oamManager->isMainOAMUploadEnabled_c_ != 0) {
        LoadToMainOAM((int)&data_021052b4, 0, 0x400);
        DMAMemsetSynchronous(3, (unsigned int)&data_021052b4, 0xc0, 0x400);
    }
    if (oamManager->isSubOAMUploadEnabled_d_ != 0) {
        LoadToSubOAM((int)&data_021056b4, 0, 0x400);
        DMAMemsetSynchronous(3, (unsigned int)&data_021056b4, 0xc0, 0x400);
    }
    if (oamManager->isMainOAMUploadEnabled_c_ != 0 || oamManager->isSubOAMUploadEnabled_d_ != 0) {
        *(short*)((char*)oamManager + Enum_0203bdb0_1312) = Enum_0203bdb0_4;
    }
}
