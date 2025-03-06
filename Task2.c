#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main(){
    const float BOLTZMANN_CONSTANT=1.38e-23;
    const int ABSOLUTE_ZERO=-273;

     printf("Speed of Light : %d m/s\n",SPEED_OF_LIGHT);
     printf("Acceleration due to Gravity : %.2f m/s2\n",GRAVITY);
     printf("Planck's Constant : %.3e J.s\n\n",PLANCK_CONSTANT);
     printf("Boltzmann Constant : %.2e\n",BOLTZMANN_CONSTANT);
     printf("Absolute zero : %d\n",ABSOLUTE_ZERO);

return 0;
}
