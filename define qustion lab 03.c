#include <stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLANK_CONSTANT 6.626e-34


int main()
{
    const float BOLTZMANN_CONSTANT=1.38e-23;
    const int ABSOLUTE_ZERO=-273;

    printf("speed :%d m/s\n",SPEED_OF_LIGHT);
    printf("gravity :%f m/s^2\n",GRAVITY);
    printf("plank :%e j.s\n",PLANK_CONSTANT);

    printf("constant :%e\n",BOLTZMANN_CONSTANT);
    printf("absolute :%d celsius",ABSOLUTE_ZERO);
    return 0;
}
