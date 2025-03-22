#include <stdio.h>
#include <stdlib.h>
int main()
{
    float unit;
    printf("Enter your electricity UNIT:");
    scanf("%f",&unit);
    float price;


    if(unit<=50){
            float first=unit*0.5;
        printf("Total bill is: %f",first);
         }

    else if(unit<=150){
        float second=(unit-50)*0.75+(0.5*50);
        printf("Total bill is: %f",second);
         }
    else if(unit<=250){
        float third=(unit-150)*1.20+(0.5*50)+(0.75*100);
        printf("Total bill is: %f",third);
    }
   else if(unit>250){
        float fourth=(unit-250)*1.50+(0.5*50)+(0.75*100)+(100*1.20);
        printf("Total bill is: %f",fourth);
            }
    return 0;
}
