#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);
void UnblockContexts(struct BlockedContextList* p);
extern "C" int _s32_div_f(int a, int b);

// USA: DequeueValue_020c7ea0
extern "C" ARM int DequeueValue_020c7ea0(void* queue, unsigned int* value, int flags) {
    unsigned int priorState = DisableIRQInterrupts();
    if (*(int*)((char*)queue + 0x1c) == 0) {
        int isBlocking = flags & 1;
        while (1) {
            if (!isBlocking) {
                SetIRQInterruptState(priorState);
                return 0;
            }
            BlockCurrentContext((struct BlockedContextList*)((char*)queue + 8));
            if (*(int*)((char*)queue + 0x1c) != 0) break;
        }
    }
    if (value != NULL) {
        unsigned int* entries = *(unsigned int**)((char*)queue + 0x10);
        unsigned int head = *(unsigned int*)((char*)queue + 0x18);
        *value = entries[head];
    }
    int oldHead = *(int*)((char*)queue + 0x18);
    int capacity = *(int*)((char*)queue + 0x14);
    *(int*)((char*)queue + 0x18) = (oldHead + 1) % capacity;
    *(int*)((char*)queue + 0x1c) = *(int*)((char*)queue + 0x1c) - 1;
    UnblockContexts((struct BlockedContextList*)queue);
    SetIRQInterruptState(priorState);
    return 1;
}
