#include <stdio.h>
int main() {
    char firstName[20], lastName[20];
    int birthYear;
    // Asking for user input
    printf("What is your firstname? ");
    scanf("%s", firstName);
    printf("What is your lastname? ");
    scanf("%s", lastName);
    printf("What is your birth year? ");
    scanf("%d", &birthYear);
    // Displaying output
    printf("%s %s was born in %d\n", firstName, lastName, birthYear);
    return 0;
}
