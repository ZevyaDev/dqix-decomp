#include <globaldefs.h>

struct Struct_0205c53c;
extern "C" void func_0205c564(struct Struct_0205c53c* arg0);
struct Struct_0204c754;
extern "C" void func_0204c754(struct Struct_0204c754* arg0);
struct BGLayer_02020cb8_3;
extern "C" void ResetBGLayerData_0204afb4(struct BGLayer_02020cb8_3* layer);

struct TextWindowManager_0205d048 {
    char unknown_0_[0x98];
    char* pBGLayers_98_;
    char* pTextWindows_9c_;
    char unknown_a0_[0xb2 - 0xa0];
    unsigned char bgLayerCount_b2_;
    unsigned char textWindowCapacity_b3_;
    unsigned char textWindowCount_b4_;
};

// USA: ResetTextWindowManager_0205d048
extern "C" ARM void ResetTextWindowManager_0205d048(struct TextWindowManager_0205d048* windowManager) {
    func_0205c564((struct Struct_0205c53c*)windowManager);
    if (windowManager->pTextWindows_9c_ != 0 && windowManager->textWindowCapacity_b3_ != 0) {
        unsigned char i;
        for (i = 0; i < windowManager->textWindowCapacity_b3_; i++) {
            func_0204c754((struct Struct_0204c754*)(windowManager->pTextWindows_9c_ + i * 0xe0));
        }
    }
    if (windowManager->pBGLayers_98_ != 0) {
        unsigned char i;
        for (i = 0; i < windowManager->bgLayerCount_b2_; i++) {
            ResetBGLayerData_0204afb4((struct BGLayer_02020cb8_3*)(windowManager->pBGLayers_98_ + i * 0x20));
        }
    }
    windowManager->pBGLayers_98_ = 0;
    windowManager->pTextWindows_9c_ = 0;
    windowManager->textWindowCapacity_b3_ = 0;
    windowManager->textWindowCount_b4_ = 0;
}
