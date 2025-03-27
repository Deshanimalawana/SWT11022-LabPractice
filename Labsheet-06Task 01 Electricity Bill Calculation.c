#include<stdio.h>
int main()
{
    int unit;
    float Bill = 0.0;
    printf("Enter Your Units: ");
    scanf("%d", &unit);

    if (unit <= 50) {
        Bill = unit * 0.50;

    }else if (unit <= 150) {
        Bill = (50 * 0.50) + ((unit - 50) * 0.75);

    }else if (unit <= 250) {
        Bill = (50 * 0.50) + (100 * 0.75) + ((unit - 150) * 1.20);

    }else {
        Bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((unit - 250) * 1.50);
    }

    printf("YOUR Bill: %.2f\n", Bill);
    return 0;
}
