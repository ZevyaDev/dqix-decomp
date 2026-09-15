#include <globaldefs.h>
#include "GameState/GameState.h"
int GetByteField0x5721(GameState*);
void* GetPtrField0x2a04(GameState*);


// USA: func_0206852c
ARM int IsField0xf7cNotByteAt0x5721(void* arg) {
    unsigned char* p = (unsigned char*)GetPtrField0x2a04((GameState*)(arg));
    int v = GetByteField0x5721((GameState*)(arg));
    return p[0xf7c] != v;
}
