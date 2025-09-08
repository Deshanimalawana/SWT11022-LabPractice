#include <stdio.h>
void greetUser(){
char name[50];

printf("Enter your Name: ");
scanf("%s",&name);

printf("Hello, %s! Welcome to the Lab.",name);
printf("\n");
}

int main(){
  greetUser();
  return 0;
}
