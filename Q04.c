#include <stdio.h>

int main() {
    char firstName[20], lastName[20];
    int birthYear;


    printf("What is your first name? ");
    scanf("%s", firstName);

    printf("What is your last name? ");
    scanf("%s", lastName);

    printf("What is your birth year? ");
    scanf("%d", &birthYear);


    printf("\n%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}
