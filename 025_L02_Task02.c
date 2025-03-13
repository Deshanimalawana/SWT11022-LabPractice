#include <stdio.h>
int main()
{
    float PayRate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter PayRate: ");
    scanf("%f", &PayRate);
    printf("Your PayRate: %.2f, Worked Hourse: %d\n", PayRate,hours);
    return 0;
}
