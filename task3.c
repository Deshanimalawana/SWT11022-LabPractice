#include <stdio.h>
int main (){

float payrate;
int hours;
printf("Enter the worked hours:");
scanf("%d",&hours);

printf("Enter the Pay Rate:");
scanf("%f",&payrate);

printf("Your pay rate is:%.2f, Worked Hours: %d\n",payrate,hours);


return 0;
}
