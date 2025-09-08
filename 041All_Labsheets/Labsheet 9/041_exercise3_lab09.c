#include <stdio.h>

void greetUser(char name[]){
    printf("Hello, %s! Welcome to the lab.\n", name);
}
int main()
{
    char name[20];
    printf("Enter your name: ");
    scanf("%s", &name);
    greetUser(name);
    return 0;
}
