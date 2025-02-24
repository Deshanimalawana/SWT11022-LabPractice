#include <stdio.h>
#include <string.h>

int main () {
    char firstname [100];
    char lastname [100];
    int birthyear;

    printf("What is your first name? " );
    scanf("%s", &firstname);
    printf("What is your last name? " );
    scanf("%s", &lastname);
    printf("What is your birth year? " );
    scanf("%d", &birthyear);
    printf("%s %s was born in %d\n",firstname, lastname, birthyear);
    return 0;

}
