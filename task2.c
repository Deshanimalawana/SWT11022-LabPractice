#include <stdio.h>
#define speed_of_light 299792458
#define GRAVITY 9.81
#define plank_constant 6.626e-34

int main(){
const float BOLTZMANN_CONSTANT = 1.38E-23;
const int ABSOLUTE_ZERO = -273;

printf("speed of light: %d m/s\n", speed_of_light);
printf("gravity: %.2f m/s-2\n",GRAVITY);
printf("plank_constant: %2e j-s\n",plank_constant);
printf("boltzmann constant: %2e\n",BOLTZMANN_CONSTANT);
printf("absolute zero: %d\n",ABSOLUTE_ZERO);

return 0;

}
