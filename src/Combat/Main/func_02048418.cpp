#include <globaldefs.h>

// USA: ClearStatusFlags_02048418
extern "C" ARM int ClearStatusFlags_02048418(unsigned char* gameObject, unsigned short statusFlags) {
    int* status = *(int**)(gameObject + 0x130);
    if (!(statusFlags & status[0])) {
        return 0;
    }
    status[0] = (unsigned short)(status[0] & ~statusFlags);
    return 1;
}
