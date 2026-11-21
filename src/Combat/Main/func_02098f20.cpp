#include <globaldefs.h>
extern "C" void GetCurrentDate_020cf0fc(int);

struct Date_02098f20 { int unknown_0_; int month_4_; int day_8_; int unknown_c_; };

// USA: CalculateAge_02098f20
extern "C" ARM int CalculateAge_02098f20(int birthYear, int birthMonth, int birthDay) {
    struct Date_02098f20 today;
    int age;
    GetCurrentDate_020cf0fc((int)(&today));
    today.unknown_0_ += 0x7d0;
    age = today.unknown_0_ - birthYear;
    if (birthMonth * 100 + birthDay > today.month_4_ * 100 + today.day_8_) age -= 1;
    return age;
}
