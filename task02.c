#include <stdio.h>
        #define SPEED_OF_LIGHT 2999792458
        #define GRAVITY 9.81
        #define PLANCK_CONSTANT 6.626-34
    int main (){
        const float BOLTZMANN_CONSTANT = 1.38e-23;
        const int ABSOLUTE_zero = -273;

        printf("speed of light(in m/s): %d\n",SPEED_OF_LIGHT);
        printf("gravity(in m/s2): %f\n",GRAVITY);
        printf("planck constant(in J.s): %.e\n",PLANCK_CONSTANT);

        printf("boltzmann constant (in m/s): %.4e\n",BOLTZMANN_CONSTANT);
        printf("absolute zero (in m/s): %d\n",ABSOLUTE_zero);

        return 0;


    }
