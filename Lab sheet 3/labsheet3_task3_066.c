#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.626e-34

int main()
{
    const float BOLTZMANN = 1.38e-23;
    const int  ABSOLUTE_ZERO = -273;

    printf("Speed of light : %d\nGravity : %0.2f\nPlank constant : %e",SPEED_OF_LIGHT,GRAVITY,PLANK_CONSTANT);
    printf("\nBoltzman : %e\nAbsolute zero : %d",BOLTZMANN,ABSOLUTE_ZERO);

    return 0;
}