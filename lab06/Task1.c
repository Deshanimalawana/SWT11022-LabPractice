#include<stdio.h>

int main(){
float bill,units;

printf("Enter your units: ");
scanf("%f", &units);

if (units<=50){
        bill=units*0.50;
        printf("Your bill is %.2f\n", bill);
}
else if (units<=150){
    bill = (50*0.5)+(units-50)*0.75;
    printf("Your bill is %.2f\n", bill);
}
else if (units<=250){
    bill=(50*0.5)+(100*0.75)+(units-150)*1.20;
    printf("Your bill is %.2f\n", bill);
}
else{
    bill=(50*0.5)+(100*0.75)+(100*1.20)+((units-250)*1.50);
    printf("Your bill is %.2f\n", bill);
}
return 0;
}
