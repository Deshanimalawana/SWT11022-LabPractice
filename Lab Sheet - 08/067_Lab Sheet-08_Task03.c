#include <stdio.h>

int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;

        }else {
            b = b - a;
        }
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter Two numbers:- ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is :-  %d\n", num1, num2, gcd(num1, num2));

    return 0;
}
