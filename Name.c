#include <stdio.h>
int main() {
    char firstname[50];
    char lastname[50];
    int birthyear;

    printf("What is your firstname?");
    scanf("%s", firstname);
    printf("What is your lastname?");
    scanf("%s", lastname);
    printf("What is your birthyear?");
    scanf("%d", birthyear);
    printf("%s %s was born in %d\n", firstname, lastname, birthyear);
    return 0;

}
