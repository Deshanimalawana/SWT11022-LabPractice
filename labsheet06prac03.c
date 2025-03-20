#include <stdio.h>
int main(){
    float units,bill=0.0;

    printf("enter the number of units :");
    scanf("%f",&units);


    if (units <= 50){
        bill=units*0.05;
    }
    else if(units <= 150){
        bill=50*0.50+(units -50)*0.75;
        }
    else if(units<=250){
        bill=50*0.50+100*0.75+(units -150)*1.20;
    }
    else{
        bill=50*0.50+100*0.75+100*1.20+(units -250)*1.50;
    }

    printf("total electricity bill: Rs %.2f\n",bill);

return 0;
}
