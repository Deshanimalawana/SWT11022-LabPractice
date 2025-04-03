#include <stdio.h>

// Function prototype
int isPrime(int num);

int main() {
    int number;

    // Testing the isPrime function
    printf("Enter a number to check if it's prime: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than 2 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If divisible by any number other than 1 and itself, not prime
        }
    }
    return 1; // Prime number
}
