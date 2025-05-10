#include <stdio.h>


int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = gcd(num1, num2);

    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
