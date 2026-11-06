#include <globaldefs.h>
extern "C" void func_0205d904(unsigned char*);

struct Struct_0205bf3c;

extern "C" void func_0205d6e4(void* arg0, int arg1);
extern "C" void func_0205bf3c(struct Struct_0205bf3c* arg0);

struct TextWindowManager_0205d6a0 {
    char unknown_0_[0x98];
    int unknown_98_;
    int unknown_9c_;
    char unknown_a0_[0xb3 - 0xa0];
    unsigned char textWindowCapacity_b3_;
};

// USA: CloseTextWindows_0205d6a0
extern "C" ARM void CloseTextWindows_0205d6a0(struct TextWindowManager_0205d6a0* windowManager, int isAll) {
    int count;
    if (windowManager->unknown_98_ == 0 || windowManager->unknown_9c_ == 0) return;
    count = 1;
    if (isAll) count = windowManager->textWindowCapacity_b3_;
    func_0205d6e4(windowManager, count);
    func_0205bf3c((struct Struct_0205bf3c*)((char*)windowManager + 0x54));
    func_0205d904((unsigned char*)(windowManager));
}
