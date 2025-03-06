#include<stdio.h>
int main()
{
    #define SPEED_OF_LIGHT 299792458
    #define GRAVITY 9.81
    #define PLANCK_CONSTANT "6.626e-34"

    const char *BOLSTZMANN_CONSTANT = "1.38E-23";
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of light is: %d\n",SPEED_OF_LIGHT);
    printf("Gravity is: %f\n",GRAVITY);
    printf("Planck Constant is: %s\n\n",PLANCK_CONSTANT);

    printf("Boltzmann Constant Value is: %s\n",BOLSTZMANN_CONSTANT);
    printf ("Absolute Zero's Value is: %d\n",ABSOLUTE_ZERO);
}
