#include <stdio.h>
int main()
{
    int unit;
    float price;
    printf("Enter Units: ");
    scanf("%d",&unit);

    if(unit<=50)
    {
        float price = unit*0.50;
        printf("Rate: %.2f",price);
    }
    else if (unit<=150)
    {
        float price = ((unit-50)*0.75)+(50*0.50);
        printf("Rate: %.2f",price);
    }
    else if (unit<=250)
    {
        float price = ((unit-150)*1.20+(100*0.75)+(50*0.50));
        printf("Rate: %.2f",price);
    }
    else
    {
        float price = ((unit-250)*1.5 + (100*1.2) + (100*0.75)+(50*0.50));
        printf("Rate: %.2f",price);
    }
    return 0;
}
