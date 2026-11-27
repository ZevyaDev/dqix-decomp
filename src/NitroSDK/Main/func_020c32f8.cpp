extern "C" long long func_020c30ac(long long);
extern "C" long long func_020c3194(long long);
// USA: ComputeFixedPointCosine_020c32f8
extern "C" long long ComputeFixedPointCosine_020c32f8(int angle) {
 if(angle<0) return ComputeFixedPointCosine_020c32f8(-angle);
 long long octants=angle; octants*=0x145f306ddLL; octants>>=12;
 int octant=(int)(octants>>32);
 long long octantFraction=octants & 0xffffffffLL;
 if(octant&1) octantFraction=0x100000000LL-octantFraction;
 long long magnitude;
 if((octant+1)&2) magnitude=func_020c30ac(octantFraction);
 else magnitude=func_020c3194(octantFraction);
 if(((octant+2) & 7)>3) return -magnitude;
 return magnitude;
}
