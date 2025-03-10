#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.62e-34
int main () {
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;
    printf("Speed of light: %dm/s\n",SPEED_OF_LIGHT);
    printf("Acceleration due to gravity: %.2fm/s²\n",GRAVITY);
    printf("Planck's constant: %.3eJ·s\n",PLANCK_CONSTANT);
     printf("Boltzmann constant: %.2eJ/k\n",BOLTZMANN_CONSTANT);
      printf("Absolute zero in celsius: %dc\n",ABSOLUTE_ZERO);

      return 0;



}
