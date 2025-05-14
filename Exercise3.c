#include<stdio.h>

void greetuser(){
    char name [60];
    printf("Enter your name:");
    scanf("%s",&name);

    printf("Hello %s,Welcome to the lab!!",name);
}
int main(){
    greetuser();
    return 0;
}
