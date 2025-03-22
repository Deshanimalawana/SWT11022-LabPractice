#include <stdio.h>
int main(){

    int units;
    float rate;
    float totalbill;

    printf("Enter the units:");
    scanf("%d" ,&units);
    printf("Enter the rate:");
    scanf("%f", &rate);



    if(units<= 50){
            totalbill= units*50;

    }
     else if(units>= 50){
            totalbill=(units-50)*0.75 + (50*0.50);

    }
    else if (units>=100){
            totalbill= (units-100)*1.20+ (50*0.50)+ (50*0.75);
    }

    else if(units>250){
            totalbill= (units-250)*1.50 + (50*0.50)+ (50*0.75) + (100*1.20);

    }
    printf("Total Bill is:%.2f", totalbill);

    return 0;

}
