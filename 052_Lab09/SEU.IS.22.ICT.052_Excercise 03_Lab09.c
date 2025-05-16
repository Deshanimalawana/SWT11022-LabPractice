#include <stdio.h>

void greetuser(char name[20]);

int main() {
    char name[20];
    printf("Enter your name:\n");
    scanf("%s", name);

    greetuser(name);
    return 0;
}

void greetuser(char name[20]) {
    printf("Hello, %s! Welcome to lab.\n", name);
}

