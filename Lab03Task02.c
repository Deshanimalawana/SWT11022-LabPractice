#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANCK_CONSTANT 6.626e-34

int main()
{
    const float  BOLTZMANN_CONSTANT= 1.38E-23;
    const int ABSOLUTE_ZERO = -273;

    printf("The Value of Speed of the light is :%d m/s\n ",SPEED_OF_LIGHT);
    printf("The Value of GRAVITY is : %.2f m/s^2\n",GRAVITY);
    printf("The Value of PLANCK_CONSTANT is : %eJ.s\n",PLANCK_CONSTANT);
    printf("The value of BOLTZMANN_CONSTANT is :%e\n",BOLTZMANN_CONSTANT);
    printf("The Value of ABSOLUTE_ZERO is : %d c\n",ABSOLUTE_ZERO);
    return 0;
}
