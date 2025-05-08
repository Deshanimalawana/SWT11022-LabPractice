#include <stdio.h>
int main(){
    int unit;
    float rate;
    float bill;

    printf("Enter the unit:");
    scanf("%d",&unit);

    printf("Enter the rate:");
    scanf("%f",&rate);

    bill = unit*rate;

    if(unit>=50 && rate>=0.50){
        printf("Total electricity bill is:%f\n",bill);
    }
    else if (unit>=100 && rate>=0.75){
        printf("Total electricity bill is:%f\n",bill);
    }
    else if (unit>=100 && rate>=1.20){
        printf("Total electricity bill is:%f\n",bill);
    }
    else {
        printf("Total electricity bill is:%f\n",bill);
    }
    return 0;
}
