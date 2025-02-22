#include <stdio.h>
int main(){
    float payrate;
    int hours;
    printf("Enter total worked hours: ");
    scanf("%d", &hours);
    printf("Enter pay rate: ");
    scanf("%f", &payrate);
    printf("your pay rate: %.2f, worked hours: %d\n", payrate,hours);
    return 0;}
