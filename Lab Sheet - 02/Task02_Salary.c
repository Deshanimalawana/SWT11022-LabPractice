#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myhour;
    printf("Enter Your total worked hours :");
    scanf("%d", &myhour);

    int payrate;
    printf("Enter Your pay rate per hour :");
    scanf("%d", &payrate);

    printf("Your total worked hours are: %d h, and your pay rate per hour is: RS %d.00\n", myhour, payrate);

    float totalsalary = myhour * payrate;
    printf("Your Total Salary is:RS.%.2f\n",totalsalary);
    return 0;
}

