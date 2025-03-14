#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.626e-34

int main()
{
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Constants using #define:\n");
    printf("SPEED_OF_LIGHT: %d m/s\n", SPEED_OF_LIGHT);
    printf("GRAVITY: %.2f m/s^2\n", GRAVITY);
    printf("PLANK_CONSTANT: %.3e J-s\n", PLANK_CONSTANT);
    printf("\nConstants using const: \n");
    printf("BOLTZMANN_CONSTANT: %.2e J/K\n", BOLTZMANN_CONSTANT);
    printf("ABSOLUTE_ZERO: %d Celsius\n", ABSOLUTE_ZERO);

    return 0;
}
