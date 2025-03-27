#include <stdio.h>
int main()
{
    int unit;
    float bill;
    printf("Enter the total units: ");
    scanf("%d",&unit);

    if (unit<=50)
    {
        bill=unit*0.50;
    }
    else if (unit<=150)
    {
        bill=50*0.5+((unit-50)*0.75);
    }
    else if (unit<=250)
    {
        bill=50*0.5+100*0.75+((unit-150)*1.20);
    }
    else if (unit>=251)
    {
        bill=50*0.5+100*0.75+100*1.20+((unit-250)*1.50);
    }

    printf("Your total electricity bill: Rs.%0.2f\n",bill);
    return 0;
}
