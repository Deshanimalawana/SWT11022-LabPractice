#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main() {
    const float BOLTZMANN_CONSTAMT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Scientific Constants:\n");
    printf("1. Speed of Light: %d m/s\n", SPEED_OF_LIGHT);
    printf("2. Acceleration due to Gravity: %.2f m/s²\n", GRAVITY);
    printf("3. Planck's Constant: %.3e J·s\n", PLANCK_CONSTANT);
    printf("4. Boltzmann's Constant: %.3e J/K\n", BOLTZMANN_CONSTAMT);
    printf("5. Absolute Zero: %d°C\n", ABSOLUTE_ZERO);

}
