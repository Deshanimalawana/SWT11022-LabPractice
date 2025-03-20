#include <stdio.h>
int main(){

    int Unit;
    float Bill;
    float First = 0.50;
    float Second= 0.75;
    float Third= 1.20;
    float Above = 1.50;
    printf("Enter number of units:");
    scanf("%d",&Unit);

    if(Unit<=50){
        Bill=Unit * First;
        printf("Your Electricity Rate is :%.2f",Bill);
    }
    else if(Unit<=150){
        Bill=(First*50) + (Unit-50)* Second ;
        printf("Your Electricity Rate is :%.2f",Bill);
    }
    else if(Unit<=250){
        Bill= (First*50)+(Second*100)+(Unit-150)*Third;
        printf("Your Electricity Rate is :%.2f",Bill);
    }
    else{
        (First*50)+(Second*100)+(Third*100)+(Unit-250)*Above;
        printf("Your Electricity Rate is :%.2f",Bill);
    }


return 0;
}
