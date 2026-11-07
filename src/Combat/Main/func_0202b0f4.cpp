#include <globaldefs.h>

extern "C" void func_020d8654();
extern "C" void func_0202dd28();
extern "C" int func_0202b1f4(int* arg0, int arg1);
extern "C" void func_0202aec0(void* arg0);
extern "C" void func_020d8694(void);
void SleepCurrentContext(unsigned int);
extern "C" int func_0202d6a8(void);
extern "C" void func_0202dd98(void);
extern "C" int func_0202df10();

// USA: StopLocalWireless_0202b0f4
extern "C" ARM unsigned char StopLocalWireless_0202b0f4(int* wireless) {
    int status = 0;
    func_020d8654();
    if (*wireless != 0) {
        int waitCount = 0;
        while (func_0202d6a8() == 3) {
            waitCount++;
            if (waitCount > 5000) {
                func_0202dd28();
                status = func_0202b1f4(wireless, 1);
                if (status == 3) {
                    func_0202aec0(wireless);
                    func_020d8694();
                    return (unsigned char)status;
                }
                break;
            }
            SleepCurrentContext(1);
        }

        func_0202dd98();
        status = func_0202b1f4(wireless, 1);
        if (status == 3) {
            func_0202aec0(wireless);
            func_020d8694();
            return (unsigned char)status;
        }
        if (status != 0) {
            func_0202dd28();
            status = func_0202b1f4(wireless, 1);
            if (status == 3) {
                func_0202aec0(wireless);
                func_020d8694();
                return (unsigned char)status;
            }
        }
        func_0202df10();
    }
    func_0202aec0(wireless);
    func_020d8694();
    return (unsigned char)status;
}
