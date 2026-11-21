#include <globaldefs.h>

struct LocalWireless_0202b2f0;
extern "C" signed char FindConsoleByProtagonistObjectIndex_0202bcbc(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex);
extern "C" void UpdateLocalWirelessPlayerCount_0202c288(void* wireless);

// USA: SetLocalWirelessPlayerJoined_0202c1e8
extern "C" ARM void SetLocalWirelessPlayerJoined_0202c1e8(struct LocalWireless_0202b2f0* wireless, int protagonistObjectIndex) {
    int console = FindConsoleByProtagonistObjectIndex_0202bcbc(wireless, protagonistObjectIndex);
    if (console < 0) return;
    *((unsigned char*)wireless + 0x100c) |= (1 << console);
    UpdateLocalWirelessPlayerCount_0202c288(wireless);
}
