#include <globaldefs.h>

void SleepCurrentContext(unsigned int arg);
void CycleCurrentPriorityContexts(void);

// USA: SleepOrCycleCurrentContext_020d9834
extern "C" ARM void SleepOrCycleCurrentContext_020d9834(int milliseconds) {
    if (milliseconds != 0) {
        SleepCurrentContext(milliseconds);
    } else {
        CycleCurrentPriorityContexts();
    }
}
