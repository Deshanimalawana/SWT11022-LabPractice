#include <stdio.h>

int main() {
    char firstname[50];
    char lastname[50];
    int year;


    printf("What is your first name? ");
    scanf("%s", firstname);
    printf("What is your last name? ");
    scanf("%s", lastname);
    printf("What is your birth year? ");
    scanf("%d", &year);


    printf(" %s %s was born in %d", firstname, lastname, year);

    return 0;
}
