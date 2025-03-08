#include <stdio.h>
#include <stdlib.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34


int main()
{
  const float BOLTZMANN_CONSTANT = 1.38E-23;
  const int ABSOULT_ZERO = -273;

  printf("The value of SPEED_OF_LIGHT is %d m/s\n",SPEED_OF_LIGHT);
  printf("The value of GRAVITY is %f m/s^2\n",GRAVITY);
  printf("The value of PLANCK_CONSTANT is %e J.s\n",PLANCK_CONSTANT);
  printf("The value of BOLTZMANN_CONSTANT is %e\n",BOLTZMANN_CONSTANT);
  printf("The value of ABSOULT_ZERO is %d C\n",ABSOULT_ZERO);
  return 0;
}
