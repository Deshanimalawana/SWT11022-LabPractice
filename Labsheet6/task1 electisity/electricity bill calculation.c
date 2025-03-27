#include<stdio.h>
int main () {
    int Unit;
    float Rate;

    printf("enter units - ");
    scanf("%d",&Unit);

    if (Unit <= 50){
        Rate = Unit*0.5;}

    else if (Unit <= 150){

        Rate=50*0.5+(Unit-50)*0.75;
    }

    else if (Unit <= 250)
    {
        Rate=(50*0.5)+(100*0.5)+((Unit-150)*1.20);
    }
    else
    {
        Rate=(50*0.5)+(100*0.75)+(100*1.20)+(Unit-250)*1.50;
    }

    printf("The Rate is : %.2f",Rate);
        return 0;




}
