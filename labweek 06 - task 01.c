#include <stdio.h>
int main(){

    float units;
    printf("Enter your units: ");
    scanf("%f",&units);

    float bill = 0.0;

    if (units <= 50){
        bill = units * (0.50);
    } else if (units <= 150){
        bill = ((units - 50 )*0.75) + (50*0.5);
    } else if (units <= 250){
        bill = ((units - 150)*1.20) + (100*0.75) + (50*0.5);
    } else if (units >= 250){
        bill = ((units - 250)*1.50) + (100*1.20) + (100*0.75) + (50*0.5);
    }
    printf("Total bill: %.2f\n",bill);
    return 0;
}
