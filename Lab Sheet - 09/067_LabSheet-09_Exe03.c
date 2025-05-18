#include <stdio.h>

void greetUser(char name[50]);

int main()
{
    char name[50];
    greetUser(name);
    printf("Hello, %s! Welcome to the lab.\n", name);
    return 0;
}

void greetUser(char name[50])
{
    printf("Enter Your Name :- ");
    scanf("%s", name);
}
