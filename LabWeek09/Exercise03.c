#include <stdio.h>

void greetUser();

int main(){
    char name[30];
    printf("Enter your Name: ");
    scanf("%s",name);
    greetUser(name);
}

void greetUser(char name[30]){
    printf("Hello, %s! Welcome to the lab",name);
}
