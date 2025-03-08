#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

const float BOLTZMANN_CONSTANT = 1.38e-23;
const int ABSOLUTE_ZERO = -273;

int main() {
    printf("Speed of light: %d m/s\n", SPEED_OF_LIGHT);
    printf("Gravity: %.2f m/s�\n", GRAVITY);
    printf("Planck's constant: %.3e J�s\n", PLANCK_CONSTANT);
    printf("Boltzmann constant: %.3e J/K\n", BOLTZMANN_CONSTANT);
    printf("Absolute zero: %d�C\n", ABSOLUTE_ZERO);

    return 0;
}

