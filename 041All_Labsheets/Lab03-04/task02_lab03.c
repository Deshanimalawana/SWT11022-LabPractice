#include <stdio.h>
#include <stdlib.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main()
{
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int absolute_zero = -273;

    printf("Speed of light is: %d\n", SPEED_OF_LIGHT);
    printf("Gravity is: %.2f\n", GRAVITY);
    printf("Planck constant is: %e\n", PLANCK_CONSTANT);
    printf("Boltzmann constant is: %e\n", BOLTZMANN_CONSTANT);
    printf("Absolute zero is: %d\n", absolute_zero);


}
