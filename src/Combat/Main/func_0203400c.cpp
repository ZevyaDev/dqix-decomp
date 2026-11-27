#include <globaldefs.h>
#include "World/Object3D.h"
#include "Combat/ObjectStateInitialization.h"
struct Struct_02032e58;

// USA: ResumeAnimation_0203400c
extern "C" ARM void ResumeAnimation_0203400c(Struct_02032e58* object) {
    unsigned char* objectBytes = (unsigned char*)object;
    object->unknown_0_.DisableFlag(0x40000);
    objectBytes[0xe0] &= ~0x2;
}
