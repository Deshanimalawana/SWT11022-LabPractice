#include<stdio.h>
//Declares using #define
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34
int main(){
//Declares using const
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;
//Prints all constant
    printf("Speed of Light : %d m/s\n",SPEED_OF_LIGHT);
    printf("Acceleration due to gravity : %.2f m/s2\n",GRAVITY);
    printf("Planck's constant : %.3e J.s\n\n",PLANCK_CONSTANT);
    printf("Boltzmann Constant : %.2e\n",BOLTZMANN_CONSTANT);
    printf("Absolute zero in Celsius : %d\n",ABSOLUTE_ZERO);
return 0;
}
