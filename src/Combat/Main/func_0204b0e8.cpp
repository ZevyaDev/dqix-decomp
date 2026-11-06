#include <globaldefs.h>

extern "C" void func_0204b04c(void*, int);
extern "C" void func_0204b088(void*, int);

struct BGLayer_02020cb8_2 {
    char unknown_0_[0x14];
    void* pScreenData_14_;
};

// USA: LoadBGScreenData_0204b0e8
extern "C" ARM void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2* layer, void* screenData) {
    if (screenData == NULL) screenData = layer->pScreenData_14_;
    if (screenData == NULL) return;
    func_0204b04c(layer, (int)screenData);
    func_0204b088(layer, (int)screenData);
}
