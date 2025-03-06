#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTATNT 6.626e34

int main(void){
    const float BOLTZMANN_CONSTANT = 1.38e23;
    const int ABSOLUTE_ZERO = -273;

    printf("speed of light : %d\n", SPEED_OF_LIGHT);
    printf("Gravity : %.2f\n", GRAVITY);
    printf("Plank Constant : %f\n", PLANK_CONSTATNT);
    printf("Boltzmann constant : %f\n", BOLTZMANN_CONSTANT);
    printf("Absolute Zero : %d\n", ABSOLUTE_ZERO);

    return 0;
}
