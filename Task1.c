#include <stdio.h>
int main(){
    int a = 15;
    int b = 25;
    int c = 10;

    int largest = (a>b && a>c)? a:(b>c)? b: c;
    printf("The largest number is: %d\n", largest);
    float average = ( a + b + c )/3.0;
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}
