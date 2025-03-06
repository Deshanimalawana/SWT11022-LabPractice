#include <stdio.h>

    #define speed_of_light 299792458
    #define gravity 9.81
    #define plank_constant 6.626e-34

    const float boltzmann_constant = 1.38e-23;
    const int absolute_zero = -273;

int main () {

    printf("Speed of Light: %d m/s\n", speed_of_light);
    printf("Gravity: %.2f m/s²\n", gravity);
    printf("Planck's Constant: %.3e J·s\n", plank_constant);
    printf("Boltzmann Constant: %.3e J/K\n", boltzmann_constant);
    printf("Absolute Zero: %d °C\n", absolute_zero);

    return 0;


}
