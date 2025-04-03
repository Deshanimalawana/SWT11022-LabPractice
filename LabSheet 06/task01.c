#include<stdio.h>
int main(){

    int units;
    float total;

    printf("Enter Units: ");
    scanf("%d",&units);

    if (units<=50){
        total=units*0.5;
        }
    else if (units<=150){
        total=(50*0.5) +((units-50)*0.75);
    }

    else if (units<=250){
        total=(50*0.5) + (100*0.75) + ((units-150)*1.20);
    }
    else{
        total=(50*0.5) + (100*0.75)+ (100*1.20) +((units-250)*1.50);
    }
    printf("Electricity Bill is %.2f",total);
    return 0;
}
