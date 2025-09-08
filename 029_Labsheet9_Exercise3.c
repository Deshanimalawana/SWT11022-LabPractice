#include<stdio.h>

void greetuser(char name[50]){
    printf("Hello, %s! Welcome to the lab\n",name);

}

int main(){

    char name[50];

    printf("Enter your name : ");
    scanf("%s",name);

    printf("\n\n");

    greetuser(name);

return 0;
}
