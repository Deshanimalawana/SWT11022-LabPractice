#include <stdio.h>

int main() {
    //variable declaration
    char name[20]; // flot is misspelled, should be float
    int a, b;
    float c, f;

    //variable initialization
    char val[] = "Welcome";
    a = 10;

    //Defining Constants
    const float x = 3.73; // Missing semicolon

    //Interaction with the user
    printf("Enter your name: "); // Missing closing quotation mark
    scanf("%s", name); // Remove ampersand (&) before name
    printf("%s", val); // Need to pass the val variable to printf
    printf("\nYour name is %s.", name); // Use %s for strings, not %d

    c = 90.0 * 3.0; // Missing semicolon
    printf("\nValue of c: %f", c);

    // Uncommenting this line would cause an error because 'x' is a constant
    // x = 49; // Cannot modify the value of a constant

    printf("\nValue of x: %f", x);

    //using the escape sequences
    printf("Hello\tWorld\n\n");
    printf("You\nare\nlearning\n\'c\' language\n\"Do you know C language?\"");

    return 0;
}
