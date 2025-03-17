#include <stdio.h>
#include <stdlib.h>

#define SPEED_OF_LIGHT 299792458//(Speed of light in m/s)
#define GRAVITY 9.81 //(Acceleration due to gravity in m/s²)
#define PLANCK_CONSTANT 6.626e-34 //(Planck's constant in J·s)

int main()
{
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273; //(Absolute zero in Celsius)

    printf("speed of light is:%d\n", SPEED_OF_LIGHT);
    printf("Gravity is:%.2f\n",GRAVITY);
    printf("Planck constant is:%.3e\n", PLANCK_CONSTANT);
    printf("Boltzmann's Constant: %.2e\n", BOLTZMANN_CONSTANT);
    printf("Absolute Zero: %d\n", ABSOLUTE_ZERO);


    return 0;
}
