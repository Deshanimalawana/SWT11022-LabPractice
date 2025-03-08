#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main() {
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Planck's Constant: %.5e J.s\n", PLANCK_CONSTANT);
    printf("Boltzmann Constant: %.2e J/k\n", BOLTZMANN_CONSTANT);
    printf("Absolute Zero: %d C\n", ABSOLUTE_ZERO);

    return 0;
}
