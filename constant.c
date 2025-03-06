#include<stdio.h>
#define SPEED_OF_LIGHT 299792458 //speed of light in m/s
#define GRAVITY  9.81 //Acceleration due to gravity in m/s
#define PLANCK_CONSTANT 6.626e-34//Planck's constant in J.s

int main() {
   const float BOLTZMANN_CONSTANT = 1.38e-23;
   const int ABSOLUTE_ZERO = -273; //Absolute zero in celsius
   printf("The Value of SPEED_OF_LIGHT is : %ld\n",SPEED_OF_LIGHT);
   printf("The Value of GRAVITY is : %f\n",GRAVITY);
   printf("The Value of PLANCK_CONSTANT is : %.2e\n" ,PLANCK_CONSTANT );
   printf("The Value of BOLTZMANN_CONSTANT is : %.2e\n" ,BOLTZMANN_CONSTANT);
   printf("The Value of ABSOLUTE_ZERO : %d\n" ,ABSOLUTE_ZERO);
   return 0;

    }



