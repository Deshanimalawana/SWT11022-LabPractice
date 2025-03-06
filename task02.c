#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main () {

    const float BOLTMANN_CONSTANT = 1.28e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of Light: %d\n", SPEED_OF_LIGHT);
    printf("gravity: %.2f\n", GRAVITY);
    printf("Plank constant: %e\n", PLANCK_CONSTANT);
    printf("Boltzmann constant: %e\n", BOLTMANN_CONSTANT);
    printf("Absolute zero: %d\n", ABSOLUTE_ZERO);

    return 0;
}


