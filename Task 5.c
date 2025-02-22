#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int birthYear;

    // Prompt user for input
    printf("What is your firstname? ");
    scanf("%s", firstName);

    printf("What is your lastname? ");
    scanf("%s", lastName);

    printf("What is your birthyear? ");
    scanf("%d", &birthYear);

    // Print the formatted output
    printf("%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}
