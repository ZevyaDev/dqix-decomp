#include <globaldefs.h>

typedef int (*Type_ov000_021820bc)(void*, int, int);
extern Type_ov000_021820bc gObjectIndexCollectors_ov000_0218409c[];

// USA: CollectObjectIndicesBySelector_ov000_021820bc
extern "C" ARM int CollectObjectIndicesBySelector_ov000_021820bc(void* battle, int action, int selector, int indices) {
    if (selector < 0 || (unsigned int)selector >= 0x3a) {
        return 0;
    }
    Type_ov000_021820bc collector = gObjectIndexCollectors_ov000_0218409c[selector];
    if (collector == 0) {
        return 0;
    }
    return collector(battle, action, indices);
}
