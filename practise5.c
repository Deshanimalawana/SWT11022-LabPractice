#include<stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRATIVITY 9.81
#define PLANKCK_CONSTANT 6.626e-34

int main()
{

    const float BOLTZMANN_CONTANT=1.38e-23;
    const int ABSOLUTE_ZERO= -273;

    printf("The value of speed of the light: %d\n",SPEED_OF_LIGHT);
    printf("The gravity: %.2f\n",GRATIVITY);
    printf("The value planck_constant: %.5f\n",SPEED_OF_LIGHT);

    printf("%f\n", BOLTZMANN_CONTANT);
    printf("%d\n",ABSOLUTE_ZERO);
    return 0;

}
