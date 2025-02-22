#include <stdio.h>
int main(){
  float payrate;
  int hours;
  float totalsalary;
  printf("enter total worked hours:");
  scanf("%d", &hours);
  printf("enter pay rate:");
  scanf("%f",&payrate);
   totalsalary = hours*payrate;
  printf("total salary: %.2f\n",totalsalary);
  return 0;
}
