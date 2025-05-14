#include <stdio.h>

void greetUser() {
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello, %s! Welcome to the lab\n", name);
}

int main() {
    greetUser();
    return 0;
}
