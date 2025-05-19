#include <stdio.h>
#include <stdlib.h>

void greetUser(char name[]){

    printf("Hello,%s! Welcome to the lab", name);
}

int main (){

    char name[100];

    printf("Enter your Last name: ");
    scanf("%s", &name);

    greetUser(name);

    return 0;
}
