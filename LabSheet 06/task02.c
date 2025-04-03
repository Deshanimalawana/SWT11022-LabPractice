#include<stdio.h>
int main(){
     int age=70;
     float income=50000;

     //printf("Age :");
     //scanf("%d",&age);

     //printf("Income : ");
     //scanf("%f",&income);


     if(age>=60){
        if(income<60000){
            printf("Eligible for tax deduction");
        }
        else {
            printf("Not eligible for tax deduction");
        }
     }
     else {
        printf("Not eligible for tax deduction");
     }
     return 0;
}
