#include <stdio.h>
int main (){

    // Variable declaration
    char name[20];
    int a,b;
    float c,f;

    // Variable initialization
    char val[]= "Welcome";
    a=10;

    // Defining Constants
    const float x=3.73;

    // Interaction with the user
    printf("Enter your name: ");
    scanf("%s",name);

    printf("%s\n", val);


    printf("\nYour name is %s.", name);
    c=90.0*3.0;

    printf("\nValue of c: %f", c);

    printf("\nValue of X: %f", x);

    //using the escape sequences
    printf("Hello\tWorld\n\n");
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language\"");

    return 0;

}
