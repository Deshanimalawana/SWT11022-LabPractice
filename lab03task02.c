#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34
int main() {

    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("SPEED OF LIGHT: %d\n",SPEED_OF_LIGHT );
    printf("GRAVITY: %.2f\n", GRAVITY);
    printf("PLANCK CONSTANT: %.2e\n", PLANCK_CONSTANT);
    printf("BOLTZMANN CONSTANT: %.2e\n", BOLTZMANN_CONSTANT);
    printf("ABSOLUTE ZERO: %d\n", ABSOLUTE_ZERO);
return 0;
}
