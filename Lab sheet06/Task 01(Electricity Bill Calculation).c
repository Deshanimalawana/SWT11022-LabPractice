#include<stdio.h>

int main() {
    int units;
    float Total1, Total2, Total3, Total4, Fulll_Total;

    printf("Enter amount of units : ");
    scanf("%d",&units);

    if(units > 50) {
        units = units - 50;
        Total1 = 50*0.50;

        if(units > 100) {
            units = units - 100;
            Total2 = 100*0.75;

            if(units > 100) {
                units = units - 100;
                Total3 = 100*1.20;

                if(units > 250) {
                    Total4 = units * 1.50;
                } else{
                    Total4 = units * 1.50;
                }

            } else {
                Total3 = units * 1.20;
            }
        } else {
            Total2 = units * 0.75;
        }
    } else {
        Total1 = units * 0.50;
    }
    Fulll_Total = Total1+Total2+Total3+Total4;
    printf("Electricity bill is : Rs. %.2f\n",Fulll_Total);
    return 0;
}
