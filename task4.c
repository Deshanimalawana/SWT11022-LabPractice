#include <stdio.h>

int main() {
    char x[50];  // Array to hold the first name
    char y[50];  // Array to hold the last name
    int z;       // Variable to hold the birth year

    // Get the first name
    printf("What is your name? ");
    scanf("%s", x);  

    // Get the last name
    printf("What is your lastname? ");
    scanf("%s", y);

    // Get the birth year
    printf("What is your birth year? ");
    scanf("%d", &z);  // Use '&z' to correctly store the value

    // Print the formatted result
    printf("%s %s was born in %d\n", x, y, z);

    return 0;
}

