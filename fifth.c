#include <stdio.h>
int main() {
//variable declaration
char name [20];
int a,b;
float c,f;
//variable initialization
char val[] = "Welcome";
a=10;

//Defining constants
 const float x=3.73;
//Interaction with the user
 printf("Enter your name: ");
 scanf ("%s",&name);
 printf (val);

 printf("\n Your name is:%s",name);
 c=90.0*3.0;
 printf ("\n Value of c:%.2f",c);
 printf("\n Value of X:%.2f",x);

 //using the escape sequences
 printf ("\nHello\t world\n\n");
 printf("You\nare\nlearning\n'c'language.\n\"Do you know C language?\"");

 return 0;





}
