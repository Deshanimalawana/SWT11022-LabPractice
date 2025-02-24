#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstName[] = "ABC";
    char lastName[] = "XYZ";
    int birthYear = 2000;

    printf("what is your firstname? %s\n", firstName);
    printf("what is your lastname? %s\n", lastName);
    printf("what is your birth year? %d\n", birthYear);
    printf("%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;
}
