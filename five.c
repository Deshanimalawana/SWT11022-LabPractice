#include <stdio.h>
int main() {

float payrate;
int hours;
printf("Enter total worked hours:");
scanf("%d", &hours);
printf("Enter pay rate:");
scanf("%f",&payrate);
printf("your pay rate: %.2f, worked hours: %d\n", payrate,hours);
float salary = payrate * hours;
printf("Your salary:%.2f\n",salary);


return 0;
}
