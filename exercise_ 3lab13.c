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
    int num1, num2, maximum, minimum;


    printf("Enter two integers:\n");
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);


    findMaxMin(num1, num2, &maximum, &minimum);


    printf("\nMaximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}
