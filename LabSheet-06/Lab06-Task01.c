#include<stdio.h>
int main(){
    int Units;
    float bill;

    printf("Enter your Units:");
    scanf("%d", &Units);

    if(Units<=50){
        bill =Units * 0.50;
    }
    else if(Units<=150){
        bill = (50*0.50)+((Units - 50)*0.75);
    }
    else if (Units<=250){
        bill = (50*0.50)+(100*0.75)+((Units - 150)*1.20);
    }
    else{
        bill = (50*0.50)+(100*0.75)+(150*1.20)+((Units - 200)*1.50);
    }
    printf("Total Electricity Bill: Rs.%.2f\n",bill);

    return 0;
}
