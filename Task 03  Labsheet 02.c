#include <stdio.h>
#include <stdlib.h>

int main()
{
    float payrate;
    int hours;
    printf("Enter total worked hours :");
    scanf("%f",&hours);

    printf("Enter pay rate per hour :");
    scanf("%f, &payrate");

    printf("your pay rate is :%2f,worked hours:%d\n",payrate,hours);

    return 0;
}
