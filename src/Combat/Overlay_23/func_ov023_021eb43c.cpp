#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" void UpdateTextWindowManager_0205d0e0(void* windowManager, int ticks);
extern "C" void func_ov023_021ecbe8(void* arg0);
extern "C" void func_ov023_021ece9c(void* arg0);

struct Struct_ov023_021fe0f0 { unsigned int unknown_0_; unsigned int unknown_4_; };
extern struct Struct_ov023_021fe0f0 data_ov023_021fe0f0[];

// USA: UpdateAccoladeDisplay_ov023_021eb43c
extern "C" ARM void UpdateAccoladeDisplay_ov023_021eb43c(void* display) {
    unsigned int ticks = GameState::GetInstance()->GetTickCount();
    if (ticks == 0) ticks = 1;
    if (*((unsigned char*)display + 0x431) != 0) {
        UpdateTextWindowManager_0205d0e0((char*)display + 0xc4, ticks);
    }
    unsigned char state = *((unsigned char*)display + 0x431);
    if (data_ov023_021fe0f0[state].unknown_0_ == 0) return;
    struct Struct_ov023_021fe0f0* stateMethod = &data_ov023_021fe0f0[state];
    void* adjustedThis = (char*)display + ((int)stateMethod->unknown_4_ >> 1);
    void (*stateFunction)(void*);
    if (stateMethod->unknown_4_ & 1) {
        stateFunction = *(void(**)(void*))((char*)*(void**)adjustedThis + stateMethod->unknown_0_);
    } else {
        stateFunction = (void(*)(void*))stateMethod->unknown_0_;
    }
    stateFunction(adjustedThis);
    func_ov023_021ecbe8(display);
    func_ov023_021ece9c(display);
}
