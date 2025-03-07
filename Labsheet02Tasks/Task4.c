#include <stdio.h>

int main() {

    char firstname[20];
    char lastname[20];
    int birthyear;

    printf("Enter your first name: ");
    scanf("%s", firstname);
    printf("Enter your last name: ");
    scanf("%s", lastname);
    printf("Enter your birth year: ");
    scanf("%d", &birthyear);

    printf("%s %s was born in %d \n", firstname, lastname, birthyear);

    return 0;
    
}