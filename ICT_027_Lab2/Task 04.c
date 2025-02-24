#include <stdio.h>
#include <stdlib.h>

int main() {
    char f_name[25];
    char l_name[25];
    int birthyear;

    printf("What is your firstname?");
    scanf("%s", f_name);

    printf("What is your lastname?");
    scanf("%s", l_name);

    printf("What is your birth year?");
    scanf("%d", &birthyear);

    printf("%s %s was born in %d\n", f_name, l_name, birthyear);

    return 0;
}