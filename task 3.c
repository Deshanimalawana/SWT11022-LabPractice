#include<stdio.h>
#include<stdlib.h>
int main(){

int hours;
float payrate;
printf("how many hours do you work:");
scanf("%d",&hours);
printf(" pay rate hour:");
scanf("%f",&payrate);
float salary= hours*payrate;
printf("your pay rate:%.2f,worked hours:%d\n",payrate,hours);
printf("the total salary is : RS.%f",salary);
return 0;
}

