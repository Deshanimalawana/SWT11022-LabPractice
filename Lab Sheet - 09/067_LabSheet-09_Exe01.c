#include <stdio.h>

void displayDeveloperInfo();

int main()
{
    displayDeveloperInfo();
    return 0;
}

void displayDeveloperInfo()
{
    char name[50];
    char index[15];

    printf("Developed By :- ");
    scanf("%s",name);

    printf("Index Number :- ");
    scanf("%s",index);

    printf("Course : Fundamentals of Programming\n");
}




