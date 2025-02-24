#include <stdio.h>

int main() {
    char First_Name[20];
    char Last_Name[20];
    int Birth_Year;

    printf("Enter your first name: ");
    scanf("%s", First_Name);
    printf("Enter your last name: ");
    scanf("%s", Last_Name);
    printf("Enter your birth year: ");
    scanf("%d", &Birth_Year);
    printf("%s %s was born in %d \n", First_Name, Last_Name, Birth_Year);
    return 0;
}