#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int birthYear;

    // Asking for user input
    printf("What is your firstname? ");
    scanf("%s", firstName);

    printf("What is your lastname? ");
    scanf("%s", lastName);

    printf("What is your birth year? ");
    scanf("%d", &birthYear);

    // Displaying the output
    printf("%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}
