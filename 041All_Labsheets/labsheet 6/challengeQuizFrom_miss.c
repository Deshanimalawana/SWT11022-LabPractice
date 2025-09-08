#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unit;
    float amount;
    int inputing;

    for (inputing= 1; inputing<10; inputing++){
    printf("Bill no is %d\n", inputing);
    printf("Enter the unit:");
    scanf("%d", &unit);



    if (unit<=50){
        amount= 0.50*50;
        printf("%.2f\n", amount);
    }
    else if (unit<=150){
        amount = ((unit-50)*0.75 + 50*0.50);
        printf("%.2f\n",amount);
    }
    else if(unit <=250){
        amount = ((unit - 150)*1.20 + 50*0.50 + 100*0.75);
        printf("%.2f\n", amount);
    }
    else{
        amount = ((unit-250)*1.50 + 50*0.50 + 100*0.75 + 100*1.20);
        printf("%.2f\n",amount);
    }

}
printf("The bill payment is successfully completed.");
return 0;
}
