#include <stdio.h>
#define SPEED_OF_LIGHT 299792458 //speed of light in m/s//
#define GRAVITY 9.81 //Acceleration due to gravity in m/s
#define PLANCK_CONSTANT 6.626e-34 //Plank's constant in J-s//

int main () {
   const float BOLTZAMAN_CONSTANT = 1.38e-23;
   const int ABSLOUTE_ZERO = -273; //Absolute zero in Celsius//
   printf("Value of SPEED_OF_LIGHT:%d\n",SPEED_OF_LIGHT);
   printf("Value of GRAVITY:%.2f\n",GRAVITY);
   printf("Value of PLANCK_CONSTANT:%.e\n",PLANCK_CONSTANT);
   printf("value of  BOLTZAMAN_CONSTANT:%.e\n", BOLTZAMAN_CONSTANT);
   printf("value of ABSLOUTE_ZERO:%d",ABSLOUTE_ZERO);
   return 0;
   }
