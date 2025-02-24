#include <stdio.h>

int main() {
    char first_name[20], last_name[20];
    int birth_year;

    printf("Enter your first name: ");
    scanf("%s", first_name);

    printf("Enter your last name: ");
    scanf("%s", last_name);

    printf("Enter your birth year: ");
    scanf("%d", &birth_year);

    printf("%s %s was born in %d \n", first_name, last_name, birth_year);
    return 0;
}