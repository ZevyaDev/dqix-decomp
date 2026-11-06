#include <globaldefs.h>

// USA: IsQueueEmpty_02046b08
extern "C" ARM int IsQueueEmpty_02046b08(void** queue) {
    return queue[0] == 0;
}
