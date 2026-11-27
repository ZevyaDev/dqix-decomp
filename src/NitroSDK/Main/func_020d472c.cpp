#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
extern "C" int func_020d41e8(void);
unsigned int SetIRQInterruptState(int mask);
extern "C" void* GetWirelessDriver_020d41d8(void);

// USA: SetWirelessNotificationCallback_020d472c
extern "C" ARM int SetWirelessNotificationCallback_020d472c(void* callback) {
    unsigned int priorState = DisableIRQInterrupts();
    int result = func_020d41e8();
    if (result != 0) {
        SetIRQInterruptState(priorState);
        return result;
    }
    void* wirelessDriver = GetWirelessDriver_020d41d8();
    *(void**)((char*)wirelessDriver + 0xc8) = callback;
    SetIRQInterruptState(priorState);
    return 0;
}
