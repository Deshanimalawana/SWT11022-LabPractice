#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.626e-34

int main()
{
    const float BOLTZMANN = 1.38e-23;
    const int  ABSOLUTE_ZERO = -273;

    printf("Speed of light : %d m/s\nGravity : %0.2f m/s²\nPlank constant : %e J·s",SPEED_OF_LIGHT,GRAVITY,PLANK_CONSTANT);
    printf("\nBoltzman : %e J/K\nAbsolute zero : %d °C",BOLTZMANN,ABSOLUTE_ZERO);

    return 0;
}
