#include<stdio.h>
 void greetUser(char name[]);

int main(){
 char name[100];
 printf("Enter the name: ");
 scanf("%s", name);
 greetUser(name);
 return 0;
}

void greetUser(char name[]){
   printf("Hello, %s! Welcome to the lab.\n",name);
}
