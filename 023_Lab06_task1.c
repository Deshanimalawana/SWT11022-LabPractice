#include <stdio.h>
#include <stdlib.h>

int main()
{

    float unit;
    printf("Enter your electricity UNIT:");
    scanf("%f",&unit);
    float cound1=unit*0.5;
    float a=unit-50;
    float b=50*0.5;
    float c=a*0.75;
    float d=50*0.5+100*0.75;
    float e=50*0.5+100*0.75+100*1.20;
    float _4rth=unit-250, bill4=_4rth*1.5;

    float _3rd=unit-150, bill3=_3rd*1.20;
    if(unit<=50){

        printf("Total bill is: %f",cound1);
         }

    else if(unit<=150){

        printf("Total bill is: %f", c+b);
         }
    else if(unit<=250){

        printf("Total bill is: %f", d+bill3);
    }
   else if(unit<=350){

        printf("Total bill is: %f", e+bill4)
;        }





    return 0;
}
