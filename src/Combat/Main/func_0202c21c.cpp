#include <globaldefs.h>

struct LocalWireless_0202b2f0 {
    char unknown_0_[0x1038];
    signed char protagonistObjectIndexByConsole_1038_[16];
};
struct Struct_0202bcf8;

extern "C" signed char FindConsoleByProtagonistObjectIndex_0202bcbc(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" signed char func_0202bcf8(struct Struct_0202bcf8* arg0, int arg1);
extern "C" void func_0202c69c(struct LocalWireless_0202b2f0* arg0, int arg1);
extern "C" void UpdateLocalWirelessPlayerCount_0202c288(struct LocalWireless_0202b2f0* wireless);

// USA: RemoveLocalWirelessPlayer_0202c21c
extern "C" ARM void RemoveLocalWirelessPlayer_0202c21c(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console = FindConsoleByProtagonistObjectIndex_0202bcbc(wireless, protagonistObjectIndex);
    if (console < 0) {
        console = func_0202bcf8((struct Struct_0202bcf8*)wireless, protagonistObjectIndex);
        if (console < 0) return;
    }
    *((unsigned char*)wireless + 0x100c) &= ~(1 << console);
    func_0202c69c(wireless, protagonistObjectIndex);
    UpdateLocalWirelessPlayerCount_0202c288(wireless);
    wireless->protagonistObjectIndexByConsole_1038_[console] = 0;
}
