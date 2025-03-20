#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char firstName[20];
    char lastName[20];
    int year;
    //getting user input
    printf("What is your First name:");
    scanf("%s",&firstName);
    printf("What is your last name:");
    scanf("%s", &lastName);
    printf("What is your birth year:");
    scanf("%d", &year);
    //output function
    printf("%s %s was born in %d",firstName, lastName, year);

    return 0;
}
