#include<stdio.h>

#include<stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.626e-34

int main() {
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("%d\n%.2f\n%.2e\n%.2e\n%d", SPEED_OF_LIGHT, GRAVITY, PLANK_CONSTANT, BOLTZMANN_CONSTANT, ABSOLUTE_ZERO);
    return 0;
}


