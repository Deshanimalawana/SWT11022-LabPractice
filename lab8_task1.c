#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;  // Numbers less than 2 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If divisible, not a prime number
    }
    return 1;  // Prime number
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

