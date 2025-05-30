#include <stdio.h>

void findMaxMin(int a, int b, int *max, int *min) {
    if (a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}

int main() {
    int num1, num2;
    int maximum, minimum;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    findMaxMin(num1, num2, &maximum, &minimum);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
