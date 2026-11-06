#include <globaldefs.h>
#include "GameState/GameState.h"

extern "C" int GetMessageWindow_020421a0(void);
struct Struct_ov003_0217e300;
extern "C" void func_ov003_0217e334(struct Struct_ov003_0217e300* arg0);
struct QueueNode_0201bdac;
struct Queue_0201bdac_2;
extern "C" void AppendToQueue_020469b4(struct Queue_0201bdac_2* queue, struct QueueNode_0201bdac* node);

// USA: func_ov003_0217e300
extern "C" ARM void func_ov003_0217e300(char* arg0) {
    GameState::GetInstance()->GetProtagonist();
    GetMessageWindow_020421a0();
#if defined(jpn)
    enum { Enum_ov003_0217e300_14128 = 0x3520, Enum_ov003_0217e300_14076 = 0x34ec };
#else
    enum { Enum_ov003_0217e300_14128 = 0x3730, Enum_ov003_0217e300_14076 = 0x36fc };
#endif
    func_ov003_0217e334(*(struct Struct_ov003_0217e300**)(arg0 + Enum_ov003_0217e300_14128));
    AppendToQueue_020469b4(*(struct Queue_0201bdac_2**)(arg0 + Enum_ov003_0217e300_14076), *(struct QueueNode_0201bdac**)(arg0 + Enum_ov003_0217e300_14128));
}
