#include <globaldefs.h>

extern "C" void StopSequence_0203ac10(void*, void*, int);

// USA: StopJingle_0209c7fc
extern "C" ARM void StopJingle_0209c7fc(void* manager) {
    if (*(short*)((char*)manager + 0xce) < 0) return;
    StopSequence_0203ac10(manager, (char*)manager + 0xc4, 0);
    *(short*)((char*)manager + 0xce) = -1;
    *(short*)((char*)manager + 0xca) = 0;
}
