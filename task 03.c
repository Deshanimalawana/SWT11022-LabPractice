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

    printf("Your name is: %s\n", name);
    c = 90.0 * 3.0;
    printf("Value of c: %.2f\n", c);
    printf("Value of X: %.2f\n", x);

    printf("Hello\tWorld\n\n");
    printf("You\nare\nlearning\n\'C\' language\n\"Do you know C language?\"\n");

    return 0;
}
