#include <stdio.h>
#include <string.h>

void displayDeveloperInfo(char name[], char index[]) {
    printf("\nDeveloped by: %s\n", name);
    printf("Index Number: %s\n", index);
    printf("Course: Fundamentals of Programming\n");
}

int main() {
    char name[50], index[20];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    
    printf("Enter your index number: ");
    fgets(index, sizeof(index), stdin);
    index[strcspn(index, "\n")] = '\0';
    
    displayDeveloperInfo(name, index);
    
    return 0;
}