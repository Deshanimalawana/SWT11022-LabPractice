#include <stdio.h>
int main(){
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

const float BOLTZMANN_CONSTANT = 1.38e-23;
const int ABSOLUTE_ZERO = -273;
printf("%d,%f,%f,%f,%d",SPEED_OF_LIGHT,GRAVITY,PLANCK_CONSTANT,BOLTZMANN_CONSTANT,ABSOLUTE_ZERO);

return 0;
}
