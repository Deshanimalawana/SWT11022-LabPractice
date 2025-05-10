#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unit;
    float amount;

    printf("Enter the unit:");
    scanf("%d", &unit);

    if (unit<=50){
        amount= 0.50*50;
        printf("BIll amount is %.2f", amount);
    }else if (unit<=150){
        amount = ((unit-50)*0.75 + 50*0.50);
        printf("BIll amount is %.2f",amount);
    }else if(unit <=250){
        amount = ((unit - 150)*1.20 + 50*0.50 + 100*0.75);
        printf("BIll amount is %.2f", amount);
    }else{
        amount = ((unit-250)*1.50 + 50*0.50 + 100*0.75 + 100*1.20);
        printf("BIll amount is %.2f",amount);
    }

return 0;
}
