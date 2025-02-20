#include <stdio.h>
#include <stdlib.h>

int main()
{
    float payrate;
    int hours;
    printf("enter total worked hours:");
    scanf("%d",&hours);
    printf("enter  pay rate:");
    scanf("%f", &payrate);
    printf("your pay rate: %.2f,worked hours: %d\n",payrate, hours);
    return 0;
}
