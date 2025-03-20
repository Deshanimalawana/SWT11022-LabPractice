#include <stdio.h>


int main()
{
    int units;
    float bill=0;
    printf("Enter the units:");
    scanf("%d", &units);

    if(units<=50){
        bill = units*0.50;

    }
    else if(units<=100){
        bill = (50*0.50) + (units-50 * 0.75);
    }

    else if(units<=250){
        bill=(50*0.50) + (100 * 0.75) + ((units-150) *1.20);
    }
    else {
        bill=(50*0.50) + (100* 0.75) + (100*1.20) + ((units-250) * 1.50);
    }
    printf("the bill is %.2f",bill);

    return 0;
}
