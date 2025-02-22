#include <stdio.h>
int main()
{   float hours, payrate,total_salary;
  printf("Enter the total work hours:\n");
  scanf("%f",&hours);
  printf("Enter pay rate per hour:\n");
  scanf("%f", &payrate);
  total_salary= hours*payrate;
  printf("your total salery is: %.2f",total_salary);
  return 0;
}
