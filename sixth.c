#include <stdio.h>

int main()
{

    char firstName [50];
    char lastName [50];
    int birthYear;

    printf("What is your first name?");
    scanf("%s", &firstName);
    printf("What is your last name?");
    scanf("%s", &lastName);
    printf("What is your birthYear?");
    scanf("%d", &birthYear);

    printf("%s %s was born in %d\n", firstName,lastName,birthYear);

    return 0;

}
