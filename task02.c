#include <stdio.h>
int main(){
    float payrate;
    int hours;
    float salary;
    printf("Enter total work hours:");
    scanf("%d",&hours);
    printf("Enter pay rate:");
    scanf("%f",&payrate);
    salary = hours * payrate;
    printf("Your pay rate :%.2f, worked hours:%d, Your Salary :%.2f,\n",payrate,hours,salary);

    return 0;
}
