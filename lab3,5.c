#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main() {
    const float BOLTZMANN_CONSTANT = 1.382e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of light: %d m/s\n", SPEED_OF_LIGHT);
    printf("Acceleration due to gravity: %.2lf m/s^2\n", GRAVITY);
    printf("Planck's constant: %.2e J.s\n", PLANCK_CONSTANT);
    printf("Boltzmann constant: %.2e J/K\n", BOLTZMANN_CONSTANT);
    printf("Absolute zero: %d Celsius\n", ABSOLUTE_ZERO);

    return 0;
}

