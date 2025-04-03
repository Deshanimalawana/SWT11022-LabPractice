#include<stdio.h>
int main(){
    int unit;
    float rate;
    float total ;


    printf("Enter the unit:");
    scanf("%d",&unit);


    if (unit<=50){

        total = unit*0.5;
        printf("total bill:%f",total);

    }else if(unit<150){

        total = ((unit-50)*0.75) + (50*0.50);
        printf("total bill:%f",total);


    }else if(unit<=250){

        total = ((unit-150)*1.20)+ (50*0.50)+(100*0.75);
        printf("total bill:%f",total);

    }else{

        total = (unit-250)*1.50 +(50*0.50)+(100*0.75)+(100*1.20);
        printf("total bill:%f",total);



    }









    }


















