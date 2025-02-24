#include <stdio.h>
#include <stdlib.h>

int main()
{

    char firstName[50], lastName[50];
    int birthYear;

    // Getting user input
    printf("What is your firstname? ");
    scanf("%s", firstName);

    printf("What is your lastname? ");
    scanf("%s", lastName);

    printf("What is your birth year? ");
    scanf("%d", &birthYear);

    // Printing the output
    printf("\n%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}




