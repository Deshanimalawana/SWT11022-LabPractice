#include <stdio.h>

void findMaxMin(int num1, int num2, int *max, int *min) {
    if(num1 > num2) {
        *max = num1;
        *min = num2;
    } else {
        *max = num2;
        *min = num1;
    }
}

int main() {
    int a, b, maximum, minimum;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    findMaxMin(a, b, &maximum, &minimum);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
