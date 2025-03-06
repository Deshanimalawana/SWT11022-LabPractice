#include<stdio.h>
     #define SPEED_OF_LIGHT  299792458 //(Speed of light in m/s)
     #define gravity  9.81 //(Acceleration due to gravity in m/s�)
     #define PLANCK_CONSTANT 6.626e-34   //(Planck's constant in J�s)
int main(){

    const double BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of light in: %d\n",SPEED_OF_LIGHT);
    printf("Acceleration due to gravity: %f\n",gravity);
    printf("Planck's constant: %e\n",PLANCK_CONSTANT);
    printf("BOLTZMANN_CONSTANT: %f\n",BOLTZMANN_CONSTANT);
    return 0;
}
