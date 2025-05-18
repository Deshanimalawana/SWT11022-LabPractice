#include <stdio.h>

// Function declaration
void greetUser();

int main() {
    greetUser(); // Function call
    return 0;
}

// Function definition
void greetUser() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline character if present
    if (strlen(name) > 0 && name[strlen(name)-1] == '\n') {
        name[strlen(name)-1] = '\0';
    }

    printf("Hello, %s! Welcome to the lab.\n", name);
}
