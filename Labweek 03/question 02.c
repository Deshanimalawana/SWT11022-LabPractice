#include<stdio.h>
        #define SPEED_OF_LIGHT 299792458
        #define GRAVITY 9.81
        #define PLANCK_CONSTANT 6.626e-34

        int main(){
        const float BOLIZMANN_CONSTANT=1.38E-23;
        const int ABSOLUTE_ZERO=-273;

        printf("Speed of Light:%d m/s\n",SPEED_OF_LIGHT);
        printf("Gravity:%.2f m/s\n",GRAVITY);
        printf("Planck Constant:%.3e J/s \n",PLANCK_CONSTANT);
        printf("Boltzmann Constant:%.2e J/K\n",BOLIZMANN_CONSTANT);
        printf("Absolute zero:%d c\n",ABSOLUTE_ZERO);
        return 0;
        }

