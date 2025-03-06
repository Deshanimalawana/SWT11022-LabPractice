#include <stdio.h>
  int main(){
  #define SPEED_OF_LIGHT 299792458
  #define GRAVITY 9.81
  #define PLANCK_CONSTANT 6.626e-34


   printf("Speed of light:%d m/s\n",SPEED_OF_LIGHT);
   printf("Gravity : %f ms2\n",GRAVITY);
   printf("Planck Constant:%e J.s\n",PLANCK_CONSTANT);


   const float BOLTZMANN_CONSTANT = 1.38e-23;
   const int ABSOLUTE_ZERO = -273;

   printf("BOLTZMANN CONSTANT:%e\n",BOLTZMANN_CONSTANT);
   printf("ABSOLUTE ZERO:%e\n",ABSOLUTE_ZERO);





   return 0;





  }
