#include <stdio.h>

int main() {
    printf("How many hours do you spend working? ");
    int hours;
    scanf("%d", &hours);
    printf("What is the pay rate? ");
    double rate;
    scanf("%lf", &rate);
    double Total = rate * hours;
    printf("Your total salary would be %.2lf\n", Total);
    return 0;
}
