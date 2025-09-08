#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.62e-34

const float BOLTZMANN_CONSTANT = 1.38e-23;
const int ABSOLUTE_ZERO = -273;
int main()
{
 printf("Speed of light: %d m/s\n",SPEED_OF_LIGHT);
 printf("Acceleration due to gravity: %.2f m/s² \n ",GRAVITY);
 printf("Planck's Constant: %.3e j.s\n",PLANK_CONSTANT) ;
 printf("Boltzmann Constant: %.2e j/k\n",BOLTZMANN_CONSTANT);
 printf("Absolue Zero: %d °C\n",ABSOLUTE_ZERO);
 return 0;

}
