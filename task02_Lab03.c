#include <stdio.h>
int main(){
    #define SPEED_OF_LIGHT 299792458
    #define GRAVITY 9.81
    #define PLANK_CONSTANT 6.626e-34

    const int BOLTZMANN_CONATANT = 1.38e-23;
    const float ABSOLUTE_ZERO = -273;

    printf("speed of light:%dm/s\n", SPEED_OF_LIGHT);
    printf("Gravity:%fm/s2\n", GRAVITY);
    printf("plank constant:%e -s\n", PLANK_CONSTANT);


    printf("boltzmann constant:%e\n", BOLTZMANN_CONATANT);
    printf("Absolute zero:%dc\n", ABSOLUTE_ZERO);

    return 0;

}
