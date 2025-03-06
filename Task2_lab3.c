#include <stdio.h>
int main(){
    #define SPEED_OF_LIGHT 299792458
    #define GRAVITY 9.81
    #define PLANK_CONSTANT 6.626e-34

    printf("Speed Of Light:%dm/s\n",SPEED_OF_LIGHT);
    printf("Gravity:%fm/s2\n",GRAVITY);
    printf("Plank Constant:%eJ-s\n",PLANK_CONSTANT);

    const float BOLTZMANN_CONATANT = 1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("BOLTZMANN_CONATANT:%e\n",BOLTZMANN_CONATANT);
    printf("ABSOLUTE_ZERO:%e\n",ABSOLUTE_ZERO);

    return 0;

}
