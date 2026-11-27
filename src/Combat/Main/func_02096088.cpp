#include <globaldefs.h>

extern "C" int IsQuestBitSet_02096100(int questManager, unsigned char* questBits, int questId);

// USA: func_02096088
extern "C" ARM int func_02096088(void* arg0, int arg1) {
    return IsQuestBitSet_02096100((int)arg0, (unsigned char*)arg0 + 0x84, arg1);
}
