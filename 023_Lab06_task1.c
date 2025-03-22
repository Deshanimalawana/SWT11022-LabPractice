#include <stdio.h>
#include <stdlib.h>
int main()
{
    float unit;
    printf("Enter your electricity UNIT:");
    scanf("%f",&unit);
    float first50=unit*0.5;
    float a=unit-50;
    float first100=a*0.75;
    float b=unit-150;
    float second100=b*1.20;
    float c=unit-250;
    float above250=c*1.50;


    if(unit<=50){

        printf("Total bill is: %f",first50);
         }

    else if(unit<=150){

        printf("Total bill is: %f",first50+first100);
         }
    else if(unit<=250){

        printf("Total bill is: %f",first50+first100+second100);
    }
   else if(unit>250){

        printf("Total bill is: %f",first50+first100+second100+above250);
            }
    return 0;
}
