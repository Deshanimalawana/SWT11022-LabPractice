#include <stdio.h>
int main(){
    float payrate;
        int hours;
        float salary;
printf("Enter total worked hours: ");
scanf("%d",&hours);
printf("Enter pay rate: ");
scanf("%f",&payrate);
printf("your pay rate is:%.2f,worked hours:%d\n",payrate,hours);
salary= hours*payrate;
printf("your salary is:%.2f",salary);
return 0;
}



