#include <stdio.h>
int main () {
    int units;
    printf("Enter number of units: ");
    scanf("%d",&units);

    if (units<=50){
           float bill=units*0.50;
        printf("Electricity bill payment for %d units are: %.2fRs\n",units,bill);
    }
    else if (units<=100){
          float bill=units*0.75;
        printf("Electricity bill payment for %d units are: %.2fRs\n",units,bill);
    }
    else if (units<=200){
        float bill=units*1.20;
        printf("Electricity bill payment for %d units are: %.2fRs\n",units,bill);
    }
    else{
       float bill=units*1.50;
        printf("Electricity bill payment for %d units are: %.2fRs\n",units,bill);
    }
    return 0;
}
