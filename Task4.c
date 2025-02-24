#include <stdio.h>

int main() {
    char firstName[20];
    char lastName[20];
    int birthYear;

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    printf("%s %s was born in %d \n", firstName, lastName, birthYear);

    return 0;
}