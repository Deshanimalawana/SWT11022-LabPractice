#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT

int main(){
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of light: %d m/s\n", SPEED_OF_LIGHT);
    printf("Gravity: %d ms-2\n", GRAVITY);
    printf("Boltzmann constant: %.2e\n", BOLTZMANN_CONSTANT);
    printf("Absolute zero: %d\n", ABSOLUTE_ZERO);

    return 0;

}
