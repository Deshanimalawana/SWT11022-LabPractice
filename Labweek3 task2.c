#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.62e-34
 int main(){
 const float BOLTZMANN_CONSTANT = 1.38e-23;
 const int ABSOLUTE_ZERO = -273;

 printf("SPEED OF LIGHT:= %d\n GRAVITY = %.2f\nPLANCK CONSTANT =%3e\n ",SPEED_OF_LIGHT ,GRAVITY,PLANCK_CONSTANT);
 printf("BOLTZMANN CONSTANT = %2e\nABSOLUTE ZERO = %d", BOLTZMANN_CONSTANT,ABSOLUTE_ZERO);



 return 0;
 }
