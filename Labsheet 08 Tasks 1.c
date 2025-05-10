#include <stdio.h>


int isPrime(int num) {

    if (num <= 1) {
        return 0;
    }

    for (int i=2; i*i <= num; i++) {
        if (num % i==0) {
            return 0;
        }
    }
    return 1;
}



int main() {

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    int result = isPrime(number);

    if (result == 1) {
        printf("Prime number", number);

    } else {
        printf("Not prime number", number);

    }

    return 0;
}
