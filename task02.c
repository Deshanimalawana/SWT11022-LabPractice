#include <stdio.h>
#define SPEED_OF_LIGHT 299792458 //Speed of light in m/s
#define GRAVITY 9.81 //Acceleration due to gravity in m/s
#define PLANCK_CONSTANT 6.626e-34 // Planck's constant in J-s

int main()
{
    const float BOLTZMANN_CONSTANT= 1.38e-23;
    const int ABSOLUTE_ZERO= -273; //Absolute zero in Celsius

    printf("SPEED_OF_LIGHT is %d\n", SPEED_OF_LIGHT);
    printf("GRAVITY is %f\n", GRAVITY);
    printf("PLANCK_CONSTANT is %e\n", PLANCK_CONSTANT);
    printf("BOLTZMANN_CONSTANT is %e\n", BOLTZMANN_CONSTANT);
    printf("ABSOLUTE_ZERO is %d\n", ABSOLUTE_ZERO);

    return 0;





}
