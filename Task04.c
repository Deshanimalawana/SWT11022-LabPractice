#include <stdio.h>
int main ()
{
    char firstname[15];
    char lastname[15];
    int birthYear;

    printf("What is your firstname?");
    scanf("%s",firstname);

    printf("What is your lastname?");
    scanf("%s",lastname);

    printf("What is your birthYear?");
    scanf("%d",&birthYear);

    printf("%s %s was born in %d\n",firstname,lastname,birthYear);
    return 0;
}
