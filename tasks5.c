#include <stdio.h>
int main(){
    char firstName[20];
    char lastName[30];
    int birthYear;

    printf("what is your first name?");
    scanf("%s", firstName);
    printf("what is your last name?");
    scanf("%s", lastName);
    printf("what is your birth year?");
    scanf("%d", &birthYear);
    printf("%s %s was born in %d\n", firstName, lastName, birthYear);

    return 0;


    }











