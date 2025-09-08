#include <stdio.h>

int main() {
    int birthYear;
    char firstName[20], lastName[20];

    printf("What is your firstname? ");
    scanf("%s", firstName);

    printf("What is your lastname? ");
    scanf("%s", lastName);

    printf("What is your birth year? ");
    scanf("%d", &birthYear);


    printf("\n%s %s was born in %d\n", firstName, lastName,
           birthYear);

    return 0;
}
