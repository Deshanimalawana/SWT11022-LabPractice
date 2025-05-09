#include<stdio.h>
void greetuser(){
   char name[40];
   printf("Enter your name: ");
   scanf("%s",&name);
   printf("Hello,%s! Welcome to the lab.\n",name);
}
int main(){
   greetuser();
   return 0;
   }
