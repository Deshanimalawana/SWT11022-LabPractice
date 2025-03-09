#include <stdio.h>
int main(){

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626E-34

  const float BOLTZMANN_CONSTANT=1.38e-23;
  const int ABSOLUTE_ZERO=-273;


printf("SPEED OF LIGHT:%d m/s\n",SPEED_OF_LIGHT);
printf("GRAVITY:%.2f m/s²\n",GRAVITY);
printf("PLANCK CONSTANT:%.3e j.s\n",PLANCK_CONSTANT);
printf("BOLTZMANN CONSTANT:%.2e\n",BOLTZMANN_CONSTANT);
printf("ABSOLUTE ZERO:%d \n",ABSOLUTE_ZERO);
return 0;}
