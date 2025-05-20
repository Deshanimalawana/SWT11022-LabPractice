#include <stdio.h>

void findMaxMin(int a, int b, int *max, int *min);

int main() {
    int num1, num2;
    int max, min;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    findMaxMin(num1, num2, &max, &min);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

void findMaxMin(int a, int b, int *max, int *min) {
    if (a > b) {
        *max = a;
        *min = b;
    } else {
        *max = b;
        *min = a;
    }
}
