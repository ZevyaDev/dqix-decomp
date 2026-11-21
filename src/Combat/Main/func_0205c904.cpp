#include <globaldefs.h>
#if defined(jpn)
#define FIRST_FLAG 0x1c3
#define SECOND_FLAG 0x1c4
#define TIMED_STATE 0x1804
#else
#define FIRST_FLAG 0x233
#define SECOND_FLAG 0x234
#define TIMED_STATE 0x19e0
#endif

extern "C" unsigned char* GetMessageWindow_020421a0(void);
extern "C" void func_02042b10(void* arg0, void* arg1);
extern "C" void func_0202f380(void* arg0, int arg1);
extern "C" void func_02042b1c(unsigned char* arg0);
extern "C" int func_0205cde8(unsigned char* arg0);
extern "C" int func_0205c5b0(void* arg0, void* arg1);

// USA: UpdateChoiceList_0205c904
extern "C" ARM void UpdateChoiceList_0205c904(unsigned char* choiceList, int ticks) {
    if (choiceList[FIRST_FLAG] == 0) {
        return;
    }

    if (choiceList[SECOND_FLAG] == 0) {
        return;
    }

    unsigned char* messageWindow = GetMessageWindow_020421a0();
    func_02042b10(messageWindow, choiceList + 0xb4);
    func_0202f380(messageWindow + TIMED_STATE, ticks);
    func_02042b1c(messageWindow);

    if (func_0205cde8(choiceList) == 0) {
        return;
    }

    func_0205c5b0(choiceList + 0x1c, (void*)ticks);
}
