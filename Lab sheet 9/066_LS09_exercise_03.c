#include <stdio.h>
#include <string.h>

void greetUser() {
    char name[50];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Hello, %s! Welcome to the lab.\n", name);
}

int main() {
    greetUser();
    return 0;
}