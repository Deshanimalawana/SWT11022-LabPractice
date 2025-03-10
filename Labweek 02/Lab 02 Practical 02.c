#include <stdio.h>
#include <string.h>

int main()
{

    char grade = 'A';
    printf("Grade: %c\n", grade);

    char phrase[] = "Hello, World!";
    int length = strlen(phrase);
    char destination[50];
    strcpy(destination, phrase);

    printf("String Length: %d\n", length);
    printf("Copied String: %s\n", destination);

    return 0;
}
