#include <STDIO.H>
int main()
{
    int units;
    float Bill;
    printf("Enter the Number of Units: ");
    scanf("%d",&units);

    if (units <= 50){
        Bill = units * 0.50;
    }
    else if (units <= 150){
        Bill = (50 * 0.50) + ((units - 50) * 0.75);
    }
    else if (units <= 250){
        Bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    }
    else {
        Bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

printf("Total Electricity Bill: Rs.%0.2f\n",Bill);
return 0;
}
