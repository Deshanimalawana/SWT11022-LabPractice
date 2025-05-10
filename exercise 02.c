#include<stdio.h>
#define SPEED_OF_LIGHT 299792458
#define GRAVITY 9.80
#define PLANCK_CONSTANT 6.26e-34

int main(){

  const float BOLTZMAN_CONSTANT=1.38e-23;
  const int ABSOLUTE_ZERO=-273;


    printf("%d\n",SPEED_OF_LIGHT);
    printf("%.2f\n",GRAVITY);
    printf("%.2e\n",PLANCK_CONSTANT);
    printf("%.2e\n",BOLTZMAN_CONSTANT);
    printf("%.3d\n",ABSOLUTE_ZERO);

return 0;
}
