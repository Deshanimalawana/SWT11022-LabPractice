#include <stdio.h>
#include <stdlib.h>
int main() {

    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate ");
    scanf("%f", &payrate);
    printf("you pay rate: %.2f, worked house: %d\n", payrate, hours);
    return 0;
}


