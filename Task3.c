#include <stdio.h>

int main(){
    char name[20]; 
    int a, b;
    float c, f;     //variable declaration

    char val[] = "Welcome";
    a = 10;     //variable initialization

    const float x = 3.73;     //Defining Constants

    printf("Enter your name: ");
    scanf("%s", name);      //Inteaction with the user
    printf("%s", val);    

    printf("\nYour name is %s.", name);
    c = 90.0 * 3.0;
    printf("\nValue of c: %f", c);
    printf("\nValue of X: %f\n", x);
    
    printf("Hello\tWorld\n\n");
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language\"");       //using the escape sequances

    return 0;
}