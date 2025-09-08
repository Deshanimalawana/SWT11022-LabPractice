#include<stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTAN 6.626e-34

int main(){
    const float BOLTMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("speed of light:%dm/s\n",SPEED_OF_LIGHT);
    printf("Acceleration due to Gravity:%d.2f\n",GRAVITY);
    printf("Planck's constant:.3ejm/s\n",PLANCK_CONSTAN);
    printf("Boltzmann's Constant:%.2eJ/k\n",BOLTMANN_CONSTANT);
    printf("Absolute Zero:%dC\n",ABSOLUTE_ZERO);

    return 0;
}
