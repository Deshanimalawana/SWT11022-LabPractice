#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[100];
    char lastName[100];

    printf("What is your firstname? ");
    scanf("%s",firstName);
    printf("What is your lastname? ");
    scanf("%s",lastName);
    int year;
    printf("What is your birth year? ");
    scanf("%d",&year);

    printf("%s %s was born in %.d\n",firstName,lastName,year);
    return 0;
}
