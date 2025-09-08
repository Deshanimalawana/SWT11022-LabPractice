#include <stdio.h>

    #define SPEED_OF_LIGHT 299792458
    #define GRAVITY 9.81
    #define PLANCK_CONSTANT 6.626e-34
int main() {

    const float BOLTZMANN_ZERO = -1.38e-23;
    const int ABSOLUTE_ZERO = -273;

     printf("The value of speed of light:%\n",SPEED_OF_LIGHT);
     printf("The value of Gravity:%.2f\n",GRAVITY);
     printf("The value of planck constant:%.3e\n",PLANCK_CONSTANT);

     printf("The value of BOLTZMANN_ZERO:%.2e\n",BOLTZMANN_ZERO);
     printf("The value of ABSOLUTE_ZERO:%d\n",ABSOLUTE_ZERO);
     return 0;
}
