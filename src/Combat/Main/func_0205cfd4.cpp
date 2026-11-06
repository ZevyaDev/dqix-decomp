#include <globaldefs.h>

struct Struct_0205c53c;
extern "C" void func_0205c53c(struct Struct_0205c53c* arg0);

struct TextWindowManager_0205cfd4 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    unsigned short unknown_a0_;
    unsigned short unknown_a2_;
    unsigned short unknown_a4_;
    unsigned short unknown_a6_;
    unsigned short unknown_a8_;
    unsigned short unknown_aa_;
    unsigned short unknown_ac_;
    unsigned short unknown_ae_;
    unsigned char cursorWindowId_b0_;
    unsigned char nextWindowId_b1_;
    unsigned char bgLayerCount_b2_;
    unsigned char textWindowCapacity_b3_;
    unsigned char textWindowCount_b4_;
    unsigned char unknown_b5_;
    unsigned char unknown_b6_;
    unsigned char fontSize_b7_;
    unsigned char unknown_b8_;
};

// USA: InitTextWindowManager_0205cfd4
extern "C" ARM void InitTextWindowManager_0205cfd4(struct TextWindowManager_0205cfd4* windowManager) {
    func_0205c53c((struct Struct_0205c53c*)windowManager);
    windowManager->unknown_98_ = 0;
    windowManager->unknown_9c_ = 0;
    windowManager->unknown_a0_ = 1;
    windowManager->unknown_a2_ = 1;
    windowManager->unknown_a4_ = 0;
    windowManager->unknown_a6_ = 0;
    windowManager->unknown_a8_ = 4;
    windowManager->unknown_aa_ = 4;
    windowManager->unknown_ac_ = 0xa;
    windowManager->unknown_ae_ = 0xb;
    windowManager->cursorWindowId_b0_ = 0;
    windowManager->nextWindowId_b1_ = 0;
    windowManager->bgLayerCount_b2_ = 0;
    windowManager->textWindowCapacity_b3_ = 0;
    windowManager->textWindowCount_b4_ = 0;
    windowManager->unknown_b5_ = 0;
    windowManager->unknown_b6_ = 0;
    windowManager->fontSize_b7_ = 0xa;
    windowManager->unknown_b8_ = 0xff;
}
