#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e34

int main() {
const float BOLTZMANN_CONSTANT= 1.38e23;
const int ABSOLUTE_ZERO= -273;

printf("Speed of light: %d m/s\n", SPEED_OF_LIGHT);
printf("Gravity: %.2f ms-2\n", GRAVITY);
printf("Planck_constant: %f\n",PLANCK_CONSTANT);
printf("Boltzmann zero: %f\n",BOLTZMANN_CONSTANT);
printf("Absolute zero: %d °C\n",ABSOLUTE_ZERO);

return 0;

}
