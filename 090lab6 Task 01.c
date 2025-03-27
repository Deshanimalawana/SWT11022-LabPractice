#include <stdio.h>
int main (){

int units;
float Bill;
printf("Enter Your Units: ");
scanf("%d",&units);

if (units<=50){
    Bill=0.50*units;
    }
    else if (units<=150){
        Bill=50*0.50+((units-50)*0.75);
    }
    else if (units<=250){
        Bill=50*0.50+100*0.75+((units-150)*1.20);
    }
    else{
        Bill=50*0.50 + 100*0.75 + 100*1.20 + (units-250)*1.50;
    }
    printf("Your Bill is Rs.%.2f",Bill);

return 0;
}

