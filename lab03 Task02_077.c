#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main()
{

    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("speed of light : %d/nGravity : %0.2f\nPlanck constant : %e",SPEED_OF_LIGHT,GRAVITY,PLANCK_CONSTANT);
    printf("\nboltzmann : %e\nabsolute zero : %d",BOLTZMANN_CONSTANT,ABSOLUTE_ZERO);
    return 0;
}

