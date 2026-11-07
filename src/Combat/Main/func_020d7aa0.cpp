#include <globaldefs.h>

extern "C" void CancelFontLoad_02094ab0(int loader);
extern "C" void func_ov017_0218b5c0(int arg0, int arg1);
extern "C" void func_ov017_0218b5f8(int arg0);

extern "C" int GetFontLoader_02094a00(void);
extern "C" int GetMessageWindow_020421a0(void);
extern "C" void ResetMessageWindow_02043204(char* window);

struct Struct_0214e34c;
extern "C" void func_020d7a5c(struct Struct_0214e34c* arg0);

struct Struct_020d7aa0 {
    unsigned char unknown_0_0_ : 6;
    unsigned char isShowing_0_6_ : 1;
    unsigned char isFontRequested_0_7_ : 1;
};

struct TimedMessageQueue_020d7aa0_2 {
    #if defined(jpn)
    unsigned char unknown_0_[0xf0];
#else
    unsigned char unknown1_0_[0x150];
#endif
    struct Struct_020d7aa0 unknown_150_;
};

// USA: ClearTimedMessageQueue_020d7aa0
extern "C" ARM void ClearTimedMessageQueue_020d7aa0(struct TimedMessageQueue_020d7aa0_2* queue) {
    int loader = GetFontLoader_02094a00();
    if (queue->unknown_150_.isFontRequested_0_7_) {
        CancelFontLoad_02094ab0(loader);
    }
    if (queue->unknown_150_.isShowing_0_6_) {
        ResetMessageWindow_02043204((char*)GetMessageWindow_020421a0());
        queue->unknown_150_.isShowing_0_6_ = 0;
    }
    func_ov017_0218b5c0(1, -1);
    func_ov017_0218b5f8(-1);
    func_020d7a5c((struct Struct_0214e34c*)queue);
}
