#include<stdio.h>
int main(){
float payrate;
int workhour;
printf("enter your work hour:");
scanf("%d",&workhour);
printf("enter your payrate:");
scanf("%f",&payrate);
int salary=payrate*workhour;
printf("salary,%d",salary);
return 0;
}


