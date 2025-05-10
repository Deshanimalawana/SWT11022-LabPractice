#include <stdio.h>

int gcd(int a, int b);

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = gcd(x, y);
    printf("The GCD of %d and %d is: %d\n", x, y, result);

    return 0;
}
