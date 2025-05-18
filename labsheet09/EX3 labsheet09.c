#include<stdio.h>

void greetUser(char Name[]){
printf("Hello,%s Welcome to the lab.", Name);
}

int main(){
char Name [50];
  printf("Enter your Name:");
   scanf("%s", &Name);
 greetUser(Name);
return 0;
}

