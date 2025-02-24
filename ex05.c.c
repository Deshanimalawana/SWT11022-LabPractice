#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name [20];
    int a,b;
    float c,f;

    //variable initialization
    char va1[]="Welcome";
    a=10;

    //Define Constants
    const float x=3.73;

    //Interaction with the user
    printf("Enter your name:");
    scanf("%s",name);
    printf("%s,va1");
    printf("\n your name is %s. ", name);
    c=90*3.0;
    printf("\n value of c:%f",c);

    //using the escape sequences
    printf("\nHello\t world \n\n");
    printf("You\nare\nlearning\n'c' language\n\"Do you know C language\"");
    return 0;
}
