#include <stdio.h>

int main() {
    char firstname[50], lastname[50];
    int birth_year;


    printf("What is your firstname? ");
    scanf("%s", firstname);
    printf("What is your lastname? ");
    scanf("%s", lastname);
    printf("What is your birth year? ");
    scanf("%d", &birth_year);


    printf("%s %s was born in %d\n", firstname, lastname, birth_year);

    return 0;
}
