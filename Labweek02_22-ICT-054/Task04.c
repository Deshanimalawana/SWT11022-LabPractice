#include <stdio.h>

int main() {
    char first_name[10];
    char last_name[10];
    char year[5];

    printf("What is your firstname? ");
    scanf("%s", first_name);

    printf("What is your lastname? ");
    scanf("%s", last_name);

    printf("What is your birth year? ");
    scanf("%s", year);

    printf("%s %s was born in %s\n", first_name, last_name, year);
    return 0;
}
