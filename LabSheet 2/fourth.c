#include <stdio.h>

int main() {

    char FName[20];
    char LName[20];
    int BYear;

    printf("Enter your first name: ");
    scanf("%s", FName);
    printf("Enter your last name: ");
    scanf("%s", LName);
    printf("Enter your birth year: ");
    scanf("%d", &BYear);
    printf("%s %s was born in %d \n", FName, LName, BYear);

    return 0;
    
}