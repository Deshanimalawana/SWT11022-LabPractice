#include <stdio.h>

    #define SPEED_OF_LIGHT 299792458 //speed of light m/s
    #define GRAVITY 9.81 //Acceleration due to gravity in m/s^2
    #define PLANCK_CONSTANT 6.626e-34 //plank's constant in J-s

int main(){
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of Light:%d m/s\n",SPEED_OF_LIGHT);
    printf("gravity:%.4f m/s^2\n",GRAVITY);
    printf("planck constant:%.ef J-s\n");
    printf("Boltzmann constant is:%.4e\n",BOLTZMANN_CONSTANT);
    printf("Absolute zero is:%d\n",ABSOLUTE_ZERO);

    return 0;
}
