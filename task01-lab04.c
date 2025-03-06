#include<stdio.h>
int main(){
    int a = 20;
    int b = 40;
    int c = 60;

    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", largest);
    float average = (a + b + c) / 3.0;
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;











}



