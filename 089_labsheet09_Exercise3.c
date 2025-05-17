#include <stdio.h>

// Function declaration
void greetUser();

int main() {
    greetUser(); // Call the function
    return 0;
}

// Function definition
void greetUser() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Reads one word (no spaces)

    printf("Hello, %s! Welcome to the lab.\n", name);
}
