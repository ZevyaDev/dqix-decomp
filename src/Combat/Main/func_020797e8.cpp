#include <globaldefs.h>

struct Struct_020797e8 {
    int unknown_0_;
    unsigned int unknown_4_0_ : 12;
};

// USA: GetActionDataId_020797e8
extern "C" ARM int GetActionDataId_020797e8(struct Struct_020797e8* actionData) {
    return actionData->unknown_4_0_;
}
