#include<stdio.h>

int gcd(int a, int b) {

    if (b == 0) {
        return a;
    } else {

        return gcd(b, a % b);
    }
}


int main() {
    int num1 = 48;
    int num2 = 18;
    int result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
