#include <stdio.h>
#include <stdlib.h>

int main()

{
    char firstName[40],lastName[40];
    int birthyear;

    printf("What is your firstname?");
    scanf("%s",firstName);

    printf("what is your lastname?");
    scanf("%s",lastName);

    printf("What is your birth year?");
    scanf("%d",&birthyear);

    printf("\n%s %s was born in %d\n",firstName,lastName,birthyear);

    return 0;
}
