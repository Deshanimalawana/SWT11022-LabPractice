#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34
int main(){
    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLIUTE_ZERO = -273;

    printf("Scientific constants:\n");
    printf("Speed of Light:%d m/s\n",SPEED_OF_LIGHT);
    printf("Gravity: %2f m/s\n",GRAVITY);
    printf("Planck Constant: %3e J.s\n");
    printf("Boltzmann Constant: %2e J/K\n", BOLTZMANN_CONSTANT);
    printf("Absoliute Zero: 5d Celsius\n",ABSOLIUTE_ZERO);

    return 0;

}
