#include <stdio.h>
int main(){

    float payRate;
    int hours;
    printf("enter total worked hours: ");
    scanf("%d", &hours);
    printf("enter pay rate: ");
    scanf("%f", &payRate);
    printf("your pay rate: %.2f,worked hours:%d\n",payRate,hours);
    return 0;

}