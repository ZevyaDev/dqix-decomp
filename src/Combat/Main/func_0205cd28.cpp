#if defined(jpn)
#define CONTROLLER_OFFSET_LO 4
#define CONTROLLER_OFFSET_HI 0x1800
#else
#define CONTROLLER_OFFSET_LO 0x9e0
#define CONTROLLER_OFFSET_HI 0x1000
#endif
#include <globaldefs.h>

struct Struct_0202f6a4;

extern "C" void func_02042b10(void*, void*);
extern "C" void func_02042b1c(unsigned char*);
extern "C" void func_0202f6a4(Struct_0202f6a4*);
extern "C" int func_0205cd6c(unsigned char*);
extern "C" unsigned char* GetMessageWindow_020421a0();

// USA: OpenChoiceList_0205cd28
extern "C" ARM void OpenChoiceList_0205cd28(unsigned char* choiceList) {
    unsigned char* messageWindow = GetMessageWindow_020421a0();
    func_02042b10(messageWindow, choiceList + 0xb4);
    if (func_0205cd6c(messageWindow + CONTROLLER_OFFSET_LO + CONTROLLER_OFFSET_HI) == 0) {
        func_0202f6a4((Struct_0202f6a4*)(messageWindow + CONTROLLER_OFFSET_LO + CONTROLLER_OFFSET_HI));
    }
    func_02042b1c(messageWindow);
}
