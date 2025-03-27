#include <stdio.h>
int main(){

    int unit;
    float rate;
    float totalBill;

    printf("Enter the units:");
    scanf("%d",&unit);

    printf("Enter the rate:");
    scanf("%f",&rate);

    totalBill = unit*rate;

    if(unit>=50 && rate>=0.50){
         printf("Total bill is:%.2f\n",totalBill);
    }
    else if (unit>=100 && rate>=0.75){
         printf("Total bill is:%.2\n",totalBill);
    }
    else if (unit>=100 && rate>=1.20){
        printf("Total bill is:%.2f\n",totalBill);
    }
    else{
        printf("Total bill is:%.2f\n",totalBill);
    }
    return 0;
}
