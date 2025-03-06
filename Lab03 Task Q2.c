#include <stdio.h>

#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.81
#define PLACK_CONSTANT 6.626e-34

int main(){
    const float BOLTZMAN_CONSTANT =1.38e-23;
    const int ABSOLUTE_ZERO = -273;

    printf("Speed of Light: %d m/s\n", SPEED_OF_LIGHT);
    printf("Gravity: %.2f m/s^2\n", GRAVITY);
    printf("Plack Constant: %3e J.s\n");

    printf("Boltzman Constant: %3e\n", BOLTZMAN_CONSTANT);
    printf("Absolute Zero:%d C\n", ABSOLUTE_ZERO);

    return 0;

}
