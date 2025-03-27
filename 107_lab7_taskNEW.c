#include<stdio.h>
int main(){
    float unit,bill;
int num=unit++;
do
{
printf("\n");

    printf("Enter Number of Units: ");
    scanf("%f",&unit);

    if(unit<=50)
    {
        printf("Total Bill : %.2f",bill=unit*0.50,unit);
    }
    else if(unit<=150)
    {
        printf("Total Bill : %.2f",bill=(50*0.50)+(unit-50)*0.75,unit);
    }
    else if(unit<=250)
    {
        printf("Total Bill : %.2f",bill=(50*0.50)+(100*0.75)+(unit-150)*1.20,unit);
    }
    else if(unit>250)
    {
        printf("Total Bill : %.2f",bill=(50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50,unit);
    }
num++;
}
while(num < 10);

return 0;
}
