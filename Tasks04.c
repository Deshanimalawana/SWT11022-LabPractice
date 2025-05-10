#include <stdio.h>

int main() {
    char firstname[15], lastname[15];
    int birth_year;

    // first name
    printf("What is your firstname? ");
    scanf("%s", firstname);

    // last name
    printf("What is your lastname? ");
    scanf("%s", lastname);

    // birth year
    printf("What is your birth year? ");
    scanf("%d", &birth_year);

    // Displaying
    printf("%s %s was born in %d\n", firstname, lastname, birth_year);

    return 0;
}
