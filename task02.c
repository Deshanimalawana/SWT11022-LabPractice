#include<stdio.h>
int main(){
    #define SPEED_OF_LIGHT  299792458
    #define GRAVITY  9.81
    #define PLANCK_CONSTANT 6.626e-34

    const float BOLTZMANN_CONSTANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of light:%d ms\n",SPEED_OF_LIGHT);
    printf("Gravity:%.2f ms2\n",GRAVITY);
    printf("Planck constant:%.3e Js\n",PLANCK_CONSTANT);
    printf("Boltzmann Constant:%.2e\n",BOLTZMANN_CONSTANT);
    printf("Absolute Zero:%d\n",ABSOLUTE_ZERO);

    return 0;

















}
