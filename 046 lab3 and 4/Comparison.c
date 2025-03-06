#include<stdio.h>

int main() {
    int condition1 = 1; // true
    int condition2 = 0; // false
    int condition3 = 1; // true

    int result1 = condition1 && condition2;
    int result2 = condition1 || condition3;
    int result3 = !condition2;

    printf("Result 1: %s\n", result1 ? "true": "false");
    printf("Result 2: %s\n", result2 ? "true": "false");
    printf("Result 3: %s\n", result3 ? "true": "false");

    return 0;
}
