#include<stdio.h>
#define SPEED_OF_LIGHT  299792458
#define GRAVITY   9.81
#define PLANCK_CONSTANT  6.626e-34

int main( ) {
   const float BOLTZMANN_CONSTANT=1.38e-23;
   const int ABSOLUTE_ZERO=-273;

   printf("BOLTZMANN_CONSTANT: %.2e \n",BOLTZMANN_CONSTANT);
   printf("ABSOLUTE_ZERO:%d \n",ABSOLUTE_ZERO);
   printf("SPEED_OF_LIGHT %d \n",SPEED_OF_LIGHT);
   printf("GRAVITY %f \n",GRAVITY);
   printf("PLANCK_CONSTANT %.2e \n",PLANCK_CONSTANT);



   return 0;

}
