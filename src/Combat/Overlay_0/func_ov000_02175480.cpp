#include <globaldefs.h>

struct BGLayer_0204b8d0;
extern "C" void CopyBGScreenBlockRect_0204b8d0(struct BGLayer_0204b8d0*, unsigned int, int, int, short, short, short, short, unsigned short);

struct BGLayer_02020cb8_2;
extern "C" void LoadBGScreenData_0204b0e8(struct BGLayer_02020cb8_2*, void*);

// USA: func_ov000_02175480
extern "C" ARM void func_ov000_02175480(void* arg0) {
    CopyBGScreenBlockRect_0204b8d0((struct BGLayer_0204b8d0*)((char*)arg0 + 0x8c4), 0, 0, 0, 0, 0, 0x20, 0x19, 0xffff);
    LoadBGScreenData_0204b0e8((struct BGLayer_02020cb8_2*)((char*)arg0 + 0x8c4), 0);
}
