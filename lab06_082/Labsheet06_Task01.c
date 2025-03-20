#include <stdio.h>

int main( ){
    int units;
    float Rate;

    printf("Enter the units:");
    scanf("%d",&units);

    if(units<=50){
            Rate=units*0.50;

    }else if(units>=50){
            Rate=(units-50)*0.75+(50*0.50);

    }else if(units>=100){
            Rate=(units-100)*1.20+(50*0.50)+(50*0.75);

    }else if(units>250){
             Rate=(units-250)*1.50+(50*0.50)+(50*0.75)+(100*1.20);
    }

    printf("Total bill:%.2f\n",Rate);
    return 0;














}
