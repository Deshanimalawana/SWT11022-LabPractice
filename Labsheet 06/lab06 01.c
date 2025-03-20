#include<stdio.h>
    int main() {
        int units;
        float TEB;
        printf("Enter The Units:");
        scanf("%d",&units);

        if(units <= 50){
            TEB = units * 0.50;
            printf("Total Electricity Bill is:Rs%f",TEB);

        }else if(units <= 150){
            TEB = (50*0.50) + 0.75*(units-50);
            printf("Total Electricity Bill is:Rs%f",TEB);

        }else if(units <= 250){
            TEB = (50*0.50) + (100*0.75) + 1.20*(units-150);
            printf("Total Electricity Bill is:Rs%f",TEB);

        }else {
            TEB = (50*0.50) + (100*0.75) + (1.20*100) + 1.50*(units-250);
            printf("Total Electricity Bill is:Rs%f",TEB);

        }
        return 0;
    }
