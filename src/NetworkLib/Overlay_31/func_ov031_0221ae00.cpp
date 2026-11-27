#include <globaldefs.h>
#include "NitroSDK/Memory.h"

struct WifiCredentials_ov031_0221ae00 {
    unsigned long long unknown_0_;
    unsigned long long unknown_8_;
    unsigned short unknown_10_;
    unsigned short unknown_12_;
};
extern unsigned char data_ov031_0224e6ac[];
extern unsigned char data_ov031_0224e6b1[];
extern unsigned char data_ov031_0224e6b6[];
extern unsigned char data_ov031_0224e6b8[];

// USA: UnpackWifiCredentials_ov031_0221ae00
extern "C" ARM void UnpackWifiCredentials_ov031_0221ae00(WifiCredentials_ov031_0221ae00* credentials) {
    VectorizedInvertedMemcpy(data_ov031_0224e6ac, &credentials->unknown_0_, 6);
    credentials->unknown_0_ &= 0x7ffffffffffULL;
    VectorizedInvertedMemcpy(data_ov031_0224e6b1, &credentials->unknown_8_, 6);
    credentials->unknown_8_ >>= 3;
    credentials->unknown_8_ &= 0x7ffffffffffULL;
    VectorizedInvertedMemcpy(data_ov031_0224e6b6, &credentials->unknown_10_, 2);
    credentials->unknown_10_ >>= 6;
    credentials->unknown_10_ &= 0x3ff;
    VectorizedInvertedMemcpy(data_ov031_0224e6b8, &credentials->unknown_12_, 2);
}
