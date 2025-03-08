#include <stdio.h>
int main() {
    float payRate;
    int hours;
    printf("Enter total worked hours:");
    scanf("%d", &hours);
    printf("Enter payRate: ");
    scanf("%f", &payRate);
    printf("Your payRate:%.2f,worker hours:%d\n", payRate, hours);
    return 0;

}
