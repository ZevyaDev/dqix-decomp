#include <globaldefs.h>

extern "C" void func_020134e0(void* arg0);

// USA: InitZone_02013718
extern "C" ARM void InitZone_02013718(char* zone, int allocator, int textureArena) {
    func_020134e0(zone);
#if defined(jpn)
    *(int*)(zone + 0x6c) = allocator;
#else
    *(int*)(zone + 0x4c) = allocator;
#endif
#if defined(jpn)
    *(int*)(zone + 0x70) = textureArena;
#else
    *(int*)(zone + 0x50) = textureArena;
#endif
#if defined(jpn)
    *(int*)(zone + 0x858) = 0;
#else
    *(int*)(zone + 0x838) = 0;
#endif
#if defined(jpn)
    *(int*)(zone + 0x85c) = 0;
#else
    *(int*)(zone + 0x83c) = 0;
#endif
#if defined(jpn)
    *(short*)(zone + 0x494) = 0;
#else
    *(short*)(zone + 0x474) = 0;
#endif
#if defined(jpn)
    *(int*)(zone + 0x84c) = 0;
#else
    *(int*)(zone + 0x82c) = 0;
#endif
}
