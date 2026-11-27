#include <globaldefs.h>

// USA: FindHeapById_ov011_021842c8
extern "C" ARM void* FindHeapById_ov011_021842c8(unsigned char* heap, unsigned int id) {
    if (*(unsigned int*)heap == id) return heap;
    void* found = 0;
    unsigned char* nextSibling = *(unsigned char**)(heap + 0x18);
    if (nextSibling) found = FindHeapById_ov011_021842c8(nextSibling, id);
    if (found) return found;
    unsigned char* firstChild = *(unsigned char**)(heap + 0x1c);
    if (firstChild) found = FindHeapById_ov011_021842c8(firstChild, id);
    return found;
}
