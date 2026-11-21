#include <globaldefs.h>

unsigned int DisableIRQInterrupts(void);
unsigned int SetIRQInterruptState(int mask);
struct BlockedContextList;
void BlockCurrentContext(struct BlockedContextList* p);
void UnblockContexts(struct BlockedContextList* p);

// USA: EnqueueValue_020c7e0c
extern "C" ARM int EnqueueValue_020c7e0c(void* queue, unsigned int value, int flags) {
    unsigned int priorState = DisableIRQInterrupts();
    int count = *(int*)((char*)queue + 0x1c);
    int capacity = *(int*)((char*)queue + 0x14);
    if (capacity <= count) {
        int isBlocking = flags & 1;
        while (1) {
            if (!isBlocking) {
                SetIRQInterruptState(priorState);
                return 0;
            }
            BlockCurrentContext((struct BlockedContextList*)queue);
            count = *(int*)((char*)queue + 0x1c);
            capacity = *(int*)((char*)queue + 0x14);
            if (capacity > count) break;
        }
    }
    int head = *(int*)((char*)queue + 0x18);
    int tail = (head + count) % capacity;
    unsigned int* entries = *(unsigned int**)((char*)queue + 0x10);
    entries[tail] = value;
    *(int*)((char*)queue + 0x1c) = *(int*)((char*)queue + 0x1c) + 1;
    UnblockContexts((struct BlockedContextList*)((char*)queue + 8));
    SetIRQInterruptState(priorState);
    return 1;
}
