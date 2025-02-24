#include <stdio.h>

int main()
{
    char first_name [20],Last_name [20];
    int birth_year;

    printf("Enter your first name: ");
    scanf("%s",first_name);

    printf("Enter your last name: ");
    scanf("%s",Last_name);

    printf("Enter your birth year: ");
    scanf("%d",&birth_year);

    printf("\n%s %s was born in %d.\n", first_name,Last_name,birth_year);
    return 0;
}
