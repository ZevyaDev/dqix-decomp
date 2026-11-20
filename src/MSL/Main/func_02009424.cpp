#include <globaldefs.h>

extern "C" double func_020085cc(double arg0, double arg1, int arg2);
extern "C" int func_02007028(double arg0, double* arg1);
extern "C" double func_020076f0(double arg0, double arg1);

// USA: ComputeSine_02009424
extern "C" ARM double ComputeSine_02009424(double angle) {
    double reducedAngle[2];
    double angleTail = 0.0;
    int quadrant;
    int highWord;

    highWord = ((int*)&angle)[1];

    highWord &= 0x7fffffff;
    if (highWord <= 0x3fe921fb) {
        return func_020085cc(angle, angleTail, 0);
    } else if (highWord >= 0x7ff00000) {
        return angle - angle;
    } else {
        quadrant = func_02007028(angle, reducedAngle);
        switch (quadrant & 3) {
        case 0:
            return func_020085cc(reducedAngle[0], reducedAngle[1], 1);
        case 1:
            return func_020076f0(reducedAngle[0], reducedAngle[1]);
        case 2:
            return -func_020085cc(reducedAngle[0], reducedAngle[1], 1);
        default:
            return -func_020076f0(reducedAngle[0], reducedAngle[1]);
        }
    }
}
