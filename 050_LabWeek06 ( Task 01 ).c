#include <stdio.h>
int main(){

    int units;
    float rate,total;

    printf("Enter the number of unites: ");
    scanf("%d",&units);

    if( units <= 50){
        total = units*0.50;
        printf("Total:Rs.%.2f",total);
    }else if( units <= 150){
        total = units*0.75;
        printf("Total:Rs.%.2f",total);
    }else if( units <= 250){
        total = units*1.20;
        printf("Total:Rs.%.2f",total);
    }else {
        total = units*1.50;
        printf("Total:Rs.%.2f",total);
    }

    return 0;
}


