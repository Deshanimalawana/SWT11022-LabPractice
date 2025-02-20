#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main()
{
    float payrate;
    int hours;

    printf("Enter Total Worked Hours:");
    scanf("%d", &hours);

    printf("Enter pay rate:");
    scanf("%f", &payrate);

    printf("\nYour pay rate:%.2f\nWorked Hours:%d\n", payrate,hours);
    return 0;
}
