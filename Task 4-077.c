#include <stdio.h>
int main()
{
    char Firstname[60];
    char Lastname[60];
    int BirthYear;

    printf("What is your Firstname? ");
    scanf("%s", Firstname);
    printf("What is your Lastname? ");
    scanf("%s", Lastname);
    printf("What is your Birth year? ");
    scanf("%d", &BirthYear);
    printf("%s %s was born in %d\n", Firstname, Lastname, BirthYear);
    return 0;
}
