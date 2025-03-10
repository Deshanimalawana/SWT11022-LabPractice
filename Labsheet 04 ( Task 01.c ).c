#include <stdio.h>
int main(){

    int a=10, b=25, c=15;

    int largest=(a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;

    printf("The largest number is: %d\n", largest);

    return 0;
}
