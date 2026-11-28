#include <globaldefs.h>

// USA: GetNPCCount_0203e06c
extern "C" ARM int GetNPCCount_0203e06c(void* npcManager) {
    return *(int*)((char*)npcManager + 0x8c);
}
