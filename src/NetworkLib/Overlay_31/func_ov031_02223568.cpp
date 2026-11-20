#include <globaldefs.h>

extern "C" void func_ov031_022274e4(int *arg0, int *arg1);
extern "C" int func_ov031_02222ce4(void *arg0);

// USA: CreateButtonBarIfEnabled_ov031_02223568
extern "C" ARM int CreateButtonBarIfEnabled_ov031_02223568(void *layout) {
    int buttonBarMode;
    func_ov031_022274e4(0, &buttonBarMode);
    if (buttonBarMode != 1) return buttonBarMode;
    return func_ov031_02222ce4(layout);
}
