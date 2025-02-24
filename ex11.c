#include <stdio.h>

int main() {

    char name[20];
    int a, b;
    float c, f;


    char val[] = "Welcome";
    a = 10;
    const float x = 3.73;


    printf("Enter your name: ");
    scanf("%s", name);
    printf("%s\n", val);


    printf("\nYour name is: %s.\n", name);
    c = 90.0 * 3.0;
    printf("Value of c: %f\n", c);



    printf("Value of x: %f\n", x);
    printf("Hello\tWorld\n\n");
    printf("Your\nare\nlearning\n\'c\'language\nDo you know C language?");
    return 0;
}
