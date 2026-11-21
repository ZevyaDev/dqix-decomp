#include <globaldefs.h>

// USA: IncrementQuestBattleCounter_ov000_0215a8d4
extern "C" ARM void IncrementQuestBattleCounter_ov000_0215a8d4(unsigned char* battle, int counterIndex) {
    unsigned char* counters = battle + 0x8d5c;
    counters[counterIndex]++;
    if (counters[counterIndex] > 0x63) {
        counters[counterIndex] = 0x63;
    }
    if (counterIndex == 9) {
        counters[counterIndex] = 1;
    }
}
