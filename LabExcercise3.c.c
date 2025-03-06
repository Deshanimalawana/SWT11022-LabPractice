 #include <stdio.h>
 #define SPEED_OF_LIGHT 299792458
 #define GRAVITY 9.81
 #define PLANCK_CONSTANT 6.26e-34


int main()
{
    const float BOLTZMANN_CONSTANT=1.38e-23;
    const int ABSOLUTE_ZERO=-273;

    printf("Speed of Light: %d\n",SPEED_OF_LIGHT);
    printf("Accereration due to Gravity: %f\n",GRAVITY);
    printf("The value of PLANK_CONSTANT is:%e\n",PLANCK_CONSTANT);
    printf("%e\n",BOLTZMANN_CONSTANT);
    printf("%d",ABSOLUTE_ZERO);

    return 0;
}
