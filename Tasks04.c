#include <stdio.h>

int main() {
    char firstName, lastName;
    int birthYear;

    printf("What is your firstname? ");
    scanf("%s", firstName);

    printf("What is your lastname? ");
    scanf("%s", lastName);

    printf("What is your birth year? ");
    scanf("%d", &birthYear);

    printf("%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}

